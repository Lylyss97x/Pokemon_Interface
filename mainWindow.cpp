#include "mainWindow.h"
#include "Pokedeck.h"
#include "ui_mainWindow.h"
#include "Pokemon.h"
#include <QPixmap>
#include <QLabel>
#include <iostream>
#include <ostream>
#include <QString>
#include <QPushButton>
#include <QObject>
#include <QSlider>
#include <QTabWidget>
#include <QWidget>
#include <QRandomGenerator>




mainWindow::mainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainWindow)
{
    Pokedeck PDeck1(1);
    Pokedeck deckIni = PDeck1.createPoke(1,PDeck1);

    Pokedeck PDeck2(2);
    Pokedeck deckAdv = PDeck2.createPoke(2,PDeck2);



    ui->setupUi(this);
    QObject::connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(attackPokemon()));
    QObject::connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(attackPokemon()));
    QObject::connect(ui->pushButton_0,SIGNAL(clicked()),this,SLOT(attackPokemon()));

    QObject::connect(ui->buttonSpe_0,SIGNAL(clicked()),this,SLOT(SpeAttackPokemon()));
    QObject::connect(ui->buttonSpe_1,SIGNAL(clicked()),this,SLOT(SpeAttackPokemon()));
    QObject::connect(ui->buttonSpe_2,SIGNAL(clicked()),this,SLOT(SpeAttackPokemon()));





    CardDesign(deckIni,3);
    CardAdv(ui->frame_3,deckAdv);


    for (int i = 0; i <3;i++){

        int indexAdv = i;
        if (deckAdv.PokemonDie[i]==false){
        indexAdv = i+1;
        }
        else{
        indexAdv = i;
        }

        std::string namePokeAdv = GetLabel("label_Name_",indexAdv);
        QLabel* labelnamePokeAdv = findChild<QLabel*>(namePokeAdv.c_str());

        std::string ATKPokeAdv = GetLabel("label_ATK_",indexAdv);
        QLabel* labelATKPokeAdv = findChild<QLabel*>(ATKPokeAdv.c_str());

        std::string DEFENSEPokeAdv = GetLabel("label_DFENSE_",indexAdv);
        QLabel* labelDEFENSEPokeAdv = findChild<QLabel*>(DEFENSEPokeAdv.c_str());

        std::string SPEPokeAdv = GetLabel("label_SPE_ATK_",indexAdv);
        QLabel* labelSPEPokeAdv = findChild<QLabel*>(SPEPokeAdv.c_str());

        //insertIntoUi(labelnamePokeAdv,labelATKPokeAdv,labelDEFENSEPokeAdv,labelSPEPokeAdv,deckAdv,indexAdv);


        labelnamePokeAdv->setText(QString::fromStdString(deckAdv.PokemonName[i]));
        labelATKPokeAdv->setText(QString::number(deckAdv.PokemonAttack[i]));
        labelDEFENSEPokeAdv->setText(QString::number(deckAdv.PokemonDefense[i]));
        labelSPEPokeAdv->setText(QString::fromStdString(deckAdv.PokemonSpe[i]));


        std::string namePoke = GetLabel("label_Name_",i);
        QLabel* labelnamePoke = findChild<QLabel*>(namePoke.c_str());

        std::string ATKPoke = GetLabel("label_ATK_",i);
        QLabel* labelATKPoke = findChild<QLabel*>(ATKPoke.c_str());

        std::string DEFENSEPoke = GetLabel("label_DFENSE_",i);
        QLabel* labelDEFENSEPoke = findChild<QLabel*>(DEFENSEPoke.c_str());


        std::string SPEPoke = GetLabel("label_SPE_ATK_",i);
        QLabel* labelSPEPoke = findChild<QLabel*>(SPEPoke.c_str());


        std::cout << "numPoke : " << deckIni.PokemonNum[i] << std::endl;
        insertIntoUi(labelnamePoke,labelATKPoke,labelDEFENSEPoke,labelSPEPoke,deckIni,i);

    }

}

