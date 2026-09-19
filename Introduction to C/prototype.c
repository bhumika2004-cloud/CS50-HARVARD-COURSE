#include <cs50.h>
#include <stdio.h>

void meow(void); //prototype

int main(void)
{
   for (int i=0; i<3; i++)
   {
    meow();
   }
}


void meow(void)
{
    printf("meow\n");
}
