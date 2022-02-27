

#include <stdio.h>

int main()
{
    int cislo;
    int x;
    int soucet = 0;
    printf("Ciferny soucet ");
    scanf("%d", &cislo);
    
    while (cislo)
    {
        x = cislo % 10;
        soucet = soucet + x;
        cislo = cislo / 10;
    }
    printf("Ciferny soucet je %d", soucet);
    return 0;
}
