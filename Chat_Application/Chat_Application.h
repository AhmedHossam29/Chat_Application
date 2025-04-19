#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Chat_Application.h"

class Chat_Application : public QMainWindow
{
    Q_OBJECT

public:
    Chat_Application(QWidget *parent = nullptr);
    ~Chat_Application();

private:
    Ui::Chat_ApplicationClass ui;
};
