#include "programmist.h"

using namespace std;

programmist::programmist(string name) : sotrudnik()
{
    sname=name;
}

programmist::programmist()
{
    sname = "da,zakazival";
}

programmist::programmist(const programmist &obj)
{
    sname = obj.sname;
}

void programmist::SetName(string name)
{
    sname = name;
}

string programmist::GetName()const
{
     return sname;
}

void programmist::print()const
{
    cout << sname;
}

