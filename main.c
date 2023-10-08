#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char c;
    int num = 0;
    
    
    printf("INPUT A STRING CODE: ");
    while ( (c = getchar() ) != '\n')  
    {
          //printf("while\n");
          if (c >= '0' && c <= '9')
          num = num + 1;
    }
    
    printf("The amount of number you used : %i\n", num);
  
  system("PAUSE");	
  return 0;
}
