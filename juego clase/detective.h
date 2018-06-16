#ifndef DETECTIVE_H
#define DETECTIVE_H

#include "character.h"

class detective: public character{
    private:
        bool previouschoice;
    public:
        void newchoice(bool _choice, int k);
        detective(string _name);
        ~detective();
        bool get_previouschoice();

};

#endif
