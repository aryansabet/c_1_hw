#include<stdio.h>
#include"memory.h"

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 10;
    printf("%d, %d \n", a, b);
    swap(&a, nullptr);
    printf("%d, %d \n", a, b);
    /* code */
    return 0;
}
