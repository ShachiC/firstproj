#include <cs50.h>
#include <stdio.h>

void printParam(int p, int h) {
    for (int j=0; j<h-p; j++)
        printf(" ");
    for (int i=0; i<p; i++) {
    printf("#");
    }
    printf("\n");
}

int main(void)
{
    int h = get_int("Integer: What would you like your height?\n");
    printf("Height: %i\n", h);
        
    for(int i=1; i<=h; i++) {
        printParam(i,h);
    }
}



