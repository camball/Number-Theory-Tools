//
//  main.cpp
//  Number Theory Tools
//
//  Created by Cameron Ball on 6/24/20.
//  Refactored by Cameron Ball on 9/13/21.
//  Copyright © 2020 Cameron Ball. All rights reserved.
//

#include <iostream>
#include "funcsForMain.hpp"

using std::cout;

int main() {
    
    char input;
    
    do
    {
        cout << "Which programme would you like to run? ['M' for menu]\n";
        cout << " > ";
        std::cin.clear();
        input = '\0';
        std::cin >> input;
        cout << '\n';
        
        if (isalpha(input))
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
                    cout << "Goodbye!" << std::endl;
                    break;
               default:
                   cout << "Invalid Input. The menu can be displayed with [M].\n\n";
                   break;
            }
        } else {
            cout << "Invalid Input. The menu can be displayed with [M].\n\n";
            std::cin.ignore(10);
        }
    } while (input != 'q');
    
    return 0;
}
