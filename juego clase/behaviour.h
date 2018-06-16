#ifndef BEHAVIOUR_H
#define BEHAVIOUR_H

#include <iostream>
#include "character.h"
#include "allcheat.h"
#include "allcoperate.h"
#include "copycat.h"
#include "detective.h"
#include "grudger.h"

using namespace std;
class behaviour{
  private:
    int numplayers;
    character *players;
    int rounds;
  public:
    behaviour(character *_players,int _numplayers, int _rounds);
    void _behaviour();
    void points (int i, int j);
    void select_player(int i, int j,int k);


};
#endif
