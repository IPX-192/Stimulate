#include <QApplication>
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>
#include <QMouseEvent>
#include <QEvent>
#include<QDebug>

class ClickableLabelHandler : public QObject {
public:
    QList<QLabel *> labels;

    explicit ClickableLabelHandler(QObject *parent = nullptr) : QObject(parent) {}

protected:
    bool eventFilter(QObject *watched, QEvent *event) override
    {
        if (event->type() == QEvent::MouseButtonPress)
        {
            QLabel *clickedLabel = qobject_cast<QLabel *>(watched);
            if (clickedLabel && labels.contains(clickedLabel))
            {

                //检查当前是否标签是否有选中后的蓝色边框
                QString currentLabelStyle = clickedLabel->styleSheet();

                if(currentLabelStyle.contains("#4d90d5"))
                {
                    //恢复至默认
                    clickedLabel->setStyleSheet("border: 2px solid transparent;");
                }
                else
                {
                    //设置点击Label的样式
                    clickedLabel->setStyleSheet("border: 1px solid #4d90d5;");
                }

                return true; // 事件已处理
            }
        }
        return QObject::eventFilter(watched, event);
    }
};


