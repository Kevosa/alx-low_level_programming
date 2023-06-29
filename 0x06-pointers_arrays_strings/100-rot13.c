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
        for (i = 0; input[i]; i++)
        {
            if (*ptr == input[i])
            {
                *ptr = output[i];
                break;
            }
        }
        if (input[i])
            ptr++;
        else
            break;
    }

    return str;
}

