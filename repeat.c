#include <stdio.h>
#include <stdlib.h>

int main(int n, char *argv[])
{   int i = n;
    if ((n > 9) || (n < 0))
    {
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        puts(argv[1]);
		puts("salut");
    }
    return 0;
}
