// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value == 0 || value == 1) {
    return false;
  }
  if (value == 2) {
    return true;
  }
  for (int i = 2; i * i <= value; i++) {
    if (value % i == 0) {
      return false;
    } else {
      continue;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t count = 0;
  for (int i = 0; ; i++) {
    if (checkPrime(i) == true) {
      count += 1;
    }
    if (count == n) {
      return i;
    } else {
      continue;
    }
  }
  return 0;
}

uint64_t nextPrime(uint64_t value) {
  while (true) {
    if (checkPrime(++value) == true) {
      return value;
    }
  }
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (uint64_t i = 0; i < hbound; i++) {
    if (checkPrime(i) == true) {
      sum += i;
      i++;
    }
  }
  return sum;
}
