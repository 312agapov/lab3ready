#ifndef sotrudnik_H_INCLUDED
#define sotrudnik_H_INCLUDED

#include "fizlico.h"
#include <string>

using namespace std;

class sotrudnik : public fizlico
{
protected:

public:
    virtual void print ()const = 0;
};

#endif
