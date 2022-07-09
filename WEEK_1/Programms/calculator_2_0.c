#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Global variables
int choice;
int num1;
int num2;


//  Function declarations
int add();
int multiply();
int divide();
int subtract();
void menu();


int main(void)
{
    printf("A simple Calculator to perform basic operations between two numbers\n");
    printf("------------------------------------------------------------------------\n");
    while(true)
    {
        if(choice == 5)
        {
            break;
        }
        menu();
        printf("Which operation would you like to perform?: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("The answer is %d\n",add());
                break;
            case 2:
                printf("The answer is %d\n",subtract());
                break;
            case 3:
                printf("The answer is %d\n",multiply());
                break;
            case 4:
                printf("The answer is %d\n",divide());
                break;
            case 5:
                break;
            default:
                printf("Please enter a valid Choice bewtween 1 and 4 ! ! !\n");
                break;
        }

    }

}

void menu()
{
    printf("\n- - - - MENU - - - -\n");
    printf("\n1. ADDITION\n");
    printf("2. SUBTRACTION\n");
    printf("3. MULTIPLICATION\n");
    printf("4. DIVISION\n");
    printf("5. QUIT\n");
    

}


int add()
{
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    int z = num1 + num2;

    return z;
}

int subtract()
{
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    int z = num1 - num2;

    return z;
}

int multiply()
{
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    int z = num1 * num2;

    return z;
}

int divide()
{
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    int z = num1 / num2;

    return z;
}


