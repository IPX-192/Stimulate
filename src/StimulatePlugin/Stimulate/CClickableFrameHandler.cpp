#include <QApplication>
#include <QFrame>
#include <QVBoxLayout>
#include <QWidget>
#include <QMouseEvent>
#include <QEvent>

class ClickableFrameHandler : public QObject {
public:
    QList<QFrame *> frames;

    explicit ClickableFrameHandler(QObject *parent = nullptr) : QObject(parent) {}

protected:
    bool eventFilter(QObject *watched, QEvent *event) override {
        if (event->type() == QEvent::MouseButtonPress) {
            QFrame *clickedFrame = qobject_cast<QFrame *>(watched);
            if (clickedFrame && frames.contains(clickedFrame)) {
                // 检查当前框是否已经有红色边框
                QString currentStyle = clickedFrame->styleSheet();
                if (currentStyle.contains("border: 2px solid red;")) {
                    // 如果有红色边框，移除边框
                    clickedFrame->setStyleSheet("border: 2px solid transparent;");
                } else {
                    // 如果没有红色边框，先重置其他框样式，然后设置当前框
                    for (QFrame *frame : frames) {
                        frame->setStyleSheet("border: 2px solid transparent;");
                    }
                    clickedFrame->setStyleSheet("border: 2px solid red;");
                }
                return true; // 事件已处理
            }
        }
        return QObject::eventFilter(watched, event);
    }
};
