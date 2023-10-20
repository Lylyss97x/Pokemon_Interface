#include "Pokemon.h"
#include <QStringList>
#include <QRandomGenerator>

//Pokemon::Pokemon(QObject *parent)
//    : QObject{parent}
//{


//}


Pokemon::Pokemon( int id,std::string name, std::string type, int  attack, int defense, int shield, std::string Special_Attack, int idDeck, bool isDie) {
    this->id = id;
    this->name = name;
    this->type = type;
    this->attack = attack;
    this->defense = defense;
    this->shield = shield;
    this->Special_Attack = Special_Attack;
    this->isDie = isDie;



};

void Pokemon::PokemonAttacked(){
    this->hp = hp-10;
}

void Pokemon :: setName(std::string newName) {
    this->name = newName;
}

void  Pokemon:: setType(std::string newType) {
    this->type = newType;
}

void  Pokemon:: setSpecialAttack(std::string& newSpecialAttack) {
    this->Special_Attack = newSpecialAttack;
}

void  Pokemon:: setAttack(int Newattack) {
    this->attack = Newattack;

}

void  Pokemon::setDefense(int Newdefense) {
    this->defense = Newdefense;
}

void  Pokemon::setShield(int Newshield) {
    this->shield = Newshield;
}

 std::string  Pokemon::GetName() {
    return name;
}

std::string  Pokemon::GetType() {
    return type;
}

std::string  Pokemon::GetSpecialAttack() {
    return Special_Attack;

}

bool Pokemon::GetIsDie(){
    return isDie;
}

int Pokemon ::GetAttack  () {
    return attack;
}

int  Pokemon:: GetDefense() {
    return defense;
}

int Pokemon:: GetShield() {
    return shield;}

int Pokemon:: GetId() {
    return id;
}

int Pokemon::GetHp(){
    return hp;
}



