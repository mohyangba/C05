#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int sum = 0;
  int num;
  int i;
  
  printf("enter a number: ");
  scanf("%d", &num);
  
  for (i=0; i<=num; i++)
  {
      sum = sum + i;
  }
      
  printf("the resault is %i\n", sum);
      
  system("PAUSE");	
  return 0;
}
