#include "behaviour.h"
behaviour::behaviour(character *_players,int _numplayers, int _rounds){
  rounds=_rounds;
  numplayers=_numplayers;
    players=new character [numplayers+1];
  for(int i=0;i<numplayers;i++){
    players[i]=_players[i];
  }
  character f("fin");
  players[numplayers]= f;
}
void behaviour::_behaviour(){
  int i;
  for (i=0;players[i-1].get_name()!="fin";i++) {
    cout<<players[i].get_name()<<" VS ";
    int j;
    cout<<players[i+1].get_name()<<endl;
    for (j=i+1;players[j-1].get_name()!="fin";j++) {
      int k;
      for (k = 0; k < rounds; k++) {
        behaviour::select_player(i,j,k);
        behaviour::points(i,j);
      }
      cout<<"el puntaje de"<<players[i].get_name()<<" es "<<players[i].get_score()<<endl;
      cout<<"sus monedas son:"<<players[i].get_coins()<<endl;
      cout<<"el puntaje de"<<players[j].get_name()<<" es "<<players[j].get_score()<<endl;
      cout<<"sus monedas son:"<<players[j].get_coins()<<endl;
    }
    players[i].resetcoins();
    players[j].resetcoins();
  }
}
void behaviour::points (int i, int j){
  if (players[i].get_choice()==1){
    if(players[j].get_choice()==1){
      players[j].set_score(2);
      players[j].set_coins(2);
      players[i].set_score(2);
      players[i].set_coins(2);
    }
    else{
      players[i].set_score(-1);
      players[i].set_coins(-1);
      players[j].set_score(3);
      players[j].set_coins(3);
    }
  }
  else{
    if (players[j].get_choice()==1) {
      players[i].set_score(3);
      players[i].set_coins(3);
      players[j].set_score(-1);
      players[j].set_coins(-1);
    }
    else{
      players[i].set_score(0);
      players[j].set_score(0);
      players[i].set_coins(0);
      players[j].set_coins(0);
    }
  }
}
void behaviour::select_player(int i, int j,int k){
  if (players[i].get_name()=="Copycat")
      players[i].newchoice(player[j].get_previouschoice())
  }
  if (players[j].get_name()=="Copycat"){
      players[j].newchoice(player[i].get_previouschoice())
  }
  if (players[i].get_name()=="All coperate"){
      players[i].set_choice(1);
  }
  if (players[j].get_name()=="All coperate"){
      players[j].set_choice(1);
  }
  if (players[i].get_name()=="All cheat"){
      players[i].set_choice(0);
  }
  if (players[j].get_name()=="All cheat"){
      players[j].set_choice(0);
  }
  if (players[i].get_name()=="Grudger"){
      players[i].newchoice(player[j].get_previouschoice())
  }
  if (players[j].get_name()=="Grudger"){
      players[j].newchoice(player[i].get_previouschoice())
  }
  if (players[i].get_name()=="Detective"){
      players[i].newchoice(player[j].get_previouschoice(),int k)
  }
  if (players[j].get_name()=="Detective"){
      players[j].newchoice(player[i].get_previouschoice(),int k)
  }
}
