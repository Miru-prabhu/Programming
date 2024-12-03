//include input output functions
#include <iostream>
//include math functions
#include <cmath>
//include srand 
#include <time.h>
#include <stdlib.h>

//creating rock paper scissor game

//creating structure 

struct Datas
{
    int Rnum;
    int uscore =0;
    int cscore = 0;
    char user,computer;
};


int main()
{

//declaring structure variable
    Datas datas;
        std::cout << "\t\t ROCK PAPER SCISSOR GAME \n\n";
    std::cout<<" Enter your choice \n\n YOU : ";
    
       std::cin >> datas.user;
           //random  number generator 
    srand(time(NULL));
    datas.Rnum = rand()%100;
    if(datas.Rnum <= 30)
    {
        datas.computer = 'r';
        std::cout<<"COMPUTER : " << datas.computer;
    }

    else if(datas.Rnum > 30 && datas.Rnum <=60)
    {
        datas.computer = 'p';
        std::cout<<"COMPUTER : " << datas.computer;
    }

    else if(datas.Rnum > 60 && datas.Rnum <=100)
    {
        datas.computer = 's';
        std::cout<<"COMPUTER : " << datas.computer;
    }
         
    if(datas.user == datas.computer)
    {
        std::cout<< std:: endl<<"The match is draw ";
    }
     if(datas.user == 'r' && datas.computer == 'p'){
        std::cout << std:: endl << "You lost!";
        datas.cscore ++;
    }
     if(datas.user == 'p' && datas.computer == 's')
    {
        std::cout << "\n you lost!";
        datas.cscore ++;
    }

     if(datas.user == 's' && datas.computer == 'r')
    {
        std::cout << "\nyou lost!";
        datas.cscore ++;
    }

    else 
    {
        std::cout << "\nnice !\n" ;
        datas.uscore ++;
    }


 
    std::cout <<"\t Your score : " << datas.uscore << "\t Computer score : " << datas.cscore;

    system("rps.exe");

   return 0;
}