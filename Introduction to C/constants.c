#include<stdio.h>

int main(void)
{
  const int n = 3; //constants i.e its value is same throughout the program

  for (int row = 0; row < n; row++) //for each row
  {
    for (int column = 0; column < n; column++) //for each column
    {
      printf("#"); //print one brick
    }
    printf("\n");
  }
}