void mainWindow::CardAdv(QFrame* frame,Pokedeck deck){

    std::string namePix = "label_pix_" + std::to_string(3);
    QLabel* labelnamePix = findChild<QLabel*>(namePix.c_str());

    int w = labelnamePix->width();
    int y = labelnamePix->height();


    if((deck.PokemonName[2])=="Dracaufeu"){
        std::cout << "Dracau" << std::endl;
        QPixmap pix("C:\\Users\\USER-1\\Pictures\\pokemon\\dracau.png");
        frame->setStyleSheet("background-image: url('C:/Users/USER-1/Pictures/pokemon/fire.png');");
        labelnamePix->setPixmap(pix.scaled(w,y,Qt::KeepAspectRatio));

    }


    else if ((deck.PokemonName[2])=="Carapuce"){
        QPixmap pix("C:\\Users\\USER-1\\Pictures\\pokemon\\carapuce.png");
        labelnamePix->setPixmap(pix.scaled(w,y,Qt::KeepAspectRatio));
        frame->setStyleSheet("background-image: url('C:/Users/USER-1/Pictures/pokemon/water.png');");


    }

    else if ((deck.PokemonName[2])=="Vipeliere"){
        QPixmap pix("C:\\Users\\USER-1\\Pictures\\pokemon\\vipe.png");
        labelnamePix->setPixmap(pix.scaled(w,y,Qt::KeepAspectRatio));
        frame->setStyleSheet("background-image: url('C:/Users/USER-1/Pictures/pokemon/earth.png');");

    }

    else if ((deck.PokemonName[2])=="Metalosse"){
        QPixmap pix("C:\\Users\\USER-1\\Pictures\\pokemon\\metaloss.png");
        labelnamePix->setPixmap(pix.scaled(w,y,Qt::KeepAspectRatio));
        frame->setStyleSheet("background-image: url('C:/Users/USER-1/Pictures/pokemon/metal.png');");

    }


}


void mainWindow::CardDesign(Pokedeck deck, int max){


    QFrame* frames[3];
    frames[0] = ui->frame_0;
    frames[1] = ui->frame_1;
    frames[2] = ui->frame_2;


    for ( int i = 0 ; i <max;i++){

        std::cout << "Boucle" << std::endl;


        std::string namePix = "label_pix_" + std::to_string(i);
        QLabel* labelnamePix = findChild<QLabel*>(namePix.c_str());

        int w = labelnamePix->width();
        int y = labelnamePix->height();


        if((deck.PokemonName[i])=="Dracaufeu"){
        std::cout << "Dracau" << std::endl;

        QPixmap pix("C:\\Users\\USER-1\\Pictures\\pokemon\\dracau.png");
        frames[i]->setStyleSheet("background-image: url('C:/Users/USER-1/Pictures/pokemon/fire.png');");
        labelnamePix->setPixmap(pix.scaled(w,y,Qt::KeepAspectRatio));

        }

        else if ((deck.PokemonName[i])=="Carapuce"){
        QPixmap pix("C:\\Users\\USER-1\\Pictures\\pokemon\\carapuce.png");
        labelnamePix->setPixmap(pix.scaled(w,y,Qt::KeepAspectRatio));
        frames[i]->setStyleSheet("background-image: url('C:/Users/USER-1/Pictures/pokemon/water.png');");



        }

        else if ((deck.PokemonName[i])=="Vipeliere"){
        QPixmap pix("C:\\Users\\USER-1\\Pictures\\pokemon\\vipe.png");
        labelnamePix->setPixmap(pix.scaled(w,y,Qt::KeepAspectRatio));
        frames[i]->setStyleSheet("background-image: url('C:/Users/USER-1/Pictures/pokemon/earth.png');");



        }

        else if ((deck.PokemonName[i])=="Metalosse"){
        QPixmap pix("C:\\Users\\USER-1\\Pictures\\pokemon\\metaloss.png");
        labelnamePix->setPixmap(pix.scaled(w,y,Qt::KeepAspectRatio));
        frames[i]->setStyleSheet("background-image: url('C:/Users/USER-1/Pictures/pokemon/metal.png');");

        }


    }

}



void mainWindow::insertIntoUi(QLabel* name,QLabel* atk,QLabel* defense,QLabel* spe,Pokedeck deck, int index){
    name->setText(QString::fromStdString(deck.PokemonName[index]));
    atk->setText(QString::number(deck.PokemonAttack[index]));
    defense->setText(QString::number(deck.PokemonDefense[index]));
    spe->setText(QString::fromStdString(deck.PokemonSpe[index]));

}



std::string mainWindow::GetLabel(std::string label, int index){
    return label+std::to_string(index);

}

void mainWindow::backlash(){
     int randomNumber = QRandomGenerator::global()->bounded(3);
    std::string nameSlider = "horizontalSlider_" + std::to_string(randomNumber);
    QSlider* mySlider = findChild<QSlider*>(nameSlider.c_str());
    decrementerSlider(10,mySlider);

}

void mainWindow::decrementerSlider(int valueSlide,QSlider* slider) {
    std::cout << "OK" << std::endl;
    int valeurActuelle = slider->value();
    slider->setValue(valeurActuelle +valueSlide);

}



void mainWindow::attackPokemon(){

    decrementerSlider(10,ui->horizontalSlider_3);
    backlash();

}

void mainWindow::SpeAttackPokemon(){
    decrementerSlider(20,ui->horizontalSlider_3);
    backlash();

}


mainWindow::~mainWindow()
{
    delete ui;
}

