# SOLUTION FOR THE MARIO LESS CS50 CHALLENGE IN C

**_Link to the Challenge_**
['Mario Less'](https://cs50.harvard.edu/x/2022/psets/1/mario/less/)

## The Challenge

**The challenge was to create a program, that takes user input,**
**which will represent height of the pyramid and then print out a pyramid**
**similar to the pyramids in Super Mario Bros**

**_Eg: if height is 5 then the pyramid will look like this_**

```
    #
   ##
  ###
 ####
#####

```

**_If height is 8 then the pyramid will look like this_**

```
       #
      ##
     ###
    ####
   #####
  ######
 #######
########

```

**Note: The input height should ne between 1 and 8 inclusive, and if the user inputs**
**any other height, we should reprompt the user till height inputed is the one required**

## SOLUTION

The first step in all C programs is to include the necessary header files in our case
the <stdio.h> header file

Then we declare the main program

```C
int main(void)
{

}
```

Now the first step is to get user input and store it in a variable let's call the variable height. We'll also have to ensure that input height is in the required range
We can accomplish this using a do while loop

```C
int main(void)
{
    //  Create a variable to store the height input

    int height;

    //  We need to prompt the user for height input and keep prompting them
    //  till the height is between 1 and 8 inclusive
    do
    {
        printf("height: ");
        scanf("%d",&height);
    }
    while(height < 1 || height > 8);
}
```

The code snippet above, will keep prompting the user for height till, height inputted
by the user is in the required range i.e height >= 1 or height <= 8.

Then once we have the required height, we'll create loops to print the height

We'll create the outer loop which will represent the rows for our pyramid

```c
    for(int i = 0; i < height; i++)
    {

    }
```

Then we'll create the first inner loop which will be responsible for printing the empty spaces.
So let's say that the user inputs height as 5, in the first row, we'll want to print 4 spaces and one hash, the second row, 3 spaces and 2 hash third row 2 spaces and 3 hash

So we can see that the spaces start with height - 1 in the first row and go on reducing till the last row has no empty spaces and the hash symbols start with 1 at the first row and go on increasing till the last row
We can accomplish this by creating the for loop, and seetting the iteration variable(j), equal to height - 1 then the loop will run as long as j is bigger than the outer iteration variable i. and in each iteration, we'll decrease j and print an empty space

```c
    for(int j = height-1; j > i; j--)
    {
        printf(" ")
    }
```

But remember we'll also want to print the hash symbols so we'll add a second inner loop right after the first one
we'll set the iteration variable(k) equal to zero, then we'll keep iterating as long as k is less than or equal to the outer iteration variable(i), we'll keep increasing the value of k and print a hash symbol.

```c
    for(int k = 0; k <= i; k++)
    {
        printf("#")
    }
```

then we'll print a new line, to seperate the rows

```c
    printf("\n");
```

combining all these steps will form the code snippet below

```c
    for(int i = 0; i < height; i++)
    {
        for(int j = height-1; j > i; j--)
        {
            printf(" ")
        }

        for(int k = 0; k <= i; k++)
        {
            printf("#")
        }
        printf("\n");
    }
```

And that's it. To make your code easier to read, and simpler, you could refactor the code using functions.

### Acknowledgements
If you are interested to learn computer science completely for free, be sure to check out
the course offered by havard at EDX.
['Cs50 introduction to Computer Science'](https://cs50.harvard.edu/x/2022/)

### Author
Authored by ['Emmanuel Munyite'](https://github.com/munyite001)
