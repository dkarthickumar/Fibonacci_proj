/*
 * Copyright Information
 */

#include "fibonacci.h"

/** Fibonacci lib function, initializes and itterates to find the 
 *  fibonacci sequence of count value  
 *  @params count a count value to specify number of itteration
 *  @params result reference to store the fibonacci value of count
 *  @return Status of the function will be returned 
 */
#ifndef RECURSIVE
int fib (int count, mpz_t result)
{
    if (count < MIN_COUNT || count > MAX_COUNT)
    {
        return -INVALID_COUNT;
    }
    mpz_t prev;
    mpz_inits (result, prev);
    mpz_set_ui (prev, 1);
    
    while (count--) 
    {	
	mpz_add(result, result, prev);
	mpz_swap( result, prev);
    }
    return SUCESS;
}
#endif /* NOT RECURSIVE */
