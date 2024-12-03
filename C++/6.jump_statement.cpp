#include <iostream>
using namespace std;

int main(){
   //jump statement
   //break
   //continue
   //goto

    for(int i=0;i<=10 ;i++) {
        
         cout << i;
         if(i+=2){
            break;
            system("cls");
         }
    }
cout << endl;
        for(int k=1;k<=10 ;k++) {
        
         cout << k;
         if(k+=2){
            continue;
         }
    }
cout << endl;

int l =1;
    jump:
    {
    if(l<10) {
        cout <<l;
        l+=2;
            goto jump;
    }
    }
   return 0;
}