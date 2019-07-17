#ifndef VSTEST_H
#define VSTEST_H

#include <QtWidgets/QMainWindow>
#include "ui_VSTest.h"

class VSTest : public QMainWindow
{
    Q_OBJECT

public:
    VSTest(QWidget *parent = 0);
    ~VSTest();

private:
    Ui::VSTestClass ui;
};

#endif // VSTEST_H
