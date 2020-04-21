#ifndef rukovoditel_H_INCLUDED
#define rukovoditel_H_INCLUDED

#include "sotrudnik.h"
#include <string>
#include <iostream>
using namespace std;

class rukovoditel : public sotrudnik
{
protected:
    int snum;
public:
    rukovoditel();
    rukovoditel(int num);
    rukovoditel(const rukovoditel &obj);

    bool SetNum(int num);
    int GetNum() const;

    void print()const;
};

#endif

