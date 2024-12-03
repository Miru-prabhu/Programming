#include <iostream>
using namespace std;
/*In c++ data types is classified into three  types
 fundamental data types :
             integral type : int , char
            floting point : float double
            void
 user defind data types:
             structure , union ,class,enumiration
 derived data types:
            array,function,pointer,reference */
int main(){
    //fundamental data types
    //integral type

    int num = 3; // integer type only returns integer number
    cout << num << endl;
    //char data type
    //char data type is also ineger type it accepts return all ASCII values
    char chr;
    cout <<  "Enter any char : ";
    cin >> chr ;
    int ascii = chr;
    cout << "\nthe ASCII value of " << chr << " is : " << ascii << endl;

    //floting point 
    float deci   = 10.44;
    cout << deci << endl;

    //double 
    double length = 45.6765; //it occupies double the space
    cout << length;

    return 0;
}       
