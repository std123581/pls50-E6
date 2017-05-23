#include <stdio.h>
#include <stdlib.h>

/*Dyadikh anaparastash arithmou*/

int main()
{
    int arithmos, ypoloipo;/*Oi dyo metavlhtes mou.*/
    const int CONSTANT = 2; /*Orizw thn stathera mou gia tous ypologismous.*/

    do  /*Oso o xrhsths eisagei arnhtiko arirhmo to programma tou emfanizei to
        mhnuma lathous kai zhtaei na eisagei neo arithmo.*/
    {
        printf("Dwse enan akeraio thetiko arithmo.\n");
        scanf(" %d", &arithmos);

        if (arithmos < 0)
        {
            printf("Edwses lathos arihmo.\n\n");
        }
    }
    while (arithmos < 0);

    do  /*Efoson o xrhsths exei dwsei thetiko arithmo h epanalhpsh kanei tis aparaithtes
        diaireseis kai typwnei ton zhtoumeno arithmo.*/
    {
        ypoloipo = arithmos % CONSTANT;
        (ypoloipo == 1) ? putchar('1') : putchar('0');
        arithmos = arithmos / CONSTANT;

    }
    while (arithmos > 0);

    printf("\n");

    return 0;
}
