#ifndef POKEDECK_H
#define POKEDECK_H

#include "Pokemon.h"


class Pokedeck
{

public:
    Pokedeck(int idDeck);

    struct PokemonInfo;

    int PokemonNum[3];
    std::string PokemonName[3];
    int PokemonAttack[3];
    int PokemonDefense[3];
    int PokemonShield[3];
    std::string PokemonSpe[3];
    int Pokemonhp[3];
    bool PokemonDie[3];
    Pokedeck createPoke(int idDeck, Pokedeck myDeck);



private:
    int idDeck;




};

#endif // POKEDECK_H
