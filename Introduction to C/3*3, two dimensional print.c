#include<stdio.h>

int main(void)
{
  for (int i = 0; i < 3; i++) //for each row
  {
    for (int j = 0; j < 3; j++) //for each column
    {
      printf("#"); //print one brick
    }
    printf("\n");
  }
}
