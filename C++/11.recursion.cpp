//include input output stream
#include <iostream>

int factorise(int x)
{
    if(x>1)
    {
        return x*factorise(x-1);
       
    }

    else
    {
        return 1;
    }
}

int main()
{
    //recursion is the function calls itself repeatedly 

    int num;
    std::cout << "\n\n\t Factorising a number\n";
    std::cout << "Enter the number : ";
    std::cin >> num;
    std::cout << "\n Answer : " <<factorise(num);

     system("recursion.exe");
       
    return 0;
}