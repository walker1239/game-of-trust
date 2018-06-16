#include "copycat.h"
copycat::copycat(string _name):character(_name){
  previouschoice=1;
}
copycat::~copycat(){

}
void copycat::newchoice(bool _choice){
  previouschoice=get_choice();
  set_choice(_choice);

}
bool copycat::get_previouschoice(){
  return previouschoice;
}
