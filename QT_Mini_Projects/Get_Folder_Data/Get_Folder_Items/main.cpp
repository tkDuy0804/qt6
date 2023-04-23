#include <QCoreApplication>
#include <QString>
#include "maindirectory.h"

const QString& test_path = "F:\\OneDrive\\Documents\\Bao_cao\\02_Benadamdang\\Official\\2023\\01_Public_ngoai_duong_cuc_hot - (14_2)";

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MainDirectory *example = new MainDirectory(test_path);

    qInfo() << "Current path is: " << example->getCurrentDirectory();

    qInfo() << "Current folder name is: " << example->getMainFolderName();

    example->listAllItems();

    delete example;
    return a.exec();
}
