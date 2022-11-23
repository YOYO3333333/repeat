#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        return 1;
    }
    else
    {
        int i = argv[2][0] - 48;
        int cpt = 0;
        while (cpt < i)
        {
            puts(argv[1]);
            cpt++;
        }
        return 0;
    }
}
