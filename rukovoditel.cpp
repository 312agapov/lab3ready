#include "rukovoditel.h"

using namespace std;

rukovoditel::rukovoditel(int num) : sotrudnik() //конструктор с параметрами
{
    if (!SetNum(num))           //проверка на правильность введенных данных
    {
        snum=0;
    }
}

rukovoditel::rukovoditel() //конструктор без параметров
{
    snum = 36;
}

rukovoditel::rukovoditel(const rukovoditel &obj)//конструктор копирования
{
    snum = obj.snum;
}

bool rukovoditel::SetNum(int num)//проверка на правильность введенных данных в сеттере
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

