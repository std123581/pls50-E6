#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lewforeio [ 53 ], i, j, f, k, t, s, x, a, b, c, theseis, ypoloipo, epilogh, reserve, cancel, check;
    char pinakida[ 10 ];
    FILE * fp, * ff;

    if ((fp = fopen("bus.txt", "r")) == NULL)
    {
        printf("Den vrethike to arxeio.\n");    /*Emfanizetai mhnyma otan den vrethei to arxeio*/
    }
    else
    {
        fscanf(fp, "%s %d", &pinakida, &theseis);   /*Thewrw oti h pinakida apoteleitai ontws apo 3 grammata
                                                    kai 4 arithmous. Den kanw kapoion elegxo. Tha ginei elegxos
                                                    mono gia ton arithmo thesewn.*/
        printf("To lewforeio exei arithmo pinakidas %s kai arithmo thesewn %d.\n\n", pinakida, theseis);

        if(theseis <= 53 && theseis > 0)   /*Elegxw to evros twn thesewn mou.*/
        {
            ypoloipo = (theseis - 5) % 4;

            if (ypoloipo != 0)  /*Elegxw an oi theseis einai ths morfhs (4N+5) */
            {
                printf("Exete dwsei lathos arithmo thesewn.\n");
            }

            while (ypoloipo == 0)
                {
                    for (i = 0; i < theseis; i++)
                    {
                        lewforeio [ i ] = 0;
                    }

                    do
                    {
                        printf("Kante mia epilogh apo ta parakatw:\n");
                        printf("1: Gia emfanish tou synolikou plhthous kenwn thesewn kai twn arithmwn tous.\n");
                        printf("2: Gia krathsh theshs me sygkekrimeno arithmo.\n");
                        printf("3: Gia krathsh ths prwths kenhs theshs pou vrisketai se parathyro.\n");
                        printf("4: Gia akyrwsh krathshs theshs.\n");
                        printf("5: Gia anazhthsh krathmenhs theshs.\n");
                        printf("6: Gia emfanish listas krathmenwn thesewn.\n");
                        printf("7: Gia efanish tou diagrammatos twn thesewn sthn othonh tou ypologisth.\n");
                        printf("8: Gia apothikeysh tou diagrammatos twn thesewn se arxeio keimenou.\n");
                        printf("0: Gia termatismo tou programmatos.\n");

                        scanf(" %d", &epilogh);

                        if (epilogh == 1)
                        {
                            j = 0;

                            for (i = 0; i <= (theseis - 1); i ++)
                            {
                                if (lewforeio [ i ] == 0)
                                {
                                    j = j + 1;
                                    printf("H thesh %d einai kenh.\n", i + 1);
                                }
                            }
                            printf("To synolo twn kenwn thesewn einai %d.\n\n", j);
                        }

                        else if (epilogh == 2)
                        {
                            printf("Dwste ton arithmo ths theshs gia thn opoia thelete na kanete krathsh.\n");

                            scanf(" %d", &reserve);

                            if (reserve > 0 && reserve <= theseis && lewforeio [ reserve - 1 ] == 0)
                            {
                                lewforeio [ reserve - 1 ] = 1;
                                printf("H krathsh ths theshs oloklhrwthike.\n\n");
                            }

                            else if (reserve <= 0 || reserve > theseis)
                            {
                                printf("Den yparxei ayth h thesh.\n\n");
                            }

                            else printf("H thesh ayth einai hdh krathmenh.\n\n");

                        }

                        else if (epilogh == 3)
                        {
                            for (f = 0; f < theseis - 3; f = f + 4)
                            {
                                if (lewforeio [ f ] == 0)
                                {
                                    lewforeio [ f ] = 1;
                                    f = theseis - 3;
                                }
                                else if (lewforeio [ f + 3 ] == 0 && f + 3 < theseis - 3)
                                {
                                    lewforeio [ f + 3 ] = 1;
                                    f = theseis - 3;
                                }
                                else if (f + 3 > theseis - 3)
                                {
                                   if (lewforeio [ theseis - 1 ] == 0)
                                        {
                                            lewforeio [ theseis - 1 ] = 1;
                                        }
                                }
                            }
                            printf("\n");
                        }

                        else if (epilogh == 4)
                        {

                            printf("Dwste ton arithmo ths theshs gia thn opoia thelete na kanete akyrwsh.\n");

                            scanf(" %d", &cancel);

                            if (cancel > 0 && cancel <= theseis && lewforeio [ cancel - 1 ] == 1)
                            {
                                lewforeio [ cancel - 1 ] = 0;
                                printf("H akyrwsh ths theshs oloklhrwthike.\n\n");
                            }

                            else if (cancel <= 0 || cancel > theseis)
                            {
                                printf("Den yparxei ayth h thesh.\n\n");
                            }

                            else
                            {
                                printf("H thesh ayth einai kenh.\n\n");
                            }

                        }

                        else if (epilogh == 5)
                        {
                            printf("Dwste ton arithmo ths theshs gia thn opoia thelete na elegksete.\n");

                            scanf(" %d", &check);

                            if (check > 0 && check <= theseis && lewforeio [ check - 1 ] == 1)
                            {
                                printf("H thesh einai krathmenh.\n\n");
                            }

                            else if (check > 0 && check <= theseis && lewforeio [ check - 1 ] == 0)
                            {
                                printf("H thesh einai kenh.\n\n");
                            }

                            else printf("Den yparxei ayth h thesh.\n\n");

                        }

                        else if (epilogh == 6)
                        {
                            printf("Oi krathmenes theseis einai oi parakatw:\n");

                            for (k = 0; k <= (theseis - 1); k ++)
                            {
                                if (lewforeio [ k ] == 1)
                                {
                                    printf("%d\n", k + 1);
                                }

                            }

                            printf("\n");

                        }

                        else if (epilogh == 7)
                        {
                            printf("%s\n", pinakida);

                            t = 0;

                            for (s = 0; s < (theseis - 5); s = s + 4)
                            {
                                if (lewforeio [ t ] == 0)
                                {
                                    printf("_");
                                }
                                else
                                {
                                    printf("*");
                                }

                                if (lewforeio [ t + 1 ] == 0)
                                {
                                    printf("_");
                                }
                                else
                                {
                                    printf("*");
                                }

                                printf(" ");

                                if (lewforeio [ t + 2 ] == 0)
                                {
                                    printf("_");
                                }
                                else
                                {
                                    printf("*");
                                }

                                if (lewforeio [ t + 3 ] == 0)
                                {
                                    printf("_\n");
                                }
                                else
                                {
                                    printf("*\n");
                                }
                                t = t + 4;
                            }

                            for (x = (theseis - 5); x <= (theseis - 1); x++)
                                {
                                    if (lewforeio [ x ] == 0)
                                    {
                                        printf("_");
                                    }

                                    else
                                    {
                                        printf("*");
                                    }
                                }

                            printf("\n");

                        }

                        else if (epilogh == 8)
                        {
                            ff = fopen("layout.txt", "w+");

                            fprintf(ff, "%s\n", pinakida);

                            b = 0;

                            for (a = 0; a < (theseis - 5); a = a + 4)
                            {
                                if (lewforeio [ b ] == 0)
                                {
                                    fprintf(ff, "_");
                                }
                                else
                                {
                                    fprintf(ff, "*");
                                }

                                if (lewforeio [ b + 1 ] == 0)
                                {
                                    fprintf(ff, "_");
                                }
                                else
                                {
                                    fprintf(ff, "*");
                                }

                                fprintf(ff, " ");

                                if (lewforeio [ b + 2 ] == 0)
                                {
                                    fprintf(ff, "_");
                                }
                                else
                                {
                                    fprintf(ff, "*");
                                }

                                if (lewforeio [ b + 3 ] == 0)
                                {
                                    fprintf(ff, "_\n");
                                }
                                else
                                {
                                    fprintf(ff, "*\n");
                                }
                                b = b + 4;
                            }

                            for (c = (theseis - 5); c <= (theseis - 1); c++)
                                {
                                    if (lewforeio [ c ] == 0)
                                    {
                                        fprintf(ff, "_");
                                    }

                                    else
                                    {
                                        fprintf(ff, "*");
                                    }
                                }

                            fprintf(ff, "\n");

                            fclose(ff);

                        }

                        else if (epilogh == 0)
                        {
                            ypoloipo = 1;
                        }

                        else
                        {
                            printf("Den exeis epileksei swsta.\n\n");
                        }
                    }
                    while (epilogh != 0);

                }
        }

        else
        {
          printf("Exete dwsei lathos arithmo thesewn.\n");
        }

        fclose(fp);

        return 0;
    }
}
