#include <iostream>
#include <stdlib.h>

int main() 
{
    const int a = 3;
    const int b = 5;
    const int* ptr = &a;

    printf("%d\n", *ptr);

    ptr = &b;
    printf("%d\n", *ptr);

    return 0;
}
