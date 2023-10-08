#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 
    int num;
    
    printf("정수 하나를 입력하시오 :  ");
    scanf("%d", &num);
    
    if (num>0)
    printf("양수\n");
    if (num=0)
    printf("0\n"); 
    if (num<0)
    printf("음수\n");
    
    printf("\n ------------------- \n");
    
  
  system("PAUSE");	
  return 0;
}
