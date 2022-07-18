#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

string convert_cipher(string word, string key);
int validkey(string key);

int main(int argc, string argv[])
{
    //  First condition, to check if either more or less parameters have been given
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    //  Seccond condition, to check that the key inputted is of required length
    else if (strlen(argv[1]) < 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    else if (validkey(argv[1]) == 1)
    {
        printf("Invalid Key!\n");
        return 1;
    }
    else
    {
        //  Putting the key in a variable called key
        string key = argv[1];

        printf("Key: %s\n", key);
        //  Getting user input for the plain text
        string plain_text = get_string("PlainText: ");

        //  Function to convert from plaintext to cipher text
        string ciphertext = convert_cipher(plain_text, key);

        printf("ciphertext: %s\n", ciphertext);
    }
}

string convert_cipher(string word, string key)
{
    char Alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    //  We'll loop through the plain text, checking it with the alphabets array, and substituting the values
    int w_length = strlen(word);
    int A_length = strlen(Alphabets);
    for (int i = 0; i < w_length; i++)
    {
        for (int j = 0; j < A_length; j++)
        {
            if (isupper(word[i]))
            {
                if (word[i] == Alphabets[j])
                {
                    word[i] = toupper(key[j]);
                    break;
                }
            }
            if (islower(word[i]))
            {
                if (word[i] == tolower(Alphabets[j]))
                {
                    word[i] = tolower(key[j]);
                    break;
                }
            }
        }
    }

    // storing the modified plain_text into a variable cipher text
    string ciphertext = word;

    return ciphertext;
}

//  Function to check if a key is valid
int validkey(string key)
{
    int length = strlen(key);
    // looping through the key, and comparing each character with thr rest
    for (int i = 0; i < length; i++)
    {

        for (int j = i + 1; j < length; j++)
        {
            if (key[i] == key[j] || !isalpha(key[i]))
            {
                return 1;
            }
        }
    }
    return 0;
}