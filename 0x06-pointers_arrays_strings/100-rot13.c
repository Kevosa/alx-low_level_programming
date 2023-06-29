#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The string to encode.
 *
 * Return: Pointer to the resulting encoded string.
 */
char *rot13(char *str)
{
    char *ptr = str;
    int i;
    char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    while (*ptr)
    {
        int is_uppercase = 0;
        if (*ptr >= 'A' && *ptr <= 'Z')
        {
            is_uppercase = 1;
            *ptr = *ptr - 'A' + 'a';
        }

        for (i = 0; input[i]; i++)
        {
            if (*ptr == input[i])
            {
                *ptr = output[i];
                break;
            }
        }

        if (*ptr >= 'a' && *ptr <= 'z' && is_uppercase)
        {
            *ptr = *ptr - 'a' + 'A';
        }

        ptr++;
    }

    return str;
}

