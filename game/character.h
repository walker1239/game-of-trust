#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
#include <iostream>

using namespace std;
class character{
  private:
    string name;
    int score;
    int coins;
    //allegro_image
    bool choice;
  public:
    character(string _name="none");
    ~character();
    int get_score();
    int get_coins();
    void resetcoins();
    bool get_choice();
    string get_name();
    void set_choice(bool _choice);
    void set_coins(int c);
    void set_score(int c);
    friend class behaviour;

};
#endif
