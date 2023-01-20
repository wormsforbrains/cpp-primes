#include <iostream>
#include "../include/trial_division.h"

int main() {
  int n = 2357;

  const char *is_prime = primality::trial_division(n) ? " is prime" : " is not prime";

  std::cout << n << is_prime << std::endl;
  return 0;
}
