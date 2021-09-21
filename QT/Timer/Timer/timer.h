#ifndef TIMER_H
#define TIMER_H

#include <QObject>
#include <QDebug>
#include <QTimer>


class timer : public QObject
{
    Q_OBJECT
public:
    explicit timer(QObject *parent = nullptr);

signals:

public slots:
    void timeout();

private:
    QTimer m_timer;
    int count;

};

#endif // TIMER_H
