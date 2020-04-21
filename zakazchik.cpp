#include "zakazchik.h"

using namespace std;

zakazchik::zakazchik(string name) : fizlico()
{
    sname=name;
}

zakazchik::zakazchik()
{
    sname = "zakazivali piccy?";
}

zakazchik::zakazchik(const zakazchik &obj)
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
