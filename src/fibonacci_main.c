/*
 * Copyright Information
 */

#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"

/**
 * Main function to calulate the fibonacci sequence
 */
void main (int argc, char *argv[])
{
    int ret, count;

    if (argc != MAX_ARG_COUNT)
    {
	printf("Error : Invalid number of arguments\n"
	       "Usage : fibonacci <count>\n");
	return;
    }
  
    count = atoi (argv[1]);

    mpz_t result;
    ret = fib (count, result);
    if (ret == -INVALID_COUNT)
    {
        gmp_printf("Error: count [%d] not acceptable\n", count);
    }
    else if (ret == SUCESS)
    {
    	gmp_printf("fibonacci of %d: %Zd\n", count, result);
    }
}
