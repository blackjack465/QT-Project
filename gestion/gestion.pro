QT       += core gui sql
QT += printsupport
RESOURCES += \
    qtresource.qrc
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
TARGET = Commande


# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admin.cpp \
    client.cpp \
    clientwindow.cpp \
    commandes.cpp \
    db.cpp \
    login.cpp \
    main.cpp

HEADERS += \
    admin.h \
    client.h \
    clientwindow.h \
    commandes.h \
    db.h \
    login.h

FORMS += \
    clientwindow.ui \
    login.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
