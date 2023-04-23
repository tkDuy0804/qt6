#ifndef MAINDIRECTORY_H
#define MAINDIRECTORY_H

#include <QObject>
#include <QDir>
#include <QDebug>
#include <QFileInfo>
#include <QtMath>

class MainDirectory : public QObject
{
    Q_OBJECT
public:
    explicit MainDirectory(QObject *parent = nullptr);
    explicit MainDirectory(const QString& current_directory);

    quint16 convertByteToKByte(quint64 size_in_byte);
    quint16 convertByteToMByte(quint64 size_in_byte);

    QString getCurrentDirectory(void);
    void setCurrentDirectory(const QString& new_diretory);

    QString getMainFolderName(void);

    void listAllItems(void);

private:
    QString m_main_folder_name;
    QString m_current_directory;
    QString m_sub_folder_name;
    QList<QString> m_image_name;
    QList<QString> m_video_name;
};

#endif // MAINDIRECTORY_H
