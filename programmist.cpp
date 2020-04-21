#include "programmist.h"

using namespace std;

programmist::programmist(string name) : sotrudnik() //конструктор с параметрами
{
    sname=name;
}

programmist::programmist()   //конструктор без параметров
{
    sname = "da,zakazival";
}

programmist::programmist(const programmist &obj) //конструктор копирования
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

