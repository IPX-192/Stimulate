QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
TEMPLATE = app

#生成文件名称
CONFIG(debug , debug|release){
    TARGET  = Stimulated
    DESTDIR = $$PWD/../../../build/MainFrame/bin/x64/debug/plugins
}else{
    TARGET  = Stimulate
    DESTDIR = $$PWD/../../../build/MainFrame/bin/x64/release/plugins
}

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    CClickableFrameHandler.cpp \
    CClickableLabelHandler.cpp \
    CLabelBtn.cpp \
    CNewStimulateProtocol.cpp \
    CQListViewBase.cpp \
    CStimulateComponent.cpp \
    CStimulateEditComponent.cpp \
    CStimulateEditor.cpp \
    CStimulatePlugin.cpp \
    CStimulateTablePanel.cpp \
    CStimulateTempTablePanel.cpp \
    CWaveformEditor.cpp \
 \    # test.cpp
    main.cpp

HEADERS += \
    CLabelBtn.h \
    CNewStimulateProtocol.h \
    CQListViewBase.h \
    CStimulateComponent.h \
    CStimulateEditComponent.h \
    CStimulateEditor.h \
    CStimulatePlugin.h \
    CStimulateTablePanel.h \
    CStimulateTempTablePanel.h \
    CWaveformEditor.h \
    # mainwindow.h

FORMS += \
    CNewStimulateProtocol.ui \
    CStimulateEditor.ui \
    CWaveformEditor.ui

RESOURCES += \
    Images.qrc

win32{
    message("win")
    DEFINES += OS_WIN

    #包含库目录
    INCLUDEPATH +=  $$PWD/../../../thirdparty/Logger
    INCLUDEPATH +=  $$PWD/../../../thirdparty/Common
    INCLUDEPATH +=  $$PWD/../../../thirdparty/Common/TableView

    CONFIG(debug, debug|release){
        contains(QT_ARCH, i386) {

            #配置三方库目录
            LIBS += -L$$PWD/../../../thirdparty/lib/Debug -lglog
            LIBS += -L$$PWD/../../../thirdparty/lib/Debug -lCommond
        } else {

            #配置三方库目录
            LIBS += -L$$PWD/../../../thirdparty/lib/Debug -lglog
            LIBS += -L$$PWD/../../../thirdparty/lib/Debug -lCommond
        }
    } else {
        contains(QT_ARCH, i386) {

        } else {

            #配置三方库目录
            LIBS += -L$$PWD/../../../thirdparty/lib/release -lglog
            LIBS += -L$$PWD/../../../thirdparty/lib/release -lCommon
        }
    }
}

linux : !android{
    message("linux")

    #包含库目录
    INCLUDEPATH +=  $$PWD/../../../thirdparty/Logger
    INCLUDEPATH +=  $$PWD/../../../thirdparty/Common

    #库文件
    CONFIG(debug, debug|release){
        DESTDIR = $$PWD/../../../build/MainFrame/bin/$${QT_ARCH}/debug/plugins

        LIBS   += -L$$PWD/../../../thirdparty/lib/Debug -lglog
        LIBS   += -L$$PWD/../../../thirdparty/lib/Debug -lCommond

    } else {
        DESTDIR = $$PWD/../../../build/MainFrame/bin/$${QT_ARCH}/release/plugins

        LIBS   += -L$$PWD/../../../thirdparty/lib/Debug -lglog
        LIBS   += -L$$PWD/../../../thirdparty/lib/Debug -lCommond
    }
}

android{
    message("android")

    #包含库目录
    INCLUDEPATH +=  $$PWD/../../../thirdparty/Logger
    INCLUDEPATH +=  $$PWD/../../../thirdparty/Common

    #库文件
    CONFIG(debug, debug|release){
        DESTDIR = $$PWD/../../../build/MainFrame/bin/$${QT_ARCH}/debug/plugins

        LIBS   += -L$$PWD/../../../thirdparty/lib/debug -lglog_$${QT_ARCH}
        LIBS   += -L$$PWD/../../../thirdparty/lib/debug -lCommond_$${QT_ARCH}

    } else {
        DESTDIR = $$PWD/../../../build/MainFrame/bin/$${QT_ARCH}/release/plugins

        LIBS   += -L$$PWD/../../../thirdparty/lib/Release -lglog_$${QT_ARCH}
        LIBS   += -L$$PWD/../../../thirdparty/lib/Release -lCommon_$${QT_ARCH}
    }
}

# Default rules for deployment.
# qnx: target.path = /tmp/$${TARGET}/bin
# else: unix:!android: target.path = /opt/$${TARGET}/bin
# !isEmpty(target.path): INSTALLS += target

DISTFILES += \
    stimulatePlugin.json
