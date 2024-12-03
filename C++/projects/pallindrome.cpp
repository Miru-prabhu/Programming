#include <iostream>
using namespace std;

int main()
{
    int n,num,digit,rev = 0;

    cout << "Enter any number to check wether it is pallindrome or not.";
    cout << "\nEnter the number : ";
    cin >> num;

    n = num;

    while(num)
    {
        digit = num%10;
        rev = (rev*10) + digit;
        num =  num/10;
    }

    cout << "The reverse number : " << rev;

    if(n == rev)
    {
        cout << "\nThe number is pallindrome.";
    }

    else
    {
        cout << "\nThe number is not pallindrome.";
    }

    return 0;
}