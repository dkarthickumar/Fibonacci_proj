/*
 * Copyright Information
 */

#include "fibonacci.h"

/**
 * Recursive function to calculate fibonacci series for given count value 
 */
static void fibonacci_calc (int count, mpz_t result, mpz_t prev)
{
    if (count-- < 0)
        return;
    mpz_add (result, result, prev);
    mpz_swap (result, prev);
    fibonacci_calc (count, result, prev);
}

/** Fibonacci lib function, initializes and calls the recursive function 
 *  @params count a count value to specify number of itteration
 *  @params result reference to store the fibonacci value of count
 *  @return Status of the function will be returned 
 */
int fib (int count, mpz_t result)
{
    if (count < MIN_COUNT || count > MAX_COUNT)
    {
        return -INVALID_COUNT;
    }
    mpz_t prev;
    mpz_inits (result, prev);
    mpz_set_ui (result, 1);
    fibonacci_calc (count, result, prev);
    return SUCESS;
}

