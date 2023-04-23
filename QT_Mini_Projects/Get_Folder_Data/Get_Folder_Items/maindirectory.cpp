#include "maindirectory.h"

MainDirectory::MainDirectory(QObject *parent) : QObject{parent}
{

}

MainDirectory::MainDirectory(const QString& current_directory) : m_current_directory{current_directory}
{

}

quint16 MainDirectory::convertByteToKByte(quint64 size_in_byte)
{
    return qFloor(size_in_byte / 1024);
}

quint16 MainDirectory::convertByteToMByte(quint64 size_in_byte)
{
    return qFloor(size_in_byte / pow(1024, 1024));
}

QString MainDirectory::getCurrentDirectory(void)
{
    return m_current_directory;
}

void MainDirectory::setCurrentDirectory(const QString &new_diretory)
{
    m_current_directory = new_diretory;
}

QString MainDirectory::getMainFolderName(void)
{
    QFileInfo folder_name(m_current_directory);
    return folder_name.fileName();
}

void MainDirectory::listAllItems(void)
{
    QDir dir(m_current_directory);
    QList<QFileInfo> fileList= dir.entryInfoList();
    const QString seperator = {" : "};
    QString prefix, file_name, file_suffix, file_size;

    for (int i=0; i< fileList.size(); i++)
    {
        if (fileList.at(i).isFile())
        {
            prefix = "File";
            file_name = fileList.at(i).baseName();
            file_suffix = fileList.at(i).suffix();
            file_size = QString::number(convertByteToKByte(fileList.at(i).size()));
        }
        else if (fileList.at(i).isDir())
        {
            prefix = "Directory";
        }

        qInfo() << prefix + seperator + \
                   file_name + seperator + \
                   file_suffix + seperator +
                   file_size;
    }

}
