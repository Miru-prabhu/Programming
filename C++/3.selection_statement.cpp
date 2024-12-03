#include <iostream>
using namespace std;

int main(){
    //if_else means selection statement
    //selection statement

    //finding the number wether it is odd or even
    int frac;
    int deviser = 2;
    float remainder;
    cout << "\nEnter any number to check weather it is odd or even : ";
    cin >> frac;

    remainder = frac% deviser;
    if (remainder == 0){
        cout << "\nit is a even number\n";
        }

    else {
        cout << "\nit is a odd number";
    }
 return 0;

}