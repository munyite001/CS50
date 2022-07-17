#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//  FUnction Prototype
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    //  Get user input
    string Text = get_string("Enter a text: ");
    // printf("%s\n", Text);

    //  Count letters
    int letters = count_letters(Text);
    // printf("%i Letters\n", letters);


    //  count words
    int words = count_words(Text);
    // printf("%i Words\n", words);



    //  count sentences
    int sentences = count_sentences(Text);
    // printf("%i Sentences\n", sentences);


    //  Coleman-Liau index
    //  index = 0.0588 * L - 0.296 * S - 15.8

    double L = roundf(((letters * 100) / words) * 100) / 100;
    double S = roundf(((sentences * 100) / words) * 100) / 100;

    double index = ((0.0588 * L - 0.296 * S - 15.8) * 100) / 100 ;

    int grade = (int) round(index);


    //  Printing a rounded grade
    if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}

int count_letters(string text)
{
    int letters = 0;
    int length = strlen(text);
    for (int i = 0; i < length; i++)
    {
        if (isalpha(text[i]))
        {
            letters += 1;
        }
    }

    return letters;
}

int count_words(string text)
{
    //  All we need to do is count the number of spaces in  asentence, since we are told
    //  a sentence will not start with a space or end with a space
    int words = 0;
    int length = strlen(text);
    for (int i = 0; i <  length; i++)
    {
        if (text[i] == ' ')
        {
            words += 1;
        }
    }

    return words + 1;
}

int count_sentences(string text)
{
    //  For this challenge, we are told to assume:
    //  anything ending with a period, exclamation mark or question mark is a sentence
    int sentences = 0;
    int length = strlen(text);
    for (int i = 0; i < length; i++)
    {
        if (text[i] == '!' || text[i] == '.' || text[i] == '?')
        {
            sentences += 1;
        }
    }

    return sentences;
}
