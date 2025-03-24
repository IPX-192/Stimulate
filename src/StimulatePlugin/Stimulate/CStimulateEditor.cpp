#include "CStimulateEditor.h"
#include"CLabelBtn.h"
#include "ui_CStimulateEditor.h"

CStimulateEditor::CStimulateEditor(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CStimulateEditor)
{
    ui->setupUi(this);
    QFile styleSheet(":/css/css/stimulatePages.css");
    if (styleSheet.open(QFile::ReadOnly | QFile::Text)) {
        QString style = styleSheet.readAll();
        this->setStyleSheet(style);
    }
    this->setWindowFlags(Qt::Window);

    connect(ui->widget_new,&CLabelBtn::sigBtnWigetClicked,this,&CStimulateEditor::on_newBtn_clicked);

}

CStimulateEditor::~CStimulateEditor()
{
    delete ui;
}

void CStimulateEditor::addBasicParamItem()
{
    // 创建QFrame
    QFrame *frame = new QFrame(); // 将mainWindow作为父控件
    frame->setFrameShape(QFrame::Box); // 设置QFrame的形状为Box
    frame->setFrameShadow(QFrame::Raised); // 设置QFrame的阴影效果为Raised
    frame->setLineWidth(1); // 设置QFrame的边框宽度
    frame->setGeometry(0, 0, 1868, 274); // 设置QFrame的位置和大小

    // 创建QLabel和QLineEdit
    QLabel *label = new QLabel("Name:", frame);
    QLineEdit *lineEdit = new QLineEdit(frame);

    // 创建水平布局并添加label和lineEdit
    QHBoxLayout *hLayout = new QHBoxLayout();
    hLayout->addWidget(label);
    hLayout->addWidget(lineEdit);

    // 将水平布局设置给QFrame
    frame->setLayout(hLayout);

    // 将QFrame添加到主窗口的布局中
    QVBoxLayout *vLayout = new QVBoxLayout(this); // 为mainWindow创建垂直布局
    vLayout->addWidget(frame); // 将QFrame添加到垂直布局中
    vLayout->addWidget(frame);
    vLayout->addWidget(frame);

    // 也可以直接将QFrame添加到主窗口的布局中
    // setLayout(vLayout);
}

void CStimulateEditor::addStimulusSegmentItem()
{

}

void CStimulateEditor::addWaveformItem()
{

}


void CStimulateEditor::on_cancelBtn_clicked()
{
    this->hide();
}


void CStimulateEditor::on_newBtn_clicked()
{
    if(nullptr == m_pNewStimulateProtocol)
    {
        m_pNewStimulateProtocol = new CNewStimulateProtocol(this);
    }
    m_pNewStimulateProtocol->show();
}


void CStimulateEditor::on_toolButton_7_clicked()
{
    if(nullptr == m_pCWaveformEditor)
    {
        m_pCWaveformEditor = new CWaveformEditor(this);
    }

    m_pCWaveformEditor->show();
}


void CStimulateEditor::on_startBtn_clicked()
{
    this->hide();
}

