#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int arifa,bouchara,conor,souwaiba;
    printf ("type three integers to add\n");
    scanf ("%d%d%d", &arifa, &bouchara, &conor);

    souwaiba=arifa+bouchara+conor;
    printf ("sum of entered number= %d\n", souwaiba);
}