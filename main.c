#include <stdio.h>

char sum(char a, char b)
{
    return a + b;
}

int main()
{
    char s = sum(5, 7);
    printf("5 + 7 = %d\n", s);
}
