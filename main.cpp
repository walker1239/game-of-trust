#include "character.h"

void behaviour(character &s, character &p){
  int rounds=5;
  bool choice=1;
  for (int i = 0; i < rounds; i++) {
    cout<<"copera--> 1/ estafa-->0"<<endl;
    s.set_choice (choice);
    if (s.get_name()=="Copycat"){
      cout<<"Copycat"<<endl;
      s.set_choice (choice);
      cin>>choice;
      p.set_choice (choice);
      if (s.get_choice()==1){
        if(p.get_choice()==1){
          s.set_score(2);
          p.set_score(2);
          s.set_coins(2);
          p.set_coins(2);
        }
        else{
          s.set_score(-1);
          p.set_score(3);
          s.set_coins(-1);
          p.set_coins(3);
        }
      }
      else{
        if (p.get_choice()==1) {
          s.set_score(3);
          p.set_score(-1);
          s.set_coins(3);
          p.set_coins(-1);
        }
        else{
          s.set_score(0);
          p.set_score(0);
          s.set_coins(0);
          p.set_coins(0);
        }
      }
    }
    else if(s.get_name()=="All coperate"){
      cout<<"All coperate"<<endl;
      cin>>choice;
      p.set_choice (choice);
        if(p.get_choice()==1){
          s.set_score(2);
          p.set_score(2);
          s.set_coins(2);
          p.set_coins(2);
        }
        else{
          s.set_score(-1);
          p.set_score(3);
          s.set_coins(-1);
          p.set_coins(3);
        }
    }
    else if(s.get_name()=="All cheat"){
      cout<<"All cheat"<<endl;
      cin>>choice;
      p.set_choice(choice);
      if (p.get_choice()==1) {
        s.set_score(3);
        p.set_score(-1);
        s.set_coins(3);
        p.set_coins(-1);
      }
      else{
        s.set_score(0);
        p.set_score(0);
        s.set_coins(0);
        p.set_coins(0);
      }
    }
    else if(s.get_name()=="Grudger"){
      cout<<"Grudger"<<endl;
      cin>>choice;
      p.set_choice(choice);
      if (s.get_choice()==1){
        if(p.get_choice()==1){
          s.set_score(2);
          p.set_score(2);
          s.set_coins(2);
          p.set_coins(2);
        }
        else{
          s.set_score(-1);
          p.set_score(3);
          s.set_coins(-1);
          p.set_coins(3);
        }
      }
      else{
        if (p.get_choice()==1) {
          s.set_score(3);
          p.set_score(-1);
          s.set_coins(3);
          p.set_coins(-1);
        }
        else{
          s.set_score(0);
          p.set_score(0);
          s.set_coins(0);
          p.set_coins(0);
        }
      }
      if (p.get_choice()==0){
        s.set_choice(0);
      }
    }
    else if(s.get_name()=="Detective"){
      cout<<"Detective"<<endl;
      bool *det;
      cin>>choice;
      p.set_choice (choice);
      bool asd[5]={1,0,1,1,choice};
      *det=&asd;
      s.set_choice(det[i]);
      if (s.get_choice()==1){
        if(p.get_choice()==1){
          s.set_score(2);
          p.set_score(2);
          s.set_coins(2);
          p.set_coins(2);
        }
        else{
          s.set_score(-1);
          p.set_score(3);
          s.set_coins(-1);
          p.set_coins(3);
        }
      }
      else{
        if (p.get_choice()==1) {
          s.set_score(3);
          p.set_score(-1);
          s.set_coins(3);
          p.set_coins(-1);
        }
        else{
          s.set_score(0);
          p.set_score(0);
          s.set_coins(0);
          p.set_coins(0);
        }
      }
    }
      cout<<"tu puntaje es:"<<p.get_score()<<endl;
      cout<<"tus monedas son:"<<p.get_coins()<<endl;
      cout<<"las monedas del "<<s.get_name()<<" son:"<<s.get_coins()<<endl;
  }
  p.resetcoins();
  s.resetcoins();
}
int main() {
  character s1("Copycat");
  character s2("All coperate");
  character s3("All cheat");
  character s4("Grudger");
  character s5("Detective");
  character jug("juga");
  behaviour(s1,jug);
  behaviour(s2,jug);
  behaviour(s3,jug);
  behaviour(s4,jug);
  behaviour(s5,jug);
  return 0;
}
