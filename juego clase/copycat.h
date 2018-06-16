#ifndef COPYCAT_H
#define COPYCAT_H

#include "character.h"

class copycat: public character{
    private:
        bool previouschoice;
    public:
        copycat(string _name);
        ~copycat();
        void newchoice(bool _choice);
        bool get_previouschoice();
};

#endif
