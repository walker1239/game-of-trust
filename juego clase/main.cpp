#include "behaviour.h"

int main() {
  copycat s1("Copycat");
  allcoperate s2("All coperate");
  allcheat s3("All cheat");
  grudger s4("Grudger");
  detective s5("Detective");
  character _players[5]={s1,s2,s3,s4,s5};
  character *player=new character[5];
  player=_players;
  behaviour prueba(player,5,5);
  prueba._behaviour();
/*  int i=0;
  int j=i+1;
  while(asd[i]!='\0'){
    do{
      cout<<asd[i]<<asd[j]<<endl;
      j++;
    }while (asd[j]!='\0');
    i++;
  }*/
  /*
  behaviour(s1,jug);
  behaviour(s2,jug);
  behaviour(s3,jug);
  behaviour(s4,jug);
  behaviour(s5,jug);*/
  return 0;
}
