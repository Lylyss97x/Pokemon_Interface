#ifndef POKEMON_H
#define POKEMON_H

#include <QObject>

class Pokemon : public QObject
{
    Q_OBJECT

private:
    int id;
    std::string name;
    std::string type;
    int attack;
    int defense;
    int shield;
    std::string Special_Attack;
    int idDeck;

public:

    Pokemon(int id,std::string name, std::string type, int  attack, int defense, int shield, std::string Special_Attack, int idDeck);

    void setName(std::string newName);

    void setType(std::string newType);

    void setSpecialAttack(std::string& newSpecialAttack);

    void setAttack(int Newattack);


    void setDefense(int Newdefense);


    void setShield(int Newshield);

    std::string GetName();

    std::string GetType();

    std::string GetSpecialAttack();

    int GetAttack();

    int GetDefense();

    int GetShield();

    int GetId();


};

#endif // POKEMON_H
