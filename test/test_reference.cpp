#include <iostream>
#include <stdlib.h>

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}


void swap1(int* ptr1, int* ptr2)
{
    int* tmp = ptr1;
    ptr1 = ptr2;
    ptr2 = tmp;
}

void swap2(int& ref1, int& ref2)
{
    int& tmp = ref1;
    ref1 = ref2;
    ref2 = tmp;
}

int main() 
{
    int a = 1;
    int b = 2;

    int& ref1 = a;
    int& ref2 = b;

    swap2(ref1, ref2);
    std::cout << "a = " << ref1 << std::endl <<"b = " << ref2 << std::endl;
}
