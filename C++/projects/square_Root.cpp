#include <iostream>
#include <math.h>

int main (){
    //sqrt is used to find the square root of the number
    //finding the x falue using forula mthod
    // x = -b+or-rootb^2-4ac/2a

    int a,b,c,sqr,add,sub,div,result1,result2;
    std::cout << "Enter the coeffecient and sign of the equation" << std :: endl;
    std :: cout << "a : ";
        std :: cin >> a ;
           std :: cout << " b :";
    std :: cin >>b;
       std :: cout << " c :";
       std :: cin >> c;


       sqr = sqrt(b*b-4*a*c);
       add = -b+sqr;
       sub = -b-sqr;
       div =  2*a;
       result1 = add/div;
       result2 = sub/div;

       std :: cout << "\nX = " << result1 <<  "or" << result2;
 
}