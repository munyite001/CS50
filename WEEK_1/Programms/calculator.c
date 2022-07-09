#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int x,y;
    printf("A simple Calculator to add two numbers\n");
    printf("Enter the first Number: ");
    scanf("%d",&x);
    printf("Enter the second Number: ");
    scanf("%d",&y);

    printf("The sum of %d and %d is %d\n",x,y,x+y);

}