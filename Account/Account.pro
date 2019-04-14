QT += core
QT -= gui

CONFIG += c++11

TARGET = Account
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    Account.cpp \
    CheckingAccount.cpp \
    SavingsAccount.cpp

HEADERS += \
    Account.h \
    SavingsAccount.h \
    CheckingAccount.h
