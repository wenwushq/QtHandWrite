#pragma once

#include <QtWidgets/QWidget>
#include "ui_QtHandWrite.h"

class QtHandWrite : public QWidget
{
    Q_OBJECT

public:
    QtHandWrite(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtHandWriteClass ui;
};
