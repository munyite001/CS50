#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int get_height(int x);

void print_pyramid(int x);

int main(void){
    //  Create a variable to store the height input

    int height;

    //  We need to prompt the user for height input and keep prompting them
    //  till the height is between 1 and 8 inclusive
    do
    {
        height = get_height(height);
    }
    while(height < 1 || height > 8);

    //Print Pyramid
    print_pyramid(height);
    
    
}

int get_height(int x)
{
    printf("Enter Height: ");
    scanf("%d",&x);

    return x;
}

void print_pyramid(int x)
{
    for(int i = 0; i < x; i++)
    {
        //  We'll create the first loop to print empty spaces.
        for(int j = x-1; j > i; j--)
        {
            printf(" ");
        }
        //  We'll create the second loop to print '#' symbols
        for(int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}

