#include "character.h"

character::character(string _name){
  name=_name;
  coins=0;
  score=0;
  choice=1;
}
character::~character(){
}
int character::get_score(){
  return score;
}
int character::get_coins(){
  return coins;
}
void character::resetcoins(){
  coins=0;
}
bool character::get_choice(){
  return choice;
}
string character::get_name(){
  return name;
}
void character::set_choice(bool _choice){
  choice=_choice;
}
void character::set_coins(int c){

  coins+=c;
}
void character::set_score(int c){
  score+=c;
}
