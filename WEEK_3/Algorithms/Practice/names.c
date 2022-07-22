#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char names[][10] = {"Esther","Terry","Arshley","Ann","Mercy","Karren"};
    for (int i = 0; i < 7; i++)
    {
        if (strcmp(names[i],"Karren") == 0)
        {
            printf("Found!\n");
            return 0;
        }
    }
    printf("Not Found!\n");
    return 1;
}