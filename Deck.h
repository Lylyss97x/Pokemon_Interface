#ifndef DECK_H
#define DECK_H
#include "Pokemon.h"
#include <QObject>
#include <QList>
#include <QVector>

class Deck : public QObject
{
    Q_OBJECT

public:
    Deck(int id, int cardPlayed);
    void addPokemon(Pokemon newPokemon);


private:
    int id;
    int cardPlayed;




signals:

};

#endif // DECK_H
