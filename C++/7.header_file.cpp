//include input output properties
#include <iostream>
//include input output predefined funcions
#include <stdio.h>

struct sample {
char letter;
char wrd[57];
}charecter;
int main(){

        // for char
    std::cout << "Enter any letter : ";
    //gets a charecter from the user
    charecter.letter = getchar();
    //puts the charecter on display
    putchar(charecter.letter);

      // for string

      std:: cout << std :: endl << "Enter any string :";
      gets(charecter.wrd);
      puts(charecter.wrd);
      
        return (0);
}