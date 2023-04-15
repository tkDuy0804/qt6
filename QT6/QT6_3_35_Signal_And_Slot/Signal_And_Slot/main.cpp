#include <QCoreApplication>
#include "test.h"

void test_signal_and_slot(void)
{
    Test first_instance;
    Test second_instance;

    first_instance.setObjectName("First");
    second_instance.setObjectName("Second");

    /* You have to connect the two objects */
    /* Don't make multiple connections to the same signal and slot unless you want multiple calls */
    /* Notice the icons */
    /* Can have a connection type */
    QObject::connect(&first_instance, &Test::signalInt, &second_instance, &Test::receiveSignalInt, Qt::AutoConnection);
    QObject::connect(&first_instance, &Test::signalString, &second_instance, &Test::receiveSignalString, Qt::AutoConnection);

    first_instance.sendSignalInt(32);
    first_instance.sendSignalString("Hello_World");
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test_signal_and_slot();

    return a.exec();
}
