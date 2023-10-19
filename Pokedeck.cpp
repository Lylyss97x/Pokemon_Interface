#include "Pokedeck.h"
#include "Pokemon.h"
#include <QRandomGenerator>
#include <iostream>
#include <ostream>


Pokedeck::Pokedeck(int idDeck){
    this->idDeck = idDeck;
};


Pokedeck Pokedeck::createPoke(int idDeck, Pokedeck myDeck){

    QStringList PokemonList;
    PokemonList << "Dracaufeu" << "Carapuce" <<"Vipeliere"<<"Metalosse";



    for(int i=0;i<3;i++){
        int randomIndex = QRandomGenerator::global()->bounded(PokemonList.size());
        QString randomString = PokemonList[randomIndex];

        if (randomString=="Dracaufeu"){
             Pokemon myPokemon(i,randomString.toStdString(),"Fire",200,100,50,"FireBall",idDeck);
             std::cout << "D"<< std::endl;
             myDeck.PokemonNum[i] = myPokemon.GetId();
             std::cout << "méthode push : " << myDeck.PokemonNum[i] << std::endl;
             myDeck.PokemonName[i]= myPokemon.GetName();
             myDeck.PokemonAttack[i]= myPokemon.GetAttack();
             myDeck.PokemonDefense[i]= myPokemon.GetDefense();
             myDeck.PokemonSpe[i]= myPokemon.GetSpecialAttack();





        }

        else if (randomString=="Carapuce"){
            Pokemon myPokemon(i,randomString.toStdString(),"Aqua",200,100,50,"WaterFall",idDeck);
            std::cout << "C"<< std::endl;
             myDeck.PokemonNum[i] = myPokemon.GetId();
            std::cout << "méthode push : " << myDeck.PokemonNum[i] << std::endl;

            myDeck.PokemonName[i]= myPokemon.GetName();
            myDeck.PokemonAttack[i]= myPokemon.GetAttack();
            myDeck.PokemonDefense[i]= myPokemon.GetDefense();
            myDeck.PokemonSpe[i]= myPokemon.GetSpecialAttack();


        }

        else if(randomString=="Vipeliere"){
            Pokemon myPokemon(i,randomString.toStdString(),"Earth",200,100,50,"EarthShake",idDeck);
            std::cout << "V"<< std::endl;

            myDeck.PokemonNum[i] = myPokemon.GetId();
            std::cout << "méthode push : " << myDeck.PokemonNum[i] << std::endl;


            myDeck.PokemonName[i]= myPokemon.GetName();
            myDeck.PokemonAttack[i]= myPokemon.GetAttack();
            myDeck.PokemonDefense[i]= myPokemon.GetDefense();
            myDeck.PokemonSpe[i]= myPokemon.GetSpecialAttack();


        }

        else{
            Pokemon myPokemon(i,randomString.toStdString(),"Metal",200,100,50,"HeavyMetal",idDeck);
            std::cout << "O"<< std::endl;
            myDeck.PokemonNum[i]= myPokemon.GetId();
            std::cout << "méthode push : " << myDeck.PokemonNum[i] << std::endl;

            myDeck.PokemonName[i]= myPokemon.GetName();
            myDeck.PokemonAttack[i]= myPokemon.GetAttack();
            myDeck.PokemonDefense[i]= myPokemon.GetDefense();
            myDeck.PokemonSpe[i]= myPokemon.GetSpecialAttack();


        }






    }
    std::cout << "list : " << myDeck.PokemonNum[0] << std::endl;
    return myDeck;


}

