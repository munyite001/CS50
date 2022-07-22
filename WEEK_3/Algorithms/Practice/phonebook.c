#include <stdio.h>
#include <string.h>
#include <ctype.h>


typedef struct{
    char name[10];
    char number[15];
}person;


int main(void)
{
    person people[2];

    people[0].name = "Emmanuel";
    people[0].number = "+254768696987";

    people[1].name = "Eclay";
    people[1].number = "+254720927657";

    for(int i = 0; i < 2; i++)
    {
        if(strcmp(people[i].name,"David") == 0)
        {
            printf("Found: %s\n", people[i].number);
        }
    }
    printf("Not Found!\n");
}