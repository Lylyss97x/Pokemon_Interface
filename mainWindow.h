#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "Pokedeck.h"
#include "qpushbutton.h"
#include "qslider.h"
#include <QMainWindow>
#include <QPushButton>
#include <QLabel>


QT_BEGIN_NAMESPACE
namespace Ui { class mainWindow; }
QT_END_NAMESPACE

class mainWindow : public QMainWindow
{
    Q_OBJECT

public:
    mainWindow(QWidget *parent = nullptr);
    ~mainWindow();
    std::string GetLabel(std::string label, int index);
    void insertIntoUi(QLabel* name,QLabel* atk,QLabel* defense,QLabel* spe,Pokedeck deck, int index);
    void CardDesign(Pokedeck deck, int max);
    void CardAdv(QFrame* frame, Pokedeck deck);
    void backlash();





    //void DisplayInformation(mainWindow ui);

public slots:
    void attackPokemon();
    void decrementerSlider(int valueSlide,QSlider* slider);
    void SpeAttackPokemon();


private:
    Ui::mainWindow *ui;
    QPushButton *pushButton_2;
};
#endif // MAINWINDOW_H
