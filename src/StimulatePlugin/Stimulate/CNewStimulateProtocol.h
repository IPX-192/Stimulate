#ifndef CNEWSTIMULATEPROTOCOL_H
#define CNEWSTIMULATEPROTOCOL_H

#include <QWidget>

namespace Ui {
class CNewStimulateProtocol;
}

class CNewStimulateProtocol : public QWidget
{
    Q_OBJECT

public:
    explicit CNewStimulateProtocol(QWidget *parent = nullptr);
    ~CNewStimulateProtocol();

private slots:

    void on_toolButton_2_clicked();


    void on_toolButton_clicked();

private:
    Ui::CNewStimulateProtocol *ui;
};

#endif // CNEWSTIMULATEPROTOCOL_H
