#include "test.h"

Test::Test(QObject *parent) : QObject(parent)
{
    qInfo() << this << "Constructed";
}

Test::~Test(void)
{
    qInfo() << this << "Deconstructed";
}

void Test::sendSignalInt(uint32_t int_signal)
{
    emit signalInt(int_signal);
}

void Test::sendSignalString(QString string_signal)
{
    emit signalString(string_signal);
}

void Test::receiveSignalInt(uint32_t signal)
{
    qInfo() << "From" << sender() << signal;
}

void Test::receiveSignalString(QString signal)
{
    qInfo() << "From" << sender() << signal;
}
