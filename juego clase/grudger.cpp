#include "grudger.h"


grudger::grudger(string _name):character(_name){
  previouschoice=1;
}
grudger::~grudger(){

}
void grudger::newchoice(bool _choice){
  previouschoice=get_choice();
  if (_choice == 0) {
    set_choice(0);
  }
}
bool grudger::get_previouschoice(){
  return previouschoice;
}
