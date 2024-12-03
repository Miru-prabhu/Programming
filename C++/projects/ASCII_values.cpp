//include input output stream
#include <iostream>
//all ascii values
int main()
{
    char c[200];

    std::cout << "\n\t ASCII VALUES \n\n";
    for(int i=0; i<=200;i++ )
    {
        c[100] = i;
        std::cout << "\t" << i << " :  " << c[100] <<std::endl;
    }

    return 0;
}