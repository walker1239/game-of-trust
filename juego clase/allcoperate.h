#ifndef ALLCOPERATE_H
#define ALLCOPERATE_H

#include "character.h"

class allcoperate: public character
{
    public:
        allcoperate(string _name);
        ~allcoperate();
        void newchoice(bool _choice);
        bool get_previouschoice();
};

#endif
