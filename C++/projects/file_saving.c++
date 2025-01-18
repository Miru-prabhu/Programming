//include input output stream

#include <iostream>
//include file stream
#include <fstream>

//innlude string
#include <string>

int main()
    {
        //getting input about file name 
        std::string File_Name;
        std::cout << "Enter the file  name : ";
        std::cin >> File_Name;

        //creating and writting files

        std::ofstream File(File_Name);

        std::string Data;
        std::cin.ignore();
                    std::cout << "Type ur txt and enter exit if u want to leave it \n";

        while(true)
        {       
            std::getline(std::cin , Data);
            if(Data == "exit" || Data == "Exit" || Data == "EXIT")
            {
                break;
            }
            
            File << Data << std::endl;
        }

        File.close();

        std::cout << "The comtent of the file is saved in "<<File_Name<<std::endl;


        if(!File){
            std::cerr<<"ERROR OCCURED ! ";
            return 1;
        }
    return 0;
    }