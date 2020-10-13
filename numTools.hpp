//
//  numTools.hpp
//  Number Theory Tools
//
//  Created by Cameron Ball on 6/24/20.
//  Copyright © 2020 Cameron Ball. All rights reserved.
//

#ifndef numTools_hpp
#define numTools_hpp

bool isPrime(int); // Checks if a number is prime
bool isCoprime(int, int); // Checks if two numbers are relatively prime
void isDivisible(int); // lists the numbers divisible by a number
void primeFactors(int); // write out prime factorisations
int gcd(int, int); // compute gcd() (using euclidean algorithm)
int totient(int); // compute Euler Totient Function, phi(n)

// determine zero divisors & units

#endif /* numTools_hpp */
