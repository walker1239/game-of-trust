#ifndef GRUDGER_H
#define GRUDGER_H

#include "character.h"

class grudger: public character{
    private:
        bool previouschoice;
    public:
        void newchoice(bool _choice);
        grudger(string _name);
        ~grudger();
        bool get_previouschoice();
};

#endif
