#include "CWaveformEditor.h"
#include "ui_CWaveformEditor.h"
#include "CClickableLabelHandler.cpp"
#include<QScrollBar>
#include<QDebug>

#pragma execution_character_set("utf-8")

CWaveformEditor::CWaveformEditor(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CWaveformEditor)
{
    ui->setupUi(this);
    QFile styleSheet(":/css/css/stimulatePages.css");
    if (styleSheet.open(QFile::ReadOnly | QFile::Text)) {
        QString style = styleSheet.readAll();
        this->setStyleSheet(style);
    }


    //点击按钮偏移scrollArea
    connect(ui->leftBtn, &QPushButton::clicked, [this]() {
        QWidget *contentWidget = ui->scrollArea->widget();
        QPoint offset = ui->scrollArea->widget()->pos();
        offset.setX(offset.x() + 100); // 左滚动
        contentWidget->move(offset);  // 强制移动内容部件
    });

    connect(ui->rightBtn, &QPushButton::clicked, [this]() {
        QWidget *contentWidget = ui->scrollArea->widget();
        QPoint offset = ui->scrollArea->widget()->pos();
        offset.setX(offset.x() - 100); // 右滚动
        contentWidget->move(offset);  // 强制移动内容部件
    });


    // 创建标签列表
    QList<QLabel *> labels = {ui->waveLabel1, ui->waveLabel2, ui->waveLabel3, ui->waveLabel4, ui->waveLabel5, ui->waveLabel6};

    for (QLabel *label : labels)
    {
        label->setStyleSheet("border: 2px solid transparent;"); // 初始无边框
    }

    // 设置事件过滤器
    ClickableLabelHandler *handler = new ClickableLabelHandler(this);
    handler->labels = labels; // 设置需要处理的 QLabel 列表

    for (QLabel *label : labels) {
        label->installEventFilter(handler);
    }

    //设置表格
    QVector<QString> vecHorizontalHeaderStr = {u8"幅度 (mV)", u8"持续时间 (ms)"};
    ui->selfDefineStiTableView->setHeaderText(0,0,vecHorizontalHeaderStr);
    ui->selfDefineStiTableView->setAlternatingRowColors(true);

    this->setWindowFlags(Qt::Window);
}


CWaveformEditor::~CWaveformEditor()
{
    delete ui;
}

void CWaveformEditor::paintItem()
{

}

void CWaveformEditor::on_toolButton_2_clicked()
{
    this->hide();
}


void CWaveformEditor::on_leftBtn_clicked()
{

}


void CWaveformEditor::on_rightBtn_clicked()
{

}


void CWaveformEditor::on_cancelBtn_clicked()
{

}


void CWaveformEditor::on_startBtn_clicked()
{

}





void CWaveformEditor::on_toolButton_clicked()
{
    this->hide();
}

