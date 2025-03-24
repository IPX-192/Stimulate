#ifndef CLABELBTN_H
#define CLABELBTN_H

#include <QWidget>
#include <QMouseEvent>
#include <QDebug>

class CLabelBtn: public QWidget
{
    Q_OBJECT
public:
    CLabelBtn(QWidget *parent = nullptr);

signals:
    void sigBtnWigetClicked();

protected:
    void mouseReleaseEvent(QMouseEvent *event) override
    {
        if (event->button() == Qt::LeftButton)
        {
            emit sigBtnWigetClicked();
        }
    }
};

#endif // CLABELBTN_H
