//
// Created by Kai on 1/16/2023.
//
#include <cmath>
#include "../include/trial_division.h"

bool primality::trial_division(int n) {
  if (n % 2 == 0) return false;
  for (int i = 3; i < sqrt(n); i += 2) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
bool primality::miller_rabin(int) {
  return false;
}
