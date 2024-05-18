/* factorial.h */

#ifndef TOD_FACTORIAL_H
#define TOD_FACTORIAL_H

constexpr int factorial(int n) {
    if (n == 1 || n == 0) return 1;
    else if (n < 0) return 0; // UNDEFINED
    else return n * factorial(n - 1);
}

// TODO -- Handle n! where n > 12

#endif // TOD_FACTORIAL_H
