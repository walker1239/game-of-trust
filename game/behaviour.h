#ifndef BEHAVIOUR_H
#define BEHAVIOUR_H

#include <iostream>
#include "character.h"

using namespace std;
class behaviour{
  private:
    int numplayers;
    character *players;
    int rounds;
  public:
    behaviour(character *_players,int _numplayers, int _rounds);
    void _behaviour();
    void copycat(int i, int j, int k);
    void allcoperate(int i);
    void allcheat(int i);
    void grudger(int i, int j, int k);
    void detective(int i, int j, int k);
    void points (int i, int j);
    void select_player(int i, int j,int k);


};
#endif
