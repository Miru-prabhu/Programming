//include input output stream
#include <iostream>

//array is classified into three types
//one dimensional array
//two dimensional array
//multi dimensional array

struct Array
{
    //two dimensional array
    int v1[2][2],v2[2][2],v3[2][2];
};

int main()
{
    //structure variable

    Array array;

    std::cout << "\tDIFFERENCE BETWEEN TWO ARRAYS\n\n";

     std::cout << "Enter the values of first matrices :\n";

    for(int i = 0; i<2; ++i)
    {
        for(int j =0; j<2; j++)
        {
            std::cin >> array.v1[i][j];
        }
    }

    std::cout << "Enter the values of second  matrices :\n";
    for(int i = 0; i<2; ++i)
    {
        for(int j =0; j<2; j++)
        {
            std::cin >> array.v2[i][j];
        }
    }
    std::cout << "Answer = \t\n";
    for(int i = 0; i<2; ++i)
    {
        for(int j =0; j<2; j++)
        {
            array.v3[i][j] = array.v1[i][j] - array.v2[i][j];

            std::cout <<array.v3[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}