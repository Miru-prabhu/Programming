//include input output stream
#include <iostream>
//include string manipulation
#include <string.h>

int main()
{
    char course[22];
    char i[3];
    int check;
    
    //get value of string from user
    std::cout << "Enter any name : ";
    std::cin >> course[22];
    //strlen function takes the null  terminated string as its argument and returns its lenght
    std::cout<<"\nthe length of the string is : " << strlen(course)<<std::endl;
    
    //isupper is check  whether a string is in uppercaseol
    //it returns the boolean value
    check = isupper(course[22]);

    if(check == 1)
    {
            std::cout << " the given string is in uppercase \n";
    }

    else
    {
            std::cout<<"the string is note in uppercase.. just changing into uppercase.\n";

             //toupper convert  the lowecase into uppercase
             std::cout  << strupr(course);
            std::cout << std::endl << i[3];
    }

    return 0;
}