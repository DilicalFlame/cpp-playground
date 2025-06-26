// Classification of families done on basis of size

#include <stdio.h>  // for printf function
#include <limits.h> // for char and int range constants
#include <float.h>  // for float and double range constants

int main()
{
    // char family
    printf("\nRange of char (%ld): %d to %d\n",
    sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("Range of signed char (%ld): %d to %d\n",
    sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
    printf("Range of unsigned char (%ld): 0 to %d\n",
    sizeof(unsigned char), UCHAR_MAX);

    // short int family
    printf("\nRange of short int (%ld): %d to %d\n",
    sizeof(short int), SHRT_MIN, SHRT_MAX);
    printf("Range of signed short int (%ld): %d to %d\n",
    sizeof(signed short int), SHRT_MIN, SHRT_MAX);
    printf("Range of unsigned short int (%ld): 0 to %u\n",
    sizeof(unsigned short int), USHRT_MAX);

    // int family
    printf("\nRange of int (%ld): %d to %d\n",
    sizeof(int), INT_MIN, INT_MAX);
    printf("Range of signed int (%ld): %d to %d\n",
    sizeof(signed int), INT_MIN, INT_MAX);
    printf("Range of unsigned int (%ld): 0 to %u\n",
    sizeof(unsigned int), UINT_MAX);

    // long int family
    printf("\nRange of long int (%ld): %ld to %ld\n",
    sizeof(long int), LONG_MIN, LONG_MAX);
    printf("Range of signed long int (%ld): %ld to %ld\n",
    sizeof(signed long int), LONG_MIN, LONG_MAX);
    printf("Range of unsigned long int (%ld): 0 to %lu\n",
    sizeof(unsigned long int), ULONG_MAX);

    // long long int family
    printf("\nRange of long long int (%ld): %lld to %lld\n",
    sizeof(long long int), LLONG_MIN, LLONG_MAX);
    printf("Range of signed long long int (%ld): %lld to %lld\n",
    sizeof(signed long long int), LLONG_MIN, LLONG_MAX);
    printf("Range of unsigned long long int (%ld): 0 to %llu\n",
    sizeof(unsigned long long int), ULLONG_MAX);

    // float family
    printf("\nRange of float (%ld): %e to %e\n",
    sizeof(float), FLT_MIN, FLT_MAX);
    printf("Range of double (%ld): %e to %e\n",
    sizeof(double), DBL_MIN, DBL_MAX);
    printf("Range of long double (%ld): %Le to %Le\n",
    sizeof(long double), LDBL_MIN, LDBL_MAX);

    return 0;
}
