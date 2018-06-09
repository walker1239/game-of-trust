#include "behaviour.h"
behaviour::behaviour(character * _players,int _numplayers, int _rounds){
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
    for (j=i+1;players[j-1].get_name()!="fin";j++) {
      cout<<players[j].get_name()<<endl;
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
void behaviour::copycat(int i, int j,int k){
  if(k==0){
    players[i].set_choice(1);
  }
  else
    players[i].set_choice(players[j].get_choice());
}
void behaviour::allcoperate(int i){
  players[i].set_choice(1);
}
void behaviour::allcheat(int i){
  players[i].set_choice(0);
}
void behaviour::grudger(int i, int j,int k){
  if(k==0){
    players[i].set_choice(1);
  }
  else if(players[j].get_choice()==0)
    players[i].set_choice(0);
}
void behaviour::detective(int i, int j,int k){
  if(k==0){
    players[i].set_choice(1);
  }
  else if(k==1){
    players[i].set_choice(0);
  }
  else if(k==2){
    players[i].set_choice(1);
  }
  else if(k==3){
    players[i].set_choice(1);
  }
  else if(k==4){
    behaviour::copycat(i,j,k);
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
  if (players[i].get_name()=="copycat"){
    behaviour::copycat(i,j,k);
  }
  if (players[j].get_name()=="copycat"){
    behaviour::copycat(j,i,k);
  }
  if (players[i].get_name()=="allcoperate"){
    behaviour::allcoperate(i);
  }
  if (players[j].get_name()=="allcoperate"){
    behaviour::allcoperate(i);
  }
  if (players[i].get_name()=="allcheat"){
    behaviour::allcheat(i);
  }
  if (players[j].get_name()=="allcheat"){
    behaviour::allcheat(i);
  }
  if (players[i].get_name()=="grudger"){
    behaviour::grudger(i,j,k);
  }
  if (players[j].get_name()=="grudger"){
    behaviour::grudger(j,i,k);
  }
  if (players[i].get_name()=="detective"){
    behaviour::detective(i,j,k);
  }
  if (players[j].get_name()=="detective"){
    behaviour::detective(j,i,k);
  }
}
