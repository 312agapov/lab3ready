#include "rukovoditel.h"

using namespace std;

rukovoditel::rukovoditel(int num) : sotrudnik()
{
    if (!SetNum(num))
    {
        snum=0;
    }
}

rukovoditel::rukovoditel()
{
    snum = 36;
}

rukovoditel::rukovoditel(const rukovoditel &obj)
{
    snum = obj.snum;
}

bool rukovoditel::SetNum(int num)
{   if (num<0)
    {
    return false;
    }
    else
    {
    snum = num;
    return true;
    }
}

int rukovoditel::GetNum()const
{
     return snum;
}

void rukovoditel::print()const
{
    cout << snum;
}

