#include <cs50.h>
#include <stdio.h>

int main(void)
{
   long dollars = 1; // long is 64 bits
   while (true)
   {
        char c = get_char("Here's $%li. Double it and give to next person?" , dollars);
        if (c == 'y')
        {
            dollars *= 2;
        }
        else
        {
            break;
        }
   }
}
