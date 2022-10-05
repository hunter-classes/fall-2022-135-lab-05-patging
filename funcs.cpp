#include <iostream>
#include "funcs.h"

// add functions here

bool isDivisibleBy(int n, int d) {
	// checks if n is divisble by d
	return n % d == 0;
}

bool isPrime(int n) {
	// will return if n is prime

	if (n <= 1) {
		return false;
	} // 1 and less is not prime

	// 

	for(int i = 2; i<n;i++) {
		if (isDivisibleBy(n,i)) {
			return false;
		}
	}
	// if n is not divisible from 2 to n-1, it's prime
	return true;
}

int nextPrime(int n) {
	// return the next prime number greater than n

	int to_add = 1; 
	// adds to n to find closest num

	do {
		if (isPrime(n + to_add)) {
			return n + to_add;
		}
		to_add ++;

	} while(true);

}

int countPrimes(int a, int b) {
	// counts the number of prime numbers in range [a, b] inclusive

	int count = 0;

	for(int i = a; i <= b; i++) {

		if(isPrime(i)) {
			count++;
		}
	}

	return count;
}

bool isTwinPrime(int n) {
	// will return if n and either n-2 or n+2 (or both) is also prime

	return isPrime(n) && (isPrime(n-2) || isPrime(n+2));
}

int nextTwinPrime(int n) {
	// find's the smallest twin prime number greater than n. See isTwinPrime(n) to see criterium for twinPrime

	int current_num = nextPrime(n);

	do {
		if (isTwinPrime(current_num)) {
			return current_num;
		}
		current_num = nextPrime(current_num);

	} while(true);

}


int largestTwinPrime(int a, int b) {
	// returns the largest twin prime num in range [a,b] inclusive

	int value = -1;

	for(int i = a; i<=b;i++) {

		if(! isTwinPrime(i)) {
			continue;
		} // we don't use nextPrime() b/c same speed and it's easier for me to code this way

		if (i > value) {
			value = i;
		}

	}

	return value;
}

