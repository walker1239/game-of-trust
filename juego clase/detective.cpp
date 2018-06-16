#include "detective.h"


detective::detective(string _name):character(_name){
  previouschoice=1;
}
detective::~detective(){

}
void detective::newchoice(bool _choice,int k){
  previouschoice=get_choice();
  if (k == 0) {
    set_choice(1);
  }
  else if (k == 1) {
    set_choice(0);
  }
  else if (k == 2) {
    set_choice(1);
  }
  else {
    set_choice(_choice);
  }
}
bool detective::get_previouschoice(){
  return previouschoice;
}
