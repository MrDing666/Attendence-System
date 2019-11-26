#-------------------------------------------------
#
# Project created by QtCreator 2019-08-14T10:25:26
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ATSystem
TEMPLATE = app

QMAKE_LIBDIR += ../ATSystem/qextserialport/lib

unix {
LIBS += -lqextserialport
} else:win32 {
        CONFIG(debug, debug|release) {
                   LIBS += -lqextserialportd1
        } else {
                   LIBS += -lqextserialport1
        }
}
SOURCES += main.cpp\
    SearchCard.cpp\
    QRFID/ChannelMan/RFIDChannelMan.cpp \
    QRFID/IEEE14443/IEEE14443Package.cpp \
    QRFID/IEEE14443/IEEE14443Control.cpp \
    ManageLogin.cpp \
    MainWindow.cpp \
    ManageControl.cpp \
    EditCard.cpp \
    DeleteCard.cpp \
    AddCard.cpp \
    ATSysDatabaseControl.cpp\
    rotatenumberlabel.cpp \
    SystemManage.cpp \
    SystemLogin.cpp \

HEADERS  += SearchCard.h\
    QRFID/ChannelMan/RFIDChannelMan.h \
    QRFID/IEEE14443/IEEE14443Package.h \
    QRFID/IEEE14443/IEEE14443Control.h \
    ManageLogin.h \
    MainWindow.h \
    ManageControl.h \
    EditCard.h \
    DeleteCard.h\
    AddCard.h \
    ATSysDatabaseControl.h\
    numres.h \
    rotatenumberlabel.h \
    SystemManage.h \
    SystemLogin.h \

FORMS    += SearchCard.ui \
    ManageLogin.ui \
    MainWindow.ui \
    ManageControl.ui \
    EditCard.ui \
    DeleteCard.ui \
    AddCard.ui \
    SystemManage.ui \
    SystemLogin.ui



RESOURCES += \
    Resource.qrc

INCLUDEPATH +=  \
    ../ATSystem/qextserialport/include \
    ../ATSystem/QRFID


linux-arm-gnueabi-g++ {
    target.path=/root
    INSTALLS += target
}
