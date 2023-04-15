#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QDebug>

class Test : public QObject
{

    Q_OBJECT

public:
    explicit Test(QObject *parent = nullptr);
    ~Test(void);

    void sendSignalInt(uint32_t int_signal);
    void sendSignalString(QString string_signal);

signals:
    /* Always public */
    /* Always defined */
    /* Never implimented */
    void signalInt(uint32_t signal);
    void signalString(QString signal);

public slots:
    /* Can be public, private, protected */
    /* Always defined and implimented */
    /* Should match the signal */
    void receiveSignalInt(uint32_t signal);
    void receiveSignalString(QString signal);
};

#endif // TEST_H
