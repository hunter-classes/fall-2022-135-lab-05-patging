#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// isDivisibleBy(n,d) tests
TEST_CASE("Tests for isDivisibleBy(n,d)") {
	// cases that should be true

    CHECK( isDivisibleBy(2, 2));
    CHECK( isDivisibleBy(10,5));
    CHECK( isDivisibleBy(0, 10));
    CHECK( isDivisibleBy(10000, 200));
    CHECK( isDivisibleBy(-100, -1));

    // Should be false
    CHECK(!isDivisibleBy(1,2) );
    CHECK(!isDivisibleBy(10, 3));
    CHECK(!isDivisibleBy(100, 30));
    CHECK(!isDivisibleBy(10000000, 3));
}

// isPrime(n) tests
TEST_CASE("Tests for isPrime(n)") {
	// cases that should be prime

	CHECK(isPrime(2)); // 2 is prime
	CHECK(isPrime(13));
	CHECK(isPrime(17));
	CHECK(isPrime(198223)); // according to google this is prime
	CHECK(isPrime(11));

	// cases that should be not prime
	CHECK(!isPrime(-10)); // -10 is not prime
	CHECK(!isPrime(1)); // 1 is apparently prime
	CHECK(!isPrime(4)); 
	CHECK(!isPrime(120));
	CHECK(!isPrime(3033)); // divisible by 3
	CHECK(!isPrime(10110000)); // also divisible by 3

}

// nextPrime(n) tests

TEST_CASE("Tests for nextPrime(n)") {

	CHECK(nextPrime(-1000) == 2); // the smallest prime number is 2
	CHECK(nextPrime(1) == 2); // 2 should be the next prime number
	CHECK(nextPrime(5) == 7);
	CHECK(nextPrime(11) == 13);
	CHECK(nextPrime(99) == 101);
}

// countPrimes(a, b) tests

TEST_CASE("Tests for countPrimes(a,b)") {

	CHECK(countPrimes(2,2) == 1); // 2 is prime
	CHECK(countPrimes(4,4) == 0); // no primes

	CHECK(countPrimes(2,4) == 2); // 2, 3
	CHECK(countPrimes(2,5) == 3); // 2, 3, 5

	CHECK(countPrimes(-1000, 2) == 1); // should only be 2	

	CHECK(countPrimes(1, 47) == 15); // 47 is the fifteenth prime number

	CHECK(countPrimes(1,1000) == 168); // 168 primes from 1 to 1000 inclusive

	// examples with 0 primes

	CHECK(countPrimes(32,36) == 0);
	CHECK(countPrimes(54,56) == 0);
	CHECK(countPrimes(14,16) == 0);

}

// isTwinPrime(n) tests

TEST_CASE("Tests for isTwinPrime(n)") {

	// cases that are twin primes

	CHECK(isTwinPrime(7)); // 1, 3 are prime
	CHECK(isTwinPrime(13)); // 11, 13, 15 are prime
	CHECK(isTwinPrime(17)); // 17, 19 are prime
	CHECK(isTwinPrime(101)); // 101 and 103
	CHECK(isTwinPrime(22619)); // very large twin prime

	// cases that aren't twin prime

	// nums where argument isnt prime
	CHECK(!isTwinPrime(6)); 
	CHECK(!isTwinPrime(10));
	CHECK(!isTwinPrime(100));
	CHECK(!isTwinPrime(1002));
	CHECK(!isTwinPrime(102030));

	// nums that are prime but not a twin
	CHECK(!isTwinPrime(2));
	CHECK(!isTwinPrime(23));
	CHECK(!isTwinPrime(53));
	CHECK(!isTwinPrime(113));
	CHECK(!isTwinPrime(235));
	CHECK(!isTwinPrime(647)); // prime but not twin prime
	CHECK(!isTwinPrime(8161)); // really big isolated prime
}

// nextTwinPrime(n) tests

TEST_CASE("Tests for nextTwinPrime(n)") {

	// basic examples
	CHECK(nextTwinPrime(-10000) == 3);
	CHECK(nextTwinPrime(3) == 5); 
	CHECK(nextTwinPrime(5) == 7);
	CHECK(nextTwinPrime(11) == 13);

	// larger examples I located
	// https://primes.utm.edu/lists/small/100ktwins.txt
	CHECK(nextTwinPrime(105) == 107);
	CHECK(nextTwinPrime(1780) == 1787);
	CHECK(nextTwinPrime(101900) == 101999);
}

// largestTwinPrime(a,b) tests

TEST_CASE("Tests for largestTwinPrime(a,b)") {

	//basic examples

	CHECK(largestTwinPrime(0, 3) == 3 );
	CHECK(largestTwinPrime(3, 13) == 13);
	CHECK(largestTwinPrime(4, 29) == 29);
	CHECK(largestTwinPrime(10, 71) == 71);

	// odd examples
	CHECK(largestTwinPrime(-1000, 4) == 3);
	CHECK(largestTwinPrime(-1000, 600) == 599);

	// larger scale examples
	CHECK(largestTwinPrime(0, 1000) == 883);
	CHECK(largestTwinPrime(10,3000) == 2999);

	// examples where there are no results
	CHECK(largestTwinPrime(14,16) == -1);
	CHECK(largestTwinPrime(65,70) == -1);
	CHECK(largestTwinPrime(700,800) == -1);

}


