#include "Pokedeck.h"
#include "Pokemon.h"

#include "mainWindow.h"
#include "ui_mainWindow.h"

#include <QApplication>
#include <iostream>
#include <ostream>



int main(int argc, char *argv[])
{




    // Utiliser l'objet Pokemon
    //std::cout << "Nom du Pokemon : " << PDeck1.allPokemon[0]->GetName() << std::endl;
    //std::cout << "Type du Pokemon : " << PDeck1.allPokemon[0]->GetType() << std::endl;
    //std::cout << "Attaque du Pokemon : " << PDeck1.allPokemon[0]->GetAttack() << std::endl;

    QApplication a(argc, argv);
    mainWindow w;


    w.show();
    return a.exec();
}
