#ifndef ALLCHEAT_H
#define ALLCHEAT_H

#include "character.h"

class allcheat: public character{

    public:
        allcheat(string _name);
        ~allcheat();
        void newchoice(bool _choice);
        bool get_previouschoice();
};

#endif
