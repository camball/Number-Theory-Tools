//
//  funcsForMain.cpp
//  Number Theory Tools
//
//  Created by Cameron Ball on 6/24/20.
//  Refactored by Cameron Ball on 9/13/21.
//  Copyright © 2020 Cameron Ball. All rights reserved.
//

#include "funcsForMain.hpp"
#include <iostream>

using std::cout;

void showMenu() {
    cout << "Check if a number is prime : P\n";
    cout << "GCD Calculator : G\n";
    cout << "Calculate Divisors : D\n";
    cout << "Calculate Prime Factors : F\n";
    cout << "Compute Euler Totient Function : T\n";
    cout << "Show this menu : M\n";
    cout << "Exit Programme : Q\n";
    cout << '\n';
}

void primeChecker() {
    int num = 0;
    
    cout << "Enter a number to be prime checked (-1 to exit):\n";
    
    while (num > -1) {
        cout << " > ";
        std::cin >> num; // get user input
        
        if (num < 0) {
            cout << '\n';
            return;
        }
   
/* refactored below */
//      if (isPrime(num) == true)
//          cout << num << " IS prime\n\n";
//      else cout << num << " is NOT prime\n\n";
        
        cout << num << (isPrime(num) ? " IS prime\n\n" : " is NOT prime\n\n");
    }
}

void divisors() {
    int n = 1;
    
    cout << "Enter a number, n, to find all numbers that divide n evenly: (0 to stop):\n";
    
    while (n != 0){
        cout << "Enter n: \n > ";
        std::cin >> n;
        isDivisible(n);
        cout << "\n\n";
    }
}

void computeGCD() {
    int a, b;
    
    cout << "Enter two numbers to find the gcd (0,0 to stop):\n";
    
    while (true) {
        cout << "Enter a: \n > ";
        std::cin >> a;
        cout << "Enter b: \n > ";
        std::cin >> b;
        if (a == 0 && b == 0) {
            cout << '\n';
            return;
        }
        cout << "GCD(" << a << ", " << b << ") = " << gcd(a, b) << "\n\n";
    }
}

void intFactorise() {
    int n = 1;
    
    cout << "Enter a number, n, to find its prime factors: (0 to stop):\n";
    
    while (n != 0) {
        cout << "Enter n: \n > ";
        std::cin >> n;
        primeFactors(n);
        cout << "\n\n";
    }
}

void euTotient() {
    int n = 1;
    
    cout << "Enter a number to find phi(n) (0 to stop):\n";
    
    while (n != 0) {
        cout << " > ";
        
        std::cin >> n; // get user input
        
        cout << "phi(" << n << ") = " << totient(n) << "\n\n";
        
        std::cin.clear();
    }
}
