/*
 * Copyright Information
 */

#include "fibonacci.h"

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
        gmp_printf(" result : %Zd , prev : %Zd count:%d\n",result, prev, count); 
    }
    return SUCESS;
}
#endif /* NOT RECURSIVE */
