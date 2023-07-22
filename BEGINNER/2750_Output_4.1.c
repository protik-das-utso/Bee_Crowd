#include <stdio.h>

int main() {
  int i, a;
  a=0;
  for(i=0;i<39;i++)
  {
      printf("-");
      if(i==38)
      {
          printf("\n");
      }
  }
  printf("|  decimal  |  octal  |  Hexadecimal  |\n");
   for(i=0;i<39;i++)
  {
      printf("-");
      if(i==38)
      {
          printf("\n");
      }
  }
  for(i=0;i<16;i++)
  {
      printf("|    %3d    |   %2o    |   %5X       |\n",a,a,a); // Adjusted spacing for columns
      a++;
  }
  for(i=0;i<39;i++)
  {
      printf("-");
      if(i==38)
      {
          printf("\n");
      }
  }
    return 0;
}