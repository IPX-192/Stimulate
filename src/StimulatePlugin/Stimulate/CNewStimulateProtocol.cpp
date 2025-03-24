#include "CNewStimulateProtocol.h"
#include "ui_CNewStimulateProtocol.h"
#include<QFile>

CNewStimulateProtocol::CNewStimulateProtocol(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CNewStimulateProtocol)
{
    ui->setupUi(this);
    QFile styleSheet(":/css/css/stimulatePages.css");
    if (styleSheet.open(QFile::ReadOnly | QFile::Text)) {
        QString style = styleSheet.readAll();
        this->setStyleSheet(style);
    }

    this->setWindowFlags(Qt::Window);
}

CNewStimulateProtocol::~CNewStimulateProtocol()
{
    delete ui;
}


void CNewStimulateProtocol::on_toolButton_2_clicked()
{
    this->hide();
}



void CNewStimulateProtocol::on_toolButton_clicked()
{
    this->hide();
}

