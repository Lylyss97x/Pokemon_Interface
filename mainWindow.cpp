#include "mainWindow.h"
#include "Pokedeck.h"
#include "ui_mainWindow.h"
#include "Pokemon.h"
#include <QPixmap>
#include <QLabel>
#include <iostream>
#include <ostream>
#include <QString>


//void DisplayInformation(Ui::mainWindow* ui, Pokedeck deckPoke){

    //for (int i = 1; i <4;i++){

        //std::string name = "label_Name_" + std::to_string(i);
        //QLabel* labelname = ui->findChild<QLabel*>(name.c_str());
        //labelname->setText((QString::fromStdString(deckPoke.PokemonName[i])));


    //}
//}

mainWindow::mainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainWindow)
{

    Pokedeck PDeck1(1);
    Pokedeck deckIni = PDeck1.createPoke(1,PDeck1);

    ui->setupUi(this);

    QFrame* frames[3];
    frames[0] = ui->frame_0;
    frames[1] = ui->frame_1;
    frames[2] = ui->frame_2;


    for (int i = 0; i <3;i++){

        std::string namePix = "label_pix_" + std::to_string(i);
        QLabel* labelnamePix = findChild<QLabel*>(namePix.c_str());

        int w = labelnamePix->width();
        int y = labelnamePix->height();


        if((deckIni.PokemonName[i])=="Dracaufeu"){
            QPixmap pix("C:\\Users\\USER-1\\Pictures\\pokemon\\dracau.png");
            frames[i]->setStyleSheet("background-image: url('C:/Users/USER-1/Pictures/pokemon/fire.png');");


            labelnamePix->setPixmap(pix.scaled(w,y,Qt::KeepAspectRatio));

        }

        else if ((deckIni.PokemonName[i])=="Carapuce"){
            QPixmap pix("C:\\Users\\USER-1\\Pictures\\pokemon\\carapuce.png");
            labelnamePix->setPixmap(pix.scaled(w,y,Qt::KeepAspectRatio));
            frames[i]->setStyleSheet("background-image: url('C:/Users/USER-1/Pictures/pokemon/water.png');");


        }

    else if ((deckIni.PokemonName[i])=="Vipeliere"){
        QPixmap pix("C:\\Users\\USER-1\\Pictures\\pokemon\\vipe.png");
        labelnamePix->setPixmap(pix.scaled(w,y,Qt::KeepAspectRatio));
        frames[i]->setStyleSheet("background-image: url('C:/Users/USER-1/Pictures/pokemon/earth.png');");


    }

        else if ((deckIni.PokemonName[i])=="Metalosse"){
        QPixmap pix("C:\\Users\\USER-1\\Pictures\\pokemon\\metaloss.png");
        labelnamePix->setPixmap(pix.scaled(w,y,Qt::KeepAspectRatio));
        frames[i]->setStyleSheet("background-image: url('C:/Users/USER-1/Pictures/pokemon/metal.png');");


        }


        std::string namePoke = "label_Name_" + std::to_string(i);
        QLabel* labelnamePoke = findChild<QLabel*>(namePoke.c_str());

        std::string ATKPoke = "label_ATK_" + std::to_string(i);
        QLabel* labelATKPoke = findChild<QLabel*>(ATKPoke.c_str());

        std::string DEFENSEPoke = "label_DFENSE_" + std::to_string(i);
        QLabel* labelDEFENSEPoke = findChild<QLabel*>(DEFENSEPoke.c_str());


        std::string SPEPoke = "label_SPE_ATK_" + std::to_string(i);
        QLabel* labelSPEPoke = findChild<QLabel*>(SPEPoke.c_str());


        std::cout << "numPoke : " << deckIni.PokemonNum[i] << std::endl;

        labelnamePoke->setText(QString::fromStdString(deckIni.PokemonName[i]));
        labelATKPoke->setText(QString::number(deckIni.PokemonAttack[i]));
        labelDEFENSEPoke->setText(QString::number(deckIni.PokemonDefense[i]));
        labelSPEPoke->setText(QString::fromStdString(deckIni.PokemonSpe[i]));

    }


}

mainWindow::~mainWindow()
{
    delete ui;
}

