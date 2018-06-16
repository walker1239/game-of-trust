#include "allcoperate.h"
allcoperate::allcoperate(string _name):character(_name){
  set_choice(1);
}
allcoperate::~allcoperate(){

}
bool allcoperate::get_previouschoice(){
  return 1;
}
void allcoperate::newchoice(bool _choice){}
