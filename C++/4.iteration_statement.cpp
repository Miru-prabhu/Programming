#include <iostream>
using namespace std;

int main(){
    //the reapeted execution of a body of the loop is known as iteration
    //entry control loop

        /*
        for(initialization; test exxptression; udate expression){
        body of the loop;
        statements;
        }
        */
    for(int i = 0; i <10 ; i++){
        cout << "Entry control loop \n";
    }
    int j = 3;
    while( j<12){
        cout << "another entry control loop\n";
        j++;
    }

    //exit control loop

    /*
    do{
    body of the loop
    }
    while(condition)
    */

   do{
    cout << "Exit control loop\n";
    j++;
   }

   while (j<5);

   return 0;
}