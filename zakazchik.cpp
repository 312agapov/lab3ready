#include "zakazchik.h"

using namespace std;

zakazchik::zakazchik(string name) : fizlico()//конструктор с параметрами
{
    sname=name;
}

zakazchik::zakazchik()//конструктор без параметров
{
    sname = "zakazivali piccy?";
}

zakazchik::zakazchik(const zakazchik &obj)//конструктор копирования
{
    sname = obj.sname;
}

void zakazchik::SetName(string name)
{
    sname = name;
}

string zakazchik::GetName()const
{
     return sname;
}

void zakazchik::print()const
{
    cout << sname;
}
