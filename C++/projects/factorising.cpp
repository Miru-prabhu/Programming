//include input output stream
#include <iostream>

//creating structure

struct Data
{
    int num;
};
int factorize(int x)
{
    if(x>1)
    return x*factorize(x-1);
}

int main()
{
    Data data;
    std::cout << "Enter any number to factorize : ";
    std::cin >> data.num;
    std::cout << "\n The factorial of "<<data.num<<"! is : "<<factorize(data.num);
}

