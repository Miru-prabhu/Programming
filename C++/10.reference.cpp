#include <iostream>
void swap(int &x,int &y)
{
    int z = x;
    x=y;
    y=z;
}

int main()
{
    int fnum = 3;
    int snum = 26;

    swap(fnum,snum);
    std::cout << fnum << snum ;

    return 0;
    }