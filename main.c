#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num;
  int num0;
  
  printf("Input an integer: ");
  scanf("%d", &num);
  
  num0 = num*-1;
  
  if (num>=0)
  printf("absoulut value will be: %i\n", num);
  else
  printf("absoulut value will be: %i\n", num0);
  
  system("PAUSE");	
  return 0;
}
