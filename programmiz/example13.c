// example 13: logical operators

#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10, result;

    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);

    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);

    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);

    result = !(a != b);
    printf("!(a == b) is %d \n", result);

    result = !(a == b);
    printf("!(a == b) is %d \n", result);
    return 0;
}

/*
- (a == b) && (c > 5) evaluates to 1 because both operands
(a == b) and (c > b) is 1 (true).
- (a == b) || (c < b) evaluates to 1 because (a = b) is 1 (true).
- (a != b) || (c < b) evaluates to 0 because both operand (a != b)
and (c < b) are 0 (false).
- !(a != b) evaluates to 1 because operand (a != b) is 0 (false).
Hence, !(a != b) is 1 (true).
- !(a == b) evaluates to 0 because (a == b) is 1 (true).
Hence, !(a == b) is 0 (false).
*/
