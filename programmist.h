#ifndef programmist_H_INCLUDED
#define programmist_H_INCLUDED

#include "sotrudnik.h"
#include <string>
#include <iostream>
using namespace std;

class programmist : public sotrudnik
{
protected:
     string sname;
public:
    programmist();
    programmist(string name);
    programmist(const programmist &obj);

    void SetName(string name);
    string GetName() const;

    void print()const;
};

#endif
