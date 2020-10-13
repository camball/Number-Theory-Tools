//
//  numTools.cpp
//  Number Theory Tools
//
//  Created by Cameron Ball on 6/24/20.
//  Copyright © 2020 Cameron Ball. All rights reserved.
//

#include "numTools.hpp"
#include <iostream>

bool isPrime(int n)
{
    if (n <= 3)
        return n > 1;
    else if (n % 2 == 0 || n % 3 == 0)
        return false;
    
    for (int i = 5; (i * i) <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    
    return true;
    
    /*
     function from https://en.wikipedia.org/wiki/Primality_test

     function is_prime(n)
        if n ≤ 3 then
            return n > 1
        else if n mod 2 = 0 or n mod 3 = 0
            return false

        let i ← 5

        while i × i ≤ n do
            if n mod i = 0 or n mod (i + 2) = 0
                return false
            i ← i + 6

        return true
    */
}


bool isCoprime(int a, int b) { return gcd(a, b) == 1; }


void isDivisible(int n)
{
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            std::cout << i << '\t';
        }
    }
}


void primeFactors(int n) // algorithm by Cameron Ball, written on 6/30/2020. 
{
    int i = 0;
    while (i <= n) {
        if (isPrime(i) == 0 || n % i != 0)
            i++;
        if (isPrime(i) && n % i == 0) {
            std::cout << i << '\t';
            n /= i;
        }
    }
}


int gcd(int a, int b)
{
    int remainder;
    while (b != 0) {
        remainder = b;
        b = a % b;
        a = remainder;
    }
    return a;
    
    /*
     reference: https://en.wikipedia.org/wiki/Euclidean_algorithm#Implementations
     
     function gcd(a, b)
        while b ≠ 0
            t := b
            b := a mod b
            a := t
        return a
     */
}


int totient(int n)
{
    int count = 0;
    if (n == 1)
        return 1;
    else {
        for (int i = 1; i < n; i++) {
            if (isCoprime(n, i)) {
                count++;
            }
        }
    } return count;
    
    /*
     reference: translated from Python code on https://www.w3resource.com/python-exercises/basic/python-basic-1-exercise-120.php
     */
}
