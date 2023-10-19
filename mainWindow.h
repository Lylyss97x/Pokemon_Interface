#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "Pokedeck.h"
#include <QMainWindow>

extern Pokedeck PDeck1;

QT_BEGIN_NAMESPACE
namespace Ui { class mainWindow; }
QT_END_NAMESPACE

class mainWindow : public QMainWindow
{
    Q_OBJECT

public:
    mainWindow(QWidget *parent = nullptr);
    ~mainWindow();
    //void DisplayInformation(mainWindow ui);



private:
    Ui::mainWindow *ui;
};
#endif // MAINWINDOW_H
