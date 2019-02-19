#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)
{
    string s=get_string ("Before: ");
    printf("After: \n");
    for (int i=0, n=strlen(s); i<n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf ("%c\n", s[i] - ('a' - 'A'));
        }
        else
        {
            printf ("%c\n", s[i]);
        }
    }
}# My-1st-project
