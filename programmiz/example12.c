// example 12: relational operators
#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10;
    // a == b 5 == 5 yes
    printf("%d == %d is %d \n", a, b, a == b);

    // a == c 5 == 10 no
    printf("%d == %d is %d \n", a, c, a == c);

    // a > b 5 > 5 no
    printf("%d > %d is %d \n", a, b, a > b);

    // a > c 5 > 10 no
    printf("%d > %d is %d \n", a, c, a > c);

    // a < b 5 < 5 no
    printf("%d < %d is %d \n", a, b, a < b);

    // a < c 5 < 10 yes
    printf("%d < %d is %d \n", a, c, a < c);

    // a != b 5 != 5 no
    printf("%d != %d is %d \n", a, b, a != b);

    // a != c 5 != 10 yes
    printf("%d != %d is %d \n", a, c, a != c);

    // a >= b 5 >= 5 yes
    printf("%d >= %d is %d \n", a, b, a >= b);

    // a >= c 5 >= 10 no
    printf("%d >= %d is %d \n", a, c, a >= c);

    // a <= b 5 <= 5 yes
    printf("%d <= %d is %d \n", a, b, a <= b);

    // a <= c 5 <= 10 yes
    printf("%d <= %d is %d \n", a, c, a <= c);

    return 0;
}
