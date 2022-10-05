/*
Author: Patrick Ging
Course: CSCI-135
Instructor: Professor Zamansky

main.cpp 
*/

#include <iostream>
#include "funcs.h"


int main() {

  std::cout << "In main\n";

  // isDivisibleBy()
  std::cout << "is 2 divisible by 2 " << std::boolalpha <<isDivisibleBy(2,2) << std::endl;
  std::cout << "is 2 divisible by 3 " << std::boolalpha << isDivisibleBy(2,3) << std::endl;
  std::cout << "is 4 divisible by 2 " << std::boolalpha <<isDivisibleBy(4,2) << std::endl;

  // isPrime()

  std::cout << "is -1 Prime " << std::boolalpha << isPrime(-1) << std::endl;
  std::cout << "is 3 Prime " << std::boolalpha << isPrime(3) << std::endl;
  std::cout << "is 10 Prime " << std::boolalpha << isPrime(10) << std::endl;
  std::cout << "is 13 Prime " << std::boolalpha << isPrime(13) << std::endl;

  // nextPrime(N)

  std::cout << "the next prime after 1 is " << nextPrime(1) << std::endl;
  std::cout << "the next prime after 11 is " << nextPrime(11) << std::endl;
  std::cout << "the next prime after 21 is " << nextPrime(21) << std::endl;

  //countPrimes(a,b)

  std::cout << "the amount of primes from 10 to 15 is " << countPrimes(10,15) << std::endl;
  std::cout << "the amount of primes from 5 to 7 is " << countPrimes(5,7) << std::endl;
  std::cout << "the amount of primes from 20 to 31 is " << countPrimes(20,31) << std::endl;

  // isTwinPrimes(n)

  std::cout << "is 5 Twin Prime " << std::boolalpha << isTwinPrime(5) << std::endl;
  std::cout << "is 10 Twin Prime " << std::boolalpha << isTwinPrime(10) << std::endl;
  std::cout << "is 21 Twin Prime " << std::boolalpha << isTwinPrime(21) << std::endl;

  // nextTwinPrime(n)

  std::cout << "The next twin prime after 1 is " << nextTwinPrime(1) << std::endl;
  std::cout << "The next twin prime after 10 is " << nextTwinPrime(10) << std::endl;
  std::cout << "The next twin prime after 30 is " << nextTwinPrime(30) << std::endl;

  // largestTwinPrime(a,b)

  std::cout << "The largest twin prime from 0 to 7 " << largestTwinPrime(0,7) << std::endl;
  std::cout << "The largest twin prime from 10 to 20 " << largestTwinPrime(10,20) << std::endl;
  std::cout << "The largest twin prime from 14 to 16 " << largestTwinPrime(14,16) << std::endl;


  return 0;
}
