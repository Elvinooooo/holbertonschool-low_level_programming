#include "main.h"
/**
*string_toupper -that changes all lowercase letters of a string to uppercase
*@str: string argument
*
*Return: the converted to uppercase string
*/
char *cap_string(char *str)
    {
        int i = 0;

        while (str[i])
        {
               while (!(str[i] <= 'z' &&  str[i] >= 'a'))
                   i++;
                if (  str [i - 1] == ' ' || str[i - 1 ] == '\n' || i == 0 || str[i - 1] == '}' || str[i - 1] == '}' || str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' 
                || str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '.')
                {
                        str[i] -= 32;
                }
                i++;
        }
        return (str);
    }
