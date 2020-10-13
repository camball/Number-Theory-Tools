//
//  funcsForMain.cpp
//  Number Theory Tools
//
//  Created by Cameron Ball on 6/24/20.
//  Copyright © 2020 Cameron Ball. All rights reserved.
//

#include "funcsForMain.hpp"
#include <iostream>

void showMenu()
{
    std::cout << "Check if a number is prime : P\n";
    std::cout << "GCD Calculator : G\n";
    std::cout << "Calculate Divisors : D\n";
    std::cout << "Calculate Prime Factors : F\n";
    std::cout << "Compute Euler Totient Function : T\n";
    std::cout << "Show this menu : M\n";
    std::cout << "Exit Programme : Q\n";
    std::cout << '\n';
}

void primeChecker()
{
    int num = 0;
    
    std::cout << "Enter a number to be prime checked (-1 to exit):\n";
    
    while (num > -1)
    {
        std::cout << " > ";
        std::cin >> num; // get user input
        
        if (num < 0) {
            std::cout << '\n';
            return;
        }
        
        if (isPrime(num) == true)
            std::cout << num << " IS prime\n\n";
        else std::cout << num << " is NOT prime\n\n";
    }
}

void divisors()
{
    int n = 1;
    std::cout << "Enter a number, n, to find all numbers that divide n evenly: (0 to stop):\n";
    while (n != 0)
    {
        std::cout << "Enter n: \n > ";
        std::cin >> n;
        isDivisible(n);
        std::cout << "\n\n";
    }
}

void computeGCD()
{
    int a, b;
    
    std::cout << "Enter two numbers to find the gcd (0,0 to stop):\n";
    
    while(true)
    {
        std::cout << "Enter a: \n > ";
        std::cin >> a;
        std::cout << "Enter b: \n > ";
        std::cin >> b;
        if (a == 0 && b == 0) {
            std::cout << '\n';
            return;
        }
        std::cout << "GCD(" << a << ", " << b << ") = " << gcd(a, b) << "\n\n";
    }
}

void intFactorise()
{
    int n = 1;
    std::cout << "Enter a number, n, to find its prime factors: (0 to stop):\n";
    while (n != 0)
    {
        std::cout << "Enter n: \n > ";
        std::cin >> n;
        primeFactors(n);
        std::cout << "\n\n";
    }
}

void euTotient()
{
    int n = 1;
    
    std::cout << "Enter a number to find phi(n) (0 to stop):\n";
    
    while (n != 0)
    {
        std::cout << " > ";
        std::cin >> n; // get user input
        
        std::cout << "phi(" << n << ") = " << totient(n) << "\n\n";
    }
}
