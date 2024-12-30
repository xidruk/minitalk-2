#include <stdio.h>
#include <unistd.h>

int main()
{
    char x = 'a';

    int j = x << 7;
    printf("x value : %c | j value : %d", x, j);

    return (0);
}