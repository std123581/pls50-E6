#include <stdio.h>

/*Aplh arithmomhxanh*/

main()
{
    float arithmos1, arithmos2; /*Oi 2 arithmoi pou tha xrhsimopoihthoun.*/
    char praksh;    /* H praksh pou tha ginei.*/

    printf("Dwse arithmo praksh arithmo\n");

    scanf("%f %c %f", &arithmos1, &praksh, &arithmos2);

    if (praksh == '+')  /* Elegxw thn praksh thn opoia exei dwsei o xrhsths kai analoga
                        emfanizw to katallhlo apotelesma, h mhnyma se periptwsh lathous.*/
    {
      printf("To apotelesma einai %.2f.\n", arithmos1 + arithmos2); /*Ta apotelesmata emfanizontai me akriveia 2
                                                                    dekadikwn pshfiwn.*/
    }

    else if (praksh == '-')
    {
      printf("To apotelesma einai %.2f.\n", arithmos1 - arithmos2);
    }

    else if (praksh == '*')
    {
      printf("To apotelesma einai %.2f.\n", arithmos1 * arithmos2);
    }

    else if (praksh == '/')
    {
        if (arithmos2 != 0) /*Sthn periptwsh ths diaireshs elegxw an o 2os arithmos einai 0.*/
        {
            printf("To apotelesma einai %.2f.\n", arithmos1 / arithmos2);
        }

        else
        {
            printf("Den mporei na ginei diairesh me to 0.\n");
        }
    }

    else
    {
      printf("Den exeis dwsei swsth arithmitikh praksh.\n");    /*To mynhma emfanizetai se periptwsh pou h arithmitikh praksh
                                                                den einai mia apo tis gnwstes, h an o xrhsths exei eisagei
                                                                opoiodhpote allo xarakthra sthn metavlhth.*/
    }
    return 0;
}
