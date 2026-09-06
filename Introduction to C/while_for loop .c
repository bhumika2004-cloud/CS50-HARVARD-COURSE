#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("What's n?\n");
    while (n<0)
    {
        n = get_int("What's n?\n");
    }
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
