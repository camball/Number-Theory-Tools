//
//  main.cpp
//  Number Theory Tools
//
//  Created by Cameron Ball on 6/24/20.
//  Copyright © 2020 Cameron Ball. All rights reserved.
//

#include <iostream>
#include "funcsForMain.hpp"

int main() {
    
    char input;
    
    do
    {
        std::cout << "Which programme would you like to run? ['M' for menu]\n";
        std::cout << " > ";
        std::cin >> input;
        std::cout << '\n';
        
        if (isalpha(input) == true)
        {
            switch (tolower(input)) {
                case 'p':
                    primeChecker();
                    break;
                case 'g':
                    computeGCD();
                    break;
                case 'f':
                    intFactorise();
                    break;
                case 'd':
                    divisors();
                    break;
                case 't':
                    euTotient();
                    break;
                case 'm':
                    showMenu();
                    break;
                case 'q':
                    std::cout << "Goodbye!" << std::endl;
                    break;
               default:
                   std::cout << "Invalid Input. The menu can be displayed with [M].\n\n";
                   break;
            }
        } else {
            std::cout << "Invalid Input. The menu can be displayed with [M].\n\n";
            std::cin.ignore(10);
        }
    } while (input != 'q');
    
    return 0;
}
