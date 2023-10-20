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
    int hp = 100;
    bool isDie = false;

public:

    Pokemon(int id,std::string name, std::string type, int  attack, int defense, int shield, std::string Special_Attack, int idDeck, bool isDie);

    void setName(std::string newName);

    void setType(std::string newType);

    void setSpecialAttack(std::string& newSpecialAttack);

    void setAttack(int Newattack);

    bool GetIsDie();

    void setDefense(int Newdefense);

    void PokemonAttacked();

    void setShield(int Newshield);

    std::string GetName();

    std::string GetType();

    std::string GetSpecialAttack();

    int GetAttack();

    int GetDefense();

    int GetShield();

    int GetId();

    int GetHp();


};

#endif // POKEMON_H
