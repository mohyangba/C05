#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int dap = 87;
    int num;
    int trial = 0;

    printf("Guess a number between 1 and 100: ");

    do {
        scanf("%d", &num);

        if (num > dap) {
            printf("High\n");
        } else if (num < dap) {
            printf("Low\n");
        }

        trial++;
    } while (num != dap);

    printf("YOU WON! Trials: %d\n", trial);
    getchar();
  system("PAUSE");	
  return 0;
}
