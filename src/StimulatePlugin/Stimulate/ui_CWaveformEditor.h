/********************************************************************************
** Form generated from reading UI file 'CWaveformEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CWAVEFORMEDITOR_H
#define UI_CWAVEFORMEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "CStimulateTablePanel.h"

QT_BEGIN_NAMESPACE

class Ui_CWaveformEditor
{
public:
    QGridLayout *gridLayout_13;
    QGroupBox *stiGroupBox;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_15;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *waveSelGroupBox;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *leftBtn;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWaveSel;
    QGridLayout *gridLayout_10;
    QFrame *frame_31;
    QGridLayout *gridLayout_18;
    QLabel *waveLabel4;
    QFrame *frame_32;
    QGridLayout *gridLayout_19;
    QLabel *waveLabel5;
    QFrame *frame_28;
    QGridLayout *gridLayout_15;
    QLabel *waveLabel1;
    QFrame *frame_29;
    QGridLayout *gridLayout_16;
    QLabel *waveLabel2;
    QFrame *frame_30;
    QGridLayout *gridLayout_17;
    QLabel *waveLabel3;
    QFrame *frame_33;
    QGridLayout *gridLayout_20;
    QLabel *waveLabel6;
    QPushButton *rightBtn;
    QGroupBox *seriesWaveGroupBox;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_8;
    QSpinBox *frequencySpinBox;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_9;
    QSpinBox *waveWidthSpinBox;
    QCheckBox *seriesWaveCheckBox;
    QGroupBox *waveGenerateGroupBox;
    QGridLayout *gridLayout_5;
    QRadioButton *paramGenerateRadioButton;
    QRadioButton *selfDefineRadioButton;
    QGroupBox *oprGroupBox;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_11;
    QGroupBox *selNumsOutChaGroupBox;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_11;
    QGridLayout *gridLayout_7;
    QCheckBox *cha1CheckBox;
    QCheckBox *cha2CheckBox;
    QCheckBox *cha4CheckBox;
    QCheckBox *cha5CheckBox;
    QCheckBox *cha6CheckBox;
    QCheckBox *cha7CheckBox;
    QCheckBox *cha8CheckBox;
    QCheckBox *cha3CheckBox;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_10;
    QSpinBox *sweepCountSpinBox;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_11;
    QSpinBox *SweepSelSpinBox;
    QCheckBox *allSweepActionCheckBox;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_9;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_12;
    QSpinBox *startTimeSpinBox;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_13;
    QSpinBox *durationSpinBox;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_14;
    QRadioButton *highRadioButton;
    QRadioButton *lowRadioButton;
    QHBoxLayout *horizontalLayout;
    QGroupBox *autoGenerateStiWaveParamGroupbox1;
    QGridLayout *gridLayout;
    QGroupBox *ampitudeGroupBox;
    QVBoxLayout *verticalLayout_6;
    QFrame *pinlv_2;
    QHBoxLayout *sweepNumber_2;
    QLabel *label_31;
    QSpinBox *amplitudeSpinBox;
    QFrame *pinlv_3;
    QHBoxLayout *sweepNumber_3;
    QLabel *label_32;
    QSpinBox *incrementSpinBox1;
    QFrame *pinlv_4;
    QHBoxLayout *sweepNumber_4;
    QLabel *label_33;
    QSpinBox *factorSpinBox1;
    QFrame *frame_14;
    QHBoxLayout *horizontalLayout_21;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *reverseCheckBox1;
    QSpacerItem *horizontalSpacer_7;
    QGroupBox *durGroupBox;
    QVBoxLayout *verticalLayout_7;
    QFrame *pinlv_5;
    QHBoxLayout *sweepNumber_5;
    QLabel *label_34;
    QSpinBox *durSpinBox;
    QFrame *pinlv_6;
    QHBoxLayout *sweepNumber_6;
    QLabel *label_35;
    QSpinBox *incrementSpinBox2;
    QFrame *pinlv_7;
    QHBoxLayout *sweepNumber_7;
    QLabel *label_36;
    QSpinBox *factorSpinBox2;
    QFrame *frame_15;
    QHBoxLayout *horizontalLayout_22;
    QSpacerItem *horizontalSpacer_8;
    QCheckBox *reverseCheckBox2;
    QSpacerItem *horizontalSpacer_9;
    QGroupBox *autoGenerateStiWaveParamGroupbox2;
    QGridLayout *gridLayout_2;
    CStimulateTablePanel *selfDefineStiTableView;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_14;
    QHBoxLayout *horizontalLayout_3;
    CStimulateTablePanel *generateWaveNumsTableView;
    QGroupBox *groupBox_13;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *CWaveformEditor)
    {
        if (CWaveformEditor->objectName().isEmpty())
            CWaveformEditor->setObjectName(QString::fromUtf8("CWaveformEditor"));
        CWaveformEditor->resize(944, 938);
        gridLayout_13 = new QGridLayout(CWaveformEditor);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        stiGroupBox = new QGroupBox(CWaveformEditor);
        stiGroupBox->setObjectName(QString::fromUtf8("stiGroupBox"));
        stiGroupBox->setMinimumSize(QSize(0, 210));
        gridLayout_6 = new QGridLayout(stiGroupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(10);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        waveSelGroupBox = new QGroupBox(stiGroupBox);
        waveSelGroupBox->setObjectName(QString::fromUtf8("waveSelGroupBox"));
        waveSelGroupBox->setMinimumSize(QSize(0, 62));
        waveSelGroupBox->setMaximumSize(QSize(16777215, 100));
        gridLayout_3 = new QGridLayout(waveSelGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        leftBtn = new QPushButton(waveSelGroupBox);
        leftBtn->setObjectName(QString::fromUtf8("leftBtn"));
        leftBtn->setMaximumSize(QSize(20, 20));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/Icons/moveLeft.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftBtn->setIcon(icon);

        horizontalLayout_12->addWidget(leftBtn);

        scrollArea = new QScrollArea(waveSelGroupBox);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setMinimumSize(QSize(0, 60));
        scrollArea->setMaximumSize(QSize(16777215, 50));
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWaveSel = new QWidget();
        scrollAreaWaveSel->setObjectName(QString::fromUtf8("scrollAreaWaveSel"));
        scrollAreaWaveSel->setGeometry(QRect(0, 0, 528, 60));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaWaveSel->sizePolicy().hasHeightForWidth());
        scrollAreaWaveSel->setSizePolicy(sizePolicy1);
        scrollAreaWaveSel->setMinimumSize(QSize(0, 46));
        gridLayout_10 = new QGridLayout(scrollAreaWaveSel);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setVerticalSpacing(0);
        gridLayout_10->setContentsMargins(-1, -1, -1, 25);
        frame_31 = new QFrame(scrollAreaWaveSel);
        frame_31->setObjectName(QString::fromUtf8("frame_31"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_31->sizePolicy().hasHeightForWidth());
        frame_31->setSizePolicy(sizePolicy2);
        frame_31->setMinimumSize(QSize(80, 32));
        frame_31->setMaximumSize(QSize(16777215, 32));
        frame_31->setFocusPolicy(Qt::ClickFocus);
        frame_31->setStyleSheet(QString::fromUtf8("QFrame#frame_28 {\n"
"background-color: #2D2D2D;\n"
"border: 1px solid #515151;\n"
"border-radius: 2px;\n"
"}"));
        gridLayout_18 = new QGridLayout(frame_31);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        gridLayout_18->setContentsMargins(-1, 5, -1, -1);
        waveLabel4 = new QLabel(frame_31);
        waveLabel4->setObjectName(QString::fromUtf8("waveLabel4"));
        sizePolicy1.setHeightForWidth(waveLabel4->sizePolicy().hasHeightForWidth());
        waveLabel4->setSizePolicy(sizePolicy1);
        waveLabel4->setMinimumSize(QSize(0, 25));
        waveLabel4->setMaximumSize(QSize(16777215, 25));
        waveLabel4->setBaseSize(QSize(0, 20));
        waveLabel4->setStyleSheet(QString::fromUtf8(""));
        waveLabel4->setPixmap(QPixmap(QString::fromUtf8(":/image/Images/\351\224\257\351\275\277\346\263\242.png")));
        waveLabel4->setScaledContents(false);
        waveLabel4->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(waveLabel4, 0, 0, 1, 1);


        gridLayout_10->addWidget(frame_31, 0, 3, 1, 1);

        frame_32 = new QFrame(scrollAreaWaveSel);
        frame_32->setObjectName(QString::fromUtf8("frame_32"));
        sizePolicy2.setHeightForWidth(frame_32->sizePolicy().hasHeightForWidth());
        frame_32->setSizePolicy(sizePolicy2);
        frame_32->setMinimumSize(QSize(80, 32));
        frame_32->setMaximumSize(QSize(16777215, 32));
        frame_32->setFocusPolicy(Qt::ClickFocus);
        frame_32->setStyleSheet(QString::fromUtf8("QFrame#frame_28 {\n"
"background-color: #2D2D2D;\n"
"border: 1px solid #515151;\n"
"border-radius: 2px;\n"
"}"));
        gridLayout_19 = new QGridLayout(frame_32);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        gridLayout_19->setContentsMargins(-1, 5, -1, -1);
        waveLabel5 = new QLabel(frame_32);
        waveLabel5->setObjectName(QString::fromUtf8("waveLabel5"));
        sizePolicy1.setHeightForWidth(waveLabel5->sizePolicy().hasHeightForWidth());
        waveLabel5->setSizePolicy(sizePolicy1);
        waveLabel5->setMinimumSize(QSize(0, 25));
        waveLabel5->setMaximumSize(QSize(16777215, 25));
        waveLabel5->setBaseSize(QSize(0, 20));
        waveLabel5->setStyleSheet(QString::fromUtf8(""));
        waveLabel5->setPixmap(QPixmap(QString::fromUtf8(":/image/Images/\351\230\266\346\242\257\346\263\242.png")));
        waveLabel5->setScaledContents(false);
        waveLabel5->setAlignment(Qt::AlignCenter);

        gridLayout_19->addWidget(waveLabel5, 0, 0, 1, 1);


        gridLayout_10->addWidget(frame_32, 0, 4, 1, 1);

        frame_28 = new QFrame(scrollAreaWaveSel);
        frame_28->setObjectName(QString::fromUtf8("frame_28"));
        sizePolicy2.setHeightForWidth(frame_28->sizePolicy().hasHeightForWidth());
        frame_28->setSizePolicy(sizePolicy2);
        frame_28->setMinimumSize(QSize(80, 32));
        frame_28->setMaximumSize(QSize(16777215, 32));
        frame_28->setFocusPolicy(Qt::ClickFocus);
        frame_28->setStyleSheet(QString::fromUtf8(""));
        gridLayout_15 = new QGridLayout(frame_28);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setContentsMargins(-1, 5, -1, -1);
        waveLabel1 = new QLabel(frame_28);
        waveLabel1->setObjectName(QString::fromUtf8("waveLabel1"));
        sizePolicy1.setHeightForWidth(waveLabel1->sizePolicy().hasHeightForWidth());
        waveLabel1->setSizePolicy(sizePolicy1);
        waveLabel1->setMinimumSize(QSize(0, 25));
        waveLabel1->setMaximumSize(QSize(16777215, 25));
        waveLabel1->setBaseSize(QSize(0, 20));
        waveLabel1->setStyleSheet(QString::fromUtf8(""));
        waveLabel1->setPixmap(QPixmap(QString::fromUtf8(":/image/Images/\346\226\271\346\263\242_.png")));
        waveLabel1->setScaledContents(false);
        waveLabel1->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(waveLabel1, 0, 0, 1, 1);


        gridLayout_10->addWidget(frame_28, 0, 0, 1, 1);

        frame_29 = new QFrame(scrollAreaWaveSel);
        frame_29->setObjectName(QString::fromUtf8("frame_29"));
        sizePolicy2.setHeightForWidth(frame_29->sizePolicy().hasHeightForWidth());
        frame_29->setSizePolicy(sizePolicy2);
        frame_29->setMinimumSize(QSize(80, 32));
        frame_29->setMaximumSize(QSize(16777215, 32));
        frame_29->setFocusPolicy(Qt::ClickFocus);
        frame_29->setStyleSheet(QString::fromUtf8("QFrame#frame_28 {\n"
"background-color: #2D2D2D;\n"
"border: 1px solid #515151;\n"
"border-radius: 2px;\n"
"}"));
        gridLayout_16 = new QGridLayout(frame_29);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setContentsMargins(-1, 5, -1, -1);
        waveLabel2 = new QLabel(frame_29);
        waveLabel2->setObjectName(QString::fromUtf8("waveLabel2"));
        sizePolicy1.setHeightForWidth(waveLabel2->sizePolicy().hasHeightForWidth());
        waveLabel2->setSizePolicy(sizePolicy1);
        waveLabel2->setMinimumSize(QSize(0, 25));
        waveLabel2->setMaximumSize(QSize(16777215, 25));
        waveLabel2->setBaseSize(QSize(0, 20));
        waveLabel2->setStyleSheet(QString::fromUtf8(""));
        waveLabel2->setPixmap(QPixmap(QString::fromUtf8(":/image/Images/\345\217\214\345\220\221\346\226\271\346\263\242.png")));
        waveLabel2->setScaledContents(false);
        waveLabel2->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(waveLabel2, 0, 0, 1, 1);


        gridLayout_10->addWidget(frame_29, 0, 1, 1, 1);

        frame_30 = new QFrame(scrollAreaWaveSel);
        frame_30->setObjectName(QString::fromUtf8("frame_30"));
        sizePolicy2.setHeightForWidth(frame_30->sizePolicy().hasHeightForWidth());
        frame_30->setSizePolicy(sizePolicy2);
        frame_30->setMinimumSize(QSize(80, 32));
        frame_30->setMaximumSize(QSize(16777215, 32));
        frame_30->setFocusPolicy(Qt::ClickFocus);
        frame_30->setStyleSheet(QString::fromUtf8("QFrame#frame_28 {\n"
"background-color: #2D2D2D;\n"
"border: 1px solid #515151;\n"
"border-radius: 2px;\n"
"}"));
        gridLayout_17 = new QGridLayout(frame_30);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        gridLayout_17->setContentsMargins(-1, 5, -1, -1);
        waveLabel3 = new QLabel(frame_30);
        waveLabel3->setObjectName(QString::fromUtf8("waveLabel3"));
        sizePolicy1.setHeightForWidth(waveLabel3->sizePolicy().hasHeightForWidth());
        waveLabel3->setSizePolicy(sizePolicy1);
        waveLabel3->setMinimumSize(QSize(0, 25));
        waveLabel3->setMaximumSize(QSize(16777215, 25));
        waveLabel3->setBaseSize(QSize(0, 20));
        waveLabel3->setStyleSheet(QString::fromUtf8(""));
        waveLabel3->setPixmap(QPixmap(QString::fromUtf8(":/image/Images/\346\255\243\345\274\246\346\263\242.png")));
        waveLabel3->setScaledContents(false);
        waveLabel3->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(waveLabel3, 0, 0, 1, 1);


        gridLayout_10->addWidget(frame_30, 0, 2, 1, 1);

        frame_33 = new QFrame(scrollAreaWaveSel);
        frame_33->setObjectName(QString::fromUtf8("frame_33"));
        sizePolicy2.setHeightForWidth(frame_33->sizePolicy().hasHeightForWidth());
        frame_33->setSizePolicy(sizePolicy2);
        frame_33->setMinimumSize(QSize(80, 32));
        frame_33->setFocusPolicy(Qt::ClickFocus);
        frame_33->setStyleSheet(QString::fromUtf8("QFrame#frame_28 {\n"
"background-color: #2D2D2D;\n"
"border: 1px solid #515151;\n"
"border-radius: 2px;\n"
"}"));
        gridLayout_20 = new QGridLayout(frame_33);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        gridLayout_20->setContentsMargins(-1, 5, -1, -1);
        waveLabel6 = new QLabel(frame_33);
        waveLabel6->setObjectName(QString::fromUtf8("waveLabel6"));
        sizePolicy1.setHeightForWidth(waveLabel6->sizePolicy().hasHeightForWidth());
        waveLabel6->setSizePolicy(sizePolicy1);
        waveLabel6->setMinimumSize(QSize(0, 25));
        waveLabel6->setMaximumSize(QSize(16777215, 25));
        waveLabel6->setBaseSize(QSize(0, 20));
        waveLabel6->setStyleSheet(QString::fromUtf8(""));
        waveLabel6->setPixmap(QPixmap(QString::fromUtf8(":/image/Images/\350\260\203\351\242\221\346\263\242.png")));
        waveLabel6->setScaledContents(false);
        waveLabel6->setAlignment(Qt::AlignCenter);

        gridLayout_20->addWidget(waveLabel6, 0, 0, 1, 1);


        gridLayout_10->addWidget(frame_33, 0, 5, 1, 1);

        scrollArea->setWidget(scrollAreaWaveSel);

        horizontalLayout_12->addWidget(scrollArea);

        rightBtn = new QPushButton(waveSelGroupBox);
        rightBtn->setObjectName(QString::fromUtf8("rightBtn"));
        rightBtn->setMaximumSize(QSize(20, 20));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/Icons/moveRight.png"), QSize(), QIcon::Normal, QIcon::Off);
        rightBtn->setIcon(icon1);

        horizontalLayout_12->addWidget(rightBtn);


        gridLayout_3->addLayout(horizontalLayout_12, 0, 0, 1, 1);


        verticalLayout_3->addWidget(waveSelGroupBox);

        seriesWaveGroupBox = new QGroupBox(stiGroupBox);
        seriesWaveGroupBox->setObjectName(QString::fromUtf8("seriesWaveGroupBox"));
        seriesWaveGroupBox->setMinimumSize(QSize(0, 66));
        seriesWaveGroupBox->setMaximumSize(QSize(16777215, 56));
        gridLayout_4 = new QGridLayout(seriesWaveGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(30);
        gridLayout_4->setContentsMargins(10, 5, 30, 5);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_8 = new QLabel(seriesWaveGroupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy3);
        label_8->setMinimumSize(QSize(48, 0));
        label_8->setMaximumSize(QSize(48, 16777215));

        horizontalLayout_13->addWidget(label_8);

        frequencySpinBox = new QSpinBox(seriesWaveGroupBox);
        frequencySpinBox->setObjectName(QString::fromUtf8("frequencySpinBox"));
        frequencySpinBox->setMinimumSize(QSize(0, 35));

        horizontalLayout_13->addWidget(frequencySpinBox);


        gridLayout_4->addLayout(horizontalLayout_13, 0, 1, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_9 = new QLabel(seriesWaveGroupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy3.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy3);
        label_9->setMinimumSize(QSize(48, 0));
        label_9->setMaximumSize(QSize(48, 16777215));

        horizontalLayout_14->addWidget(label_9);

        waveWidthSpinBox = new QSpinBox(seriesWaveGroupBox);
        waveWidthSpinBox->setObjectName(QString::fromUtf8("waveWidthSpinBox"));
        waveWidthSpinBox->setMinimumSize(QSize(0, 35));

        horizontalLayout_14->addWidget(waveWidthSpinBox);


        gridLayout_4->addLayout(horizontalLayout_14, 0, 2, 1, 1);

        seriesWaveCheckBox = new QCheckBox(seriesWaveGroupBox);
        seriesWaveCheckBox->setObjectName(QString::fromUtf8("seriesWaveCheckBox"));

        gridLayout_4->addWidget(seriesWaveCheckBox, 0, 0, 1, 1);


        verticalLayout_3->addWidget(seriesWaveGroupBox);


        horizontalLayout_15->addLayout(verticalLayout_3);

        waveGenerateGroupBox = new QGroupBox(stiGroupBox);
        waveGenerateGroupBox->setObjectName(QString::fromUtf8("waveGenerateGroupBox"));
        gridLayout_5 = new QGridLayout(waveGenerateGroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(20, -1, 20, -1);
        paramGenerateRadioButton = new QRadioButton(waveGenerateGroupBox);
        paramGenerateRadioButton->setObjectName(QString::fromUtf8("paramGenerateRadioButton"));

        gridLayout_5->addWidget(paramGenerateRadioButton, 0, 0, 1, 1);

        selfDefineRadioButton = new QRadioButton(waveGenerateGroupBox);
        selfDefineRadioButton->setObjectName(QString::fromUtf8("selfDefineRadioButton"));

        gridLayout_5->addWidget(selfDefineRadioButton, 1, 0, 1, 1);


        horizontalLayout_15->addWidget(waveGenerateGroupBox);


        gridLayout_6->addLayout(horizontalLayout_15, 0, 0, 1, 1);


        gridLayout_13->addWidget(stiGroupBox, 0, 0, 1, 1);

        oprGroupBox = new QGroupBox(CWaveformEditor);
        oprGroupBox->setObjectName(QString::fromUtf8("oprGroupBox"));
        sizePolicy.setHeightForWidth(oprGroupBox->sizePolicy().hasHeightForWidth());
        oprGroupBox->setSizePolicy(sizePolicy);
        oprGroupBox->setMinimumSize(QSize(0, 170));
        oprGroupBox->setMaximumSize(QSize(16777215, 163));
        gridLayout_12 = new QGridLayout(oprGroupBox);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setHorizontalSpacing(10);
        selNumsOutChaGroupBox = new QGroupBox(oprGroupBox);
        selNumsOutChaGroupBox->setObjectName(QString::fromUtf8("selNumsOutChaGroupBox"));
        selNumsOutChaGroupBox->setStyleSheet(QString::fromUtf8("QFrame#frame_6 {\n"
"border: 1px solid #3a3939;\n"
"border-radius: 2px;\n"
"}"));
        verticalLayout_4 = new QVBoxLayout(selNumsOutChaGroupBox);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, -1, 0, 10);
        frame_11 = new QFrame(selNumsOutChaGroupBox);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(frame_11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        cha1CheckBox = new QCheckBox(frame_11);
        cha1CheckBox->setObjectName(QString::fromUtf8("cha1CheckBox"));
        sizePolicy3.setHeightForWidth(cha1CheckBox->sizePolicy().hasHeightForWidth());
        cha1CheckBox->setSizePolicy(sizePolicy3);
        cha1CheckBox->setStyleSheet(QString::fromUtf8(""));

        gridLayout_7->addWidget(cha1CheckBox, 0, 0, 1, 1);

        cha2CheckBox = new QCheckBox(frame_11);
        cha2CheckBox->setObjectName(QString::fromUtf8("cha2CheckBox"));
        sizePolicy3.setHeightForWidth(cha2CheckBox->sizePolicy().hasHeightForWidth());
        cha2CheckBox->setSizePolicy(sizePolicy3);
        cha2CheckBox->setStyleSheet(QString::fromUtf8(""));

        gridLayout_7->addWidget(cha2CheckBox, 0, 1, 1, 1);

        cha4CheckBox = new QCheckBox(frame_11);
        cha4CheckBox->setObjectName(QString::fromUtf8("cha4CheckBox"));
        sizePolicy3.setHeightForWidth(cha4CheckBox->sizePolicy().hasHeightForWidth());
        cha4CheckBox->setSizePolicy(sizePolicy3);
        cha4CheckBox->setStyleSheet(QString::fromUtf8(""));

        gridLayout_7->addWidget(cha4CheckBox, 0, 3, 1, 1);

        cha5CheckBox = new QCheckBox(frame_11);
        cha5CheckBox->setObjectName(QString::fromUtf8("cha5CheckBox"));
        sizePolicy3.setHeightForWidth(cha5CheckBox->sizePolicy().hasHeightForWidth());
        cha5CheckBox->setSizePolicy(sizePolicy3);
        cha5CheckBox->setStyleSheet(QString::fromUtf8(""));

        gridLayout_7->addWidget(cha5CheckBox, 1, 0, 1, 1);

        cha6CheckBox = new QCheckBox(frame_11);
        cha6CheckBox->setObjectName(QString::fromUtf8("cha6CheckBox"));
        sizePolicy3.setHeightForWidth(cha6CheckBox->sizePolicy().hasHeightForWidth());
        cha6CheckBox->setSizePolicy(sizePolicy3);
        cha6CheckBox->setStyleSheet(QString::fromUtf8(""));

        gridLayout_7->addWidget(cha6CheckBox, 1, 1, 1, 1);

        cha7CheckBox = new QCheckBox(frame_11);
        cha7CheckBox->setObjectName(QString::fromUtf8("cha7CheckBox"));
        sizePolicy3.setHeightForWidth(cha7CheckBox->sizePolicy().hasHeightForWidth());
        cha7CheckBox->setSizePolicy(sizePolicy3);
        cha7CheckBox->setStyleSheet(QString::fromUtf8(""));

        gridLayout_7->addWidget(cha7CheckBox, 1, 2, 1, 1);

        cha8CheckBox = new QCheckBox(frame_11);
        cha8CheckBox->setObjectName(QString::fromUtf8("cha8CheckBox"));
        sizePolicy3.setHeightForWidth(cha8CheckBox->sizePolicy().hasHeightForWidth());
        cha8CheckBox->setSizePolicy(sizePolicy3);
        cha8CheckBox->setStyleSheet(QString::fromUtf8(""));

        gridLayout_7->addWidget(cha8CheckBox, 1, 3, 1, 1);

        cha3CheckBox = new QCheckBox(frame_11);
        cha3CheckBox->setObjectName(QString::fromUtf8("cha3CheckBox"));
        sizePolicy3.setHeightForWidth(cha3CheckBox->sizePolicy().hasHeightForWidth());
        cha3CheckBox->setSizePolicy(sizePolicy3);
        cha3CheckBox->setStyleSheet(QString::fromUtf8(""));

        gridLayout_7->addWidget(cha3CheckBox, 0, 2, 1, 1);


        verticalLayout_4->addWidget(frame_11);


        gridLayout_11->addWidget(selNumsOutChaGroupBox, 0, 1, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox_8 = new QGroupBox(oprGroupBox);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setMinimumSize(QSize(0, 60));
        groupBox_8->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_8 = new QGridLayout(groupBox_8);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setHorizontalSpacing(30);
        gridLayout_8->setContentsMargins(10, -1, 30, 9);
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(5);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_10 = new QLabel(groupBox_8);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy3.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy3);
        label_10->setMinimumSize(QSize(70, 0));
        label_10->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_16->addWidget(label_10);

        sweepCountSpinBox = new QSpinBox(groupBox_8);
        sweepCountSpinBox->setObjectName(QString::fromUtf8("sweepCountSpinBox"));
        sweepCountSpinBox->setMinimumSize(QSize(0, 35));

        horizontalLayout_16->addWidget(sweepCountSpinBox);


        gridLayout_8->addLayout(horizontalLayout_16, 0, 1, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(5);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_11 = new QLabel(groupBox_8);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy3.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy3);
        label_11->setMinimumSize(QSize(70, 0));
        label_11->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_17->addWidget(label_11);

        SweepSelSpinBox = new QSpinBox(groupBox_8);
        SweepSelSpinBox->setObjectName(QString::fromUtf8("SweepSelSpinBox"));
        SweepSelSpinBox->setMinimumSize(QSize(0, 35));

        horizontalLayout_17->addWidget(SweepSelSpinBox);


        gridLayout_8->addLayout(horizontalLayout_17, 0, 2, 1, 1);

        allSweepActionCheckBox = new QCheckBox(groupBox_8);
        allSweepActionCheckBox->setObjectName(QString::fromUtf8("allSweepActionCheckBox"));

        gridLayout_8->addWidget(allSweepActionCheckBox, 0, 0, 1, 1);


        verticalLayout_5->addWidget(groupBox_8);

        groupBox_9 = new QGroupBox(oprGroupBox);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setMinimumSize(QSize(602, 0));
        groupBox_9->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_9 = new QGridLayout(groupBox_9);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setHorizontalSpacing(20);
        gridLayout_9->setContentsMargins(10, -1, 30, -1);
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_12 = new QLabel(groupBox_9);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy3.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy3);
        label_12->setMinimumSize(QSize(65, 0));
        label_12->setMaximumSize(QSize(65, 16777215));

        horizontalLayout_18->addWidget(label_12);

        startTimeSpinBox = new QSpinBox(groupBox_9);
        startTimeSpinBox->setObjectName(QString::fromUtf8("startTimeSpinBox"));
        startTimeSpinBox->setMinimumSize(QSize(0, 35));

        horizontalLayout_18->addWidget(startTimeSpinBox);


        gridLayout_9->addLayout(horizontalLayout_18, 0, 1, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_13 = new QLabel(groupBox_9);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy3.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy3);
        label_13->setMinimumSize(QSize(65, 0));
        label_13->setMaximumSize(QSize(65, 16777215));

        horizontalLayout_19->addWidget(label_13);

        durationSpinBox = new QSpinBox(groupBox_9);
        durationSpinBox->setObjectName(QString::fromUtf8("durationSpinBox"));
        durationSpinBox->setMinimumSize(QSize(0, 35));

        horizontalLayout_19->addWidget(durationSpinBox);


        gridLayout_9->addLayout(horizontalLayout_19, 0, 2, 1, 1);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(15);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_14 = new QLabel(groupBox_9);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_20->addWidget(label_14);

        highRadioButton = new QRadioButton(groupBox_9);
        highRadioButton->setObjectName(QString::fromUtf8("highRadioButton"));

        horizontalLayout_20->addWidget(highRadioButton);

        lowRadioButton = new QRadioButton(groupBox_9);
        lowRadioButton->setObjectName(QString::fromUtf8("lowRadioButton"));

        horizontalLayout_20->addWidget(lowRadioButton);


        gridLayout_9->addLayout(horizontalLayout_20, 0, 0, 1, 1);


        verticalLayout_5->addWidget(groupBox_9);


        gridLayout_11->addLayout(verticalLayout_5, 0, 0, 1, 1);


        gridLayout_12->addLayout(gridLayout_11, 0, 0, 1, 1);


        gridLayout_13->addWidget(oprGroupBox, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        autoGenerateStiWaveParamGroupbox1 = new QGroupBox(CWaveformEditor);
        autoGenerateStiWaveParamGroupbox1->setObjectName(QString::fromUtf8("autoGenerateStiWaveParamGroupbox1"));
        sizePolicy.setHeightForWidth(autoGenerateStiWaveParamGroupbox1->sizePolicy().hasHeightForWidth());
        autoGenerateStiWaveParamGroupbox1->setSizePolicy(sizePolicy);
        autoGenerateStiWaveParamGroupbox1->setMaximumSize(QSize(16777215, 283));
        gridLayout = new QGridLayout(autoGenerateStiWaveParamGroupbox1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(20);
        ampitudeGroupBox = new QGroupBox(autoGenerateStiWaveParamGroupbox1);
        ampitudeGroupBox->setObjectName(QString::fromUtf8("ampitudeGroupBox"));
        ampitudeGroupBox->setMinimumSize(QSize(0, 0));
        ampitudeGroupBox->setStyleSheet(QString::fromUtf8("QFrame#frame_4 {\n"
"border: 1px solid #3a3939;\n"
"border-radius: 2px;\n"
"}"));
        verticalLayout_6 = new QVBoxLayout(ampitudeGroupBox);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(-1, 9, -1, 9);
        pinlv_2 = new QFrame(ampitudeGroupBox);
        pinlv_2->setObjectName(QString::fromUtf8("pinlv_2"));
        sweepNumber_2 = new QHBoxLayout(pinlv_2);
        sweepNumber_2->setSpacing(2);
        sweepNumber_2->setObjectName(QString::fromUtf8("sweepNumber_2"));
        sweepNumber_2->setContentsMargins(0, 0, 0, 0);
        label_31 = new QLabel(pinlv_2);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        sizePolicy2.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy2);
        label_31->setStyleSheet(QString::fromUtf8(""));

        sweepNumber_2->addWidget(label_31);

        amplitudeSpinBox = new QSpinBox(pinlv_2);
        amplitudeSpinBox->setObjectName(QString::fromUtf8("amplitudeSpinBox"));
        sizePolicy1.setHeightForWidth(amplitudeSpinBox->sizePolicy().hasHeightForWidth());
        amplitudeSpinBox->setSizePolicy(sizePolicy1);
        amplitudeSpinBox->setMinimumSize(QSize(0, 35));
        amplitudeSpinBox->setStyleSheet(QString::fromUtf8(""));

        sweepNumber_2->addWidget(amplitudeSpinBox);


        verticalLayout_6->addWidget(pinlv_2);

        pinlv_3 = new QFrame(ampitudeGroupBox);
        pinlv_3->setObjectName(QString::fromUtf8("pinlv_3"));
        sweepNumber_3 = new QHBoxLayout(pinlv_3);
        sweepNumber_3->setSpacing(2);
        sweepNumber_3->setObjectName(QString::fromUtf8("sweepNumber_3"));
        sweepNumber_3->setContentsMargins(0, 0, 0, 0);
        label_32 = new QLabel(pinlv_3);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        sizePolicy2.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy2);
        label_32->setStyleSheet(QString::fromUtf8(""));

        sweepNumber_3->addWidget(label_32);

        incrementSpinBox1 = new QSpinBox(pinlv_3);
        incrementSpinBox1->setObjectName(QString::fromUtf8("incrementSpinBox1"));
        sizePolicy1.setHeightForWidth(incrementSpinBox1->sizePolicy().hasHeightForWidth());
        incrementSpinBox1->setSizePolicy(sizePolicy1);
        incrementSpinBox1->setMinimumSize(QSize(0, 35));
        incrementSpinBox1->setStyleSheet(QString::fromUtf8(""));

        sweepNumber_3->addWidget(incrementSpinBox1);


        verticalLayout_6->addWidget(pinlv_3);

        pinlv_4 = new QFrame(ampitudeGroupBox);
        pinlv_4->setObjectName(QString::fromUtf8("pinlv_4"));
        sweepNumber_4 = new QHBoxLayout(pinlv_4);
        sweepNumber_4->setSpacing(2);
        sweepNumber_4->setObjectName(QString::fromUtf8("sweepNumber_4"));
        sweepNumber_4->setContentsMargins(0, 0, 0, 0);
        label_33 = new QLabel(pinlv_4);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        sizePolicy2.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy2);
        label_33->setStyleSheet(QString::fromUtf8(""));

        sweepNumber_4->addWidget(label_33);

        factorSpinBox1 = new QSpinBox(pinlv_4);
        factorSpinBox1->setObjectName(QString::fromUtf8("factorSpinBox1"));
        sizePolicy1.setHeightForWidth(factorSpinBox1->sizePolicy().hasHeightForWidth());
        factorSpinBox1->setSizePolicy(sizePolicy1);
        factorSpinBox1->setMinimumSize(QSize(0, 35));
        factorSpinBox1->setStyleSheet(QString::fromUtf8(""));

        sweepNumber_4->addWidget(factorSpinBox1);


        verticalLayout_6->addWidget(pinlv_4);

        frame_14 = new QFrame(ampitudeGroupBox);
        frame_14->setObjectName(QString::fromUtf8("frame_14"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        horizontalLayout_21 = new QHBoxLayout(frame_14);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(120, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_6);

        reverseCheckBox1 = new QCheckBox(frame_14);
        reverseCheckBox1->setObjectName(QString::fromUtf8("reverseCheckBox1"));
        sizePolicy3.setHeightForWidth(reverseCheckBox1->sizePolicy().hasHeightForWidth());
        reverseCheckBox1->setSizePolicy(sizePolicy3);
        reverseCheckBox1->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_21->addWidget(reverseCheckBox1);

        horizontalSpacer_7 = new QSpacerItem(119, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_7);


        verticalLayout_6->addWidget(frame_14);


        gridLayout->addWidget(ampitudeGroupBox, 0, 0, 1, 1);

        durGroupBox = new QGroupBox(autoGenerateStiWaveParamGroupbox1);
        durGroupBox->setObjectName(QString::fromUtf8("durGroupBox"));
        durGroupBox->setStyleSheet(QString::fromUtf8("QFrame#frame_5 {\n"
"border: 1px solid #3a3939;\n"
"border-radius: 2px;\n"
"}"));
        verticalLayout_7 = new QVBoxLayout(durGroupBox);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        pinlv_5 = new QFrame(durGroupBox);
        pinlv_5->setObjectName(QString::fromUtf8("pinlv_5"));
        sweepNumber_5 = new QHBoxLayout(pinlv_5);
        sweepNumber_5->setSpacing(2);
        sweepNumber_5->setObjectName(QString::fromUtf8("sweepNumber_5"));
        sweepNumber_5->setContentsMargins(0, 0, 0, 0);
        label_34 = new QLabel(pinlv_5);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        sizePolicy2.setHeightForWidth(label_34->sizePolicy().hasHeightForWidth());
        label_34->setSizePolicy(sizePolicy2);
        label_34->setStyleSheet(QString::fromUtf8(""));

        sweepNumber_5->addWidget(label_34);

        durSpinBox = new QSpinBox(pinlv_5);
        durSpinBox->setObjectName(QString::fromUtf8("durSpinBox"));
        sizePolicy1.setHeightForWidth(durSpinBox->sizePolicy().hasHeightForWidth());
        durSpinBox->setSizePolicy(sizePolicy1);
        durSpinBox->setMinimumSize(QSize(0, 35));
        durSpinBox->setStyleSheet(QString::fromUtf8(""));

        sweepNumber_5->addWidget(durSpinBox);


        verticalLayout_7->addWidget(pinlv_5);

        pinlv_6 = new QFrame(durGroupBox);
        pinlv_6->setObjectName(QString::fromUtf8("pinlv_6"));
        sweepNumber_6 = new QHBoxLayout(pinlv_6);
        sweepNumber_6->setSpacing(2);
        sweepNumber_6->setObjectName(QString::fromUtf8("sweepNumber_6"));
        sweepNumber_6->setContentsMargins(0, 0, 0, 0);
        label_35 = new QLabel(pinlv_6);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        sizePolicy2.setHeightForWidth(label_35->sizePolicy().hasHeightForWidth());
        label_35->setSizePolicy(sizePolicy2);
        label_35->setStyleSheet(QString::fromUtf8(""));

        sweepNumber_6->addWidget(label_35);

        incrementSpinBox2 = new QSpinBox(pinlv_6);
        incrementSpinBox2->setObjectName(QString::fromUtf8("incrementSpinBox2"));
        sizePolicy1.setHeightForWidth(incrementSpinBox2->sizePolicy().hasHeightForWidth());
        incrementSpinBox2->setSizePolicy(sizePolicy1);
        incrementSpinBox2->setMinimumSize(QSize(0, 35));
        incrementSpinBox2->setStyleSheet(QString::fromUtf8(""));

        sweepNumber_6->addWidget(incrementSpinBox2);


        verticalLayout_7->addWidget(pinlv_6);

        pinlv_7 = new QFrame(durGroupBox);
        pinlv_7->setObjectName(QString::fromUtf8("pinlv_7"));
        sweepNumber_7 = new QHBoxLayout(pinlv_7);
        sweepNumber_7->setSpacing(2);
        sweepNumber_7->setObjectName(QString::fromUtf8("sweepNumber_7"));
        sweepNumber_7->setContentsMargins(0, 0, 0, 0);
        label_36 = new QLabel(pinlv_7);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        sizePolicy2.setHeightForWidth(label_36->sizePolicy().hasHeightForWidth());
        label_36->setSizePolicy(sizePolicy2);
        label_36->setStyleSheet(QString::fromUtf8(""));

        sweepNumber_7->addWidget(label_36);

        factorSpinBox2 = new QSpinBox(pinlv_7);
        factorSpinBox2->setObjectName(QString::fromUtf8("factorSpinBox2"));
        sizePolicy1.setHeightForWidth(factorSpinBox2->sizePolicy().hasHeightForWidth());
        factorSpinBox2->setSizePolicy(sizePolicy1);
        factorSpinBox2->setMinimumSize(QSize(0, 35));
        factorSpinBox2->setStyleSheet(QString::fromUtf8(""));

        sweepNumber_7->addWidget(factorSpinBox2);


        verticalLayout_7->addWidget(pinlv_7);

        frame_15 = new QFrame(durGroupBox);
        frame_15->setObjectName(QString::fromUtf8("frame_15"));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        horizontalLayout_22 = new QHBoxLayout(frame_15);
        horizontalLayout_22->setSpacing(0);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_8 = new QSpacerItem(119, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_8);

        reverseCheckBox2 = new QCheckBox(frame_15);
        reverseCheckBox2->setObjectName(QString::fromUtf8("reverseCheckBox2"));
        sizePolicy3.setHeightForWidth(reverseCheckBox2->sizePolicy().hasHeightForWidth());
        reverseCheckBox2->setSizePolicy(sizePolicy3);
        reverseCheckBox2->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_22->addWidget(reverseCheckBox2);

        horizontalSpacer_9 = new QSpacerItem(119, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_9);


        verticalLayout_7->addWidget(frame_15);


        gridLayout->addWidget(durGroupBox, 0, 1, 1, 1);


        horizontalLayout->addWidget(autoGenerateStiWaveParamGroupbox1);

        autoGenerateStiWaveParamGroupbox2 = new QGroupBox(CWaveformEditor);
        autoGenerateStiWaveParamGroupbox2->setObjectName(QString::fromUtf8("autoGenerateStiWaveParamGroupbox2"));
        sizePolicy.setHeightForWidth(autoGenerateStiWaveParamGroupbox2->sizePolicy().hasHeightForWidth());
        autoGenerateStiWaveParamGroupbox2->setSizePolicy(sizePolicy);
        autoGenerateStiWaveParamGroupbox2->setMinimumSize(QSize(360, 0));
        autoGenerateStiWaveParamGroupbox2->setMaximumSize(QSize(16777215, 283));
        gridLayout_2 = new QGridLayout(autoGenerateStiWaveParamGroupbox2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        selfDefineStiTableView = new CStimulateTablePanel(autoGenerateStiWaveParamGroupbox2);
        selfDefineStiTableView->setObjectName(QString::fromUtf8("selfDefineStiTableView"));

        gridLayout_2->addWidget(selfDefineStiTableView, 0, 0, 1, 1);


        horizontalLayout->addWidget(autoGenerateStiWaveParamGroupbox2);


        gridLayout_13->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox_14 = new QGroupBox(CWaveformEditor);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        sizePolicy.setHeightForWidth(groupBox_14->sizePolicy().hasHeightForWidth());
        groupBox_14->setSizePolicy(sizePolicy);
        groupBox_14->setMinimumSize(QSize(0, 0));
        groupBox_14->setMaximumSize(QSize(16777215, 220));
        groupBox_14->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_3 = new QHBoxLayout(groupBox_14);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(15, 15, 15, 15);
        generateWaveNumsTableView = new CStimulateTablePanel(groupBox_14);
        generateWaveNumsTableView->setObjectName(QString::fromUtf8("generateWaveNumsTableView"));

        horizontalLayout_3->addWidget(generateWaveNumsTableView);


        horizontalLayout_2->addWidget(groupBox_14);

        groupBox_13 = new QGroupBox(CWaveformEditor);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        sizePolicy.setHeightForWidth(groupBox_13->sizePolicy().hasHeightForWidth());
        groupBox_13->setSizePolicy(sizePolicy);
        groupBox_13->setMaximumSize(QSize(16777215, 220));
        groupBox_13->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_9 = new QHBoxLayout(groupBox_13);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(15, 15, 15, 15);
        label_19 = new QLabel(groupBox_13);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setPixmap(QPixmap(QString::fromUtf8(":/image/Images/\346\263\242\345\275\242\346\274\224\347\244\272.jpg")));
        label_19->setScaledContents(false);

        horizontalLayout_9->addWidget(label_19);


        horizontalLayout_2->addWidget(groupBox_13);


        gridLayout_13->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(40);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 15, -1, 15);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        toolButton = new QToolButton(CWaveformEditor);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setMinimumSize(QSize(110, 35));
        QFont font;
        font.setBold(true);
        toolButton->setFont(font);
        toolButton->setStyleSheet(QString::fromUtf8("\n"
"border: 1px solid #848484;\n"
"border-radius: 17px;"));

        horizontalLayout_4->addWidget(toolButton);

        toolButton_2 = new QToolButton(CWaveformEditor);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setMinimumSize(QSize(110, 35));
        toolButton_2->setFont(font);
        toolButton_2->setStyleSheet(QString::fromUtf8("background-color: rgba(47, 47, 47,0.00);\n"
"border: 1px solid #848484;\n"
"border-radius: 17px;"));

        horizontalLayout_4->addWidget(toolButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout_13->addLayout(horizontalLayout_4, 4, 0, 1, 1);


        retranslateUi(CWaveformEditor);

        QMetaObject::connectSlotsByName(CWaveformEditor);
    } // setupUi

    void retranslateUi(QWidget *CWaveformEditor)
    {
        CWaveformEditor->setWindowTitle(QCoreApplication::translate("CWaveformEditor", "\345\210\272\346\277\200\346\263\242\345\275\242\345\210\206\346\256\265\347\274\226\350\276\221", nullptr));
        stiGroupBox->setTitle(QCoreApplication::translate("CWaveformEditor", "\345\210\272\346\277\200\345\237\272\346\234\254\345\217\202\346\225\260", nullptr));
        waveSelGroupBox->setTitle(QCoreApplication::translate("CWaveformEditor", "\346\263\242\345\275\242\351\200\211\346\213\251", nullptr));
        leftBtn->setText(QString());
        waveLabel4->setText(QString());
        waveLabel5->setText(QString());
        waveLabel1->setText(QString());
        waveLabel2->setText(QString());
        waveLabel3->setText(QString());
        waveLabel6->setText(QString());
        rightBtn->setText(QString());
        seriesWaveGroupBox->setTitle(QCoreApplication::translate("CWaveformEditor", "\344\270\262\346\263\242\350\256\276\347\275\256", nullptr));
        label_8->setText(QCoreApplication::translate("CWaveformEditor", "\351\242\221  \347\216\207", nullptr));
        frequencySpinBox->setSuffix(QCoreApplication::translate("CWaveformEditor", " Hz", nullptr));
        label_9->setText(QCoreApplication::translate("CWaveformEditor", "\346\263\242  \345\256\275", nullptr));
        waveWidthSpinBox->setSuffix(QCoreApplication::translate("CWaveformEditor", " ms", nullptr));
        seriesWaveCheckBox->setText(QCoreApplication::translate("CWaveformEditor", "\346\230\257\345\220\246\344\275\277\347\224\250\344\270\262\346\263\242", nullptr));
        waveGenerateGroupBox->setTitle(QCoreApplication::translate("CWaveformEditor", "\346\263\242\345\275\242\347\224\237\346\210\220\346\226\271\345\274\217", nullptr));
        paramGenerateRadioButton->setText(QCoreApplication::translate("CWaveformEditor", "\346\214\211\345\217\202\346\225\260\350\207\252\345\212\250\347\224\237\346\210\220", nullptr));
        selfDefineRadioButton->setText(QCoreApplication::translate("CWaveformEditor", "\350\207\252\345\256\232\344\271\211", nullptr));
        oprGroupBox->setTitle(QCoreApplication::translate("CWaveformEditor", "\346\223\215\344\275\234\345\212\250\344\275\234", nullptr));
        selNumsOutChaGroupBox->setTitle(QCoreApplication::translate("CWaveformEditor", "\351\200\211\346\213\251\346\225\260\345\255\227\350\276\223\345\207\272\351\200\232\351\201\223", nullptr));
        cha1CheckBox->setText(QCoreApplication::translate("CWaveformEditor", "1", nullptr));
        cha2CheckBox->setText(QCoreApplication::translate("CWaveformEditor", "2", nullptr));
        cha4CheckBox->setText(QCoreApplication::translate("CWaveformEditor", "4", nullptr));
        cha5CheckBox->setText(QCoreApplication::translate("CWaveformEditor", "5", nullptr));
        cha6CheckBox->setText(QCoreApplication::translate("CWaveformEditor", "6", nullptr));
        cha7CheckBox->setText(QCoreApplication::translate("CWaveformEditor", "7", nullptr));
        cha8CheckBox->setText(QCoreApplication::translate("CWaveformEditor", "8", nullptr));
        cha3CheckBox->setText(QCoreApplication::translate("CWaveformEditor", "3", nullptr));
        groupBox_8->setTitle(QString());
        label_10->setText(QCoreApplication::translate("CWaveformEditor", "Sweep\346\200\273\346\225\260", nullptr));
        sweepCountSpinBox->setSuffix(QString());
        label_11->setText(QCoreApplication::translate("CWaveformEditor", "Sweep\351\200\211\346\213\251", nullptr));
        SweepSelSpinBox->setSuffix(QString());
        allSweepActionCheckBox->setText(QCoreApplication::translate("CWaveformEditor", "\345\205\250\351\203\250Sweep\345\212\250\344\275\234\347\233\270\345\220\214", nullptr));
        groupBox_9->setTitle(QString());
        label_12->setText(QCoreApplication::translate("CWaveformEditor", "\350\265\267\345\247\213\346\227\266\351\227\264", nullptr));
        startTimeSpinBox->setSuffix(QCoreApplication::translate("CWaveformEditor", " ms", nullptr));
        label_13->setText(QCoreApplication::translate("CWaveformEditor", "\346\214\201\347\273\255\346\227\266\351\227\264", nullptr));
        durationSpinBox->setSuffix(QCoreApplication::translate("CWaveformEditor", " ms", nullptr));
        label_14->setText(QCoreApplication::translate("CWaveformEditor", "\351\251\261\345\212\250\347\224\265\345\271\263", nullptr));
        highRadioButton->setText(QCoreApplication::translate("CWaveformEditor", "\351\253\230\347\224\265\345\271\263", nullptr));
        lowRadioButton->setText(QCoreApplication::translate("CWaveformEditor", "\344\275\216\347\224\265\345\271\263", nullptr));
        autoGenerateStiWaveParamGroupbox1->setTitle(QCoreApplication::translate("CWaveformEditor", "\350\207\252\345\212\250\347\224\237\346\210\220\345\210\272\346\277\200\346\263\242\345\275\242\345\217\202\346\225\260", nullptr));
        ampitudeGroupBox->setTitle(QCoreApplication::translate("CWaveformEditor", "\345\271\205\345\272\246", nullptr));
        label_31->setText(QCoreApplication::translate("CWaveformEditor", "\345\271\205       \345\272\246\357\274\232", nullptr));
        amplitudeSpinBox->setSuffix(QCoreApplication::translate("CWaveformEditor", " mV", nullptr));
        label_32->setText(QCoreApplication::translate("CWaveformEditor", "\345\242\236       \351\207\217\357\274\232", nullptr));
        incrementSpinBox1->setSuffix(QCoreApplication::translate("CWaveformEditor", " mV", nullptr));
        label_33->setText(QCoreApplication::translate("CWaveformEditor", "\345\233\240       \345\255\220\357\274\232", nullptr));
        reverseCheckBox1->setText(QCoreApplication::translate("CWaveformEditor", "\345\217\215\350\275\254\351\241\272\345\272\217", nullptr));
        durGroupBox->setTitle(QCoreApplication::translate("CWaveformEditor", "\346\214\201\347\273\255\346\227\266\351\227\264", nullptr));
        label_34->setText(QCoreApplication::translate("CWaveformEditor", "\346\214\201\347\273\255\346\227\266\351\227\264\357\274\232 ", nullptr));
        durSpinBox->setSuffix(QCoreApplication::translate("CWaveformEditor", " ms", nullptr));
        durSpinBox->setPrefix(QString());
        label_35->setText(QCoreApplication::translate("CWaveformEditor", "\345\242\236       \351\207\217\357\274\232", nullptr));
        incrementSpinBox2->setSuffix(QCoreApplication::translate("CWaveformEditor", " ms", nullptr));
        label_36->setText(QCoreApplication::translate("CWaveformEditor", "\345\233\240       \345\255\220\357\274\232", nullptr));
        reverseCheckBox2->setText(QCoreApplication::translate("CWaveformEditor", "\345\217\215\350\275\254\351\241\272\345\272\217", nullptr));
        autoGenerateStiWaveParamGroupbox2->setTitle(QCoreApplication::translate("CWaveformEditor", "\350\207\252\345\256\232\344\271\211\345\210\272\346\277\200\346\263\242\345\275\242\345\217\202\346\225\260", nullptr));
        groupBox_14->setTitle(QCoreApplication::translate("CWaveformEditor", "\347\224\237\346\210\220\346\263\242\345\275\242\346\225\260\345\200\274", nullptr));
#if QT_CONFIG(tooltip)
        groupBox_13->setToolTip(QCoreApplication::translate("CWaveformEditor", "\345\210\272\346\277\200\346\263\242\345\275\242\345\210\206\346\256\265\347\274\226\350\276\221", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_13->setTitle(QCoreApplication::translate("CWaveformEditor", "\347\224\237\346\210\220\346\263\242\345\275\242\346\274\224\347\244\272", nullptr));
        label_19->setText(QString());
        toolButton->setText(QCoreApplication::translate("CWaveformEditor", "\347\241\256\345\256\232", nullptr));
        toolButton_2->setText(QCoreApplication::translate("CWaveformEditor", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CWaveformEditor: public Ui_CWaveformEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CWAVEFORMEDITOR_H
