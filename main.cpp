#include <iostream>
#include <cmath>
#include <random>
#include <ctime>
#include "windows.h"

int main() {
    srand(time(0));

    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);



    int height = 8;
    std::cout<<"enter tree height > 8";
    //std::cin>>height;

    height *= 2;

    system("cls");

    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY);

    /*
    std::string text = "╦ ╦╔═╗╔═╗╔═╗╦ ╦  ╔╗╔╔═╗╦ ╦  ╦ ╦╔═╗╔═╗╦═╗\n"
                       "╠═╣╠═╣╠═╝╠═╝╚╦╝  ║║║║╣ ║║║  ╚╦╝║╣ ╠═╣╠╦╝\n"
                       "╩ ╩╩ ╩╩  ╩   ╩   ╝╚╝╚═╝╚╩╝   ╩ ╚═╝╩ ╩╩╚═";
    */

    std::string text = "happy new year";

    std::cout<<"\n\n"<<text<<"\n\n";

    int red_point = -1;
    int blue_point = -1;

    SetConsoleTextAttribute(handle, FOREGROUND_GREEN);

    for(int i = 0; i < height; i+=2)
    {
        if ( i > 2 )
        {
            red_point = rand() % i;
            blue_point = rand() % i;
        }
        for(int m = 0; m <= round((height - i) / 2) + 11; ++m)
        {
            std::cout<<" ";
        }
        for(int j = 0; j <= i; ++j)
        {
            if(j == red_point && red_point != -1)
            {
                SetConsoleTextAttribute(handle, FOREGROUND_RED);
            }
            if(j == blue_point && blue_point != -1)
            {
                SetConsoleTextAttribute(handle, FOREGROUND_BLUE);
            }
            std::cout<<"*";
            SetConsoleTextAttribute(handle, FOREGROUND_GREEN);
        }
        std::cout<<"\n";
    }

    for(int i = 0; i <= round((height - 2) / 2) + 11; ++i)
    {
        std::cout<<" ";
    }
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY);
    std::cout<<"| |\n\n\n";

    system("pause");
    return 0;
}
