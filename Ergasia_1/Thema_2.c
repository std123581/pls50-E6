#include <stdio.h>
#include <math.h>
#define PI 3.1415926

/*Gewmetrikoi ypologismoi*/

int main()
{
    float arithmos1, arithmos2;  /*Oi metavlhtes kata periptwsh antiproswpevoun eite
                                to mhkos mias pleyras, eite thn aktina toy kyklou.*/
    float tetragwno(float arithmos1);
    float parallhlogrammo(float arithmos1, float arithmos2);
    float trigwno(float arithmos1, float arithmos2);
    float kyklos(float arithmos1);
    float apotelesma;
    int epilogh;

    do /*Xrhsimopoiw ayth thn epanalhpsh gia na ginei h epilogh tou xrhsth kai afou ginei
        o elegxos efoson h epilogh den einai 0 na epanalhfthei h diadikasia.*/
    {
        printf("Epilekse ena gewmetriko sxhma apo ta parakatw gia na ypologistei h perimetros tou:\n");
        printf("1: Gia tetragwno\n");
        printf("2: Gia parallhlogrammo\n");
        printf("3: Gia orthogwnio trigwno\n");
        printf("4: Gia kyklo\n");
        printf("0: Gia kleisimo tou programmatos\n");

        scanf(" %d", &epilogh);

        if (epilogh == 1)   /*Ta apotelesmata tha vgainoun me akriveia 2 dekadikwn pshfiwn.*/
        {
            printf("Dwse to mhkos ths pleyras tou tetragwnou.\n");
            scanf(" %f", &arithmos1);
            apotelesma = tetragwno (arithmos1);
            printf("H perimetros tetragwnou me pleyra %f einai %.2f.\n\n", arithmos1, apotelesma);
        }

        else if (epilogh == 2)
        {
            printf("Dwse to mhkos tou parallhlogrammou.\n");
            scanf(" %f", &arithmos1);
            printf("Dwse to platos tou parallhlogrammou\n");
            scanf(" %f", &arithmos2);
            apotelesma = parallhlogrammo(arithmos1, arithmos2);
            printf("H perimetros parallhlogrammou me pleyres %f  kai %f einai %.2f.\n\n", arithmos1, arithmos2, apotelesma);
        }

        else if (epilogh == 3)
        {
            printf("Dwse to mhkos ths mias katheths pleyras tou orthogwniou trigwnou.\n");
            scanf(" %f", &arithmos1);
            printf("Dwse to mhkos ths allhs katheths pleyras tou orthogwniou trigwnou.\n");
            scanf(" %f", &arithmos2);
            apotelesma = trigwno(arithmos1, arithmos2);
            printf("H perimetros orthogwniou trigwnou me kathetes pleyres %f  kai %f einai %.2f.\n\n", arithmos1, arithmos2, apotelesma);
        }

        else if (epilogh == 4)
        {
            printf("Dwse thn aktina tou kyklou.\n");
            scanf(" %f", &arithmos1);
            apotelesma = kyklos(arithmos1);
            printf("H perimetros kyklou me aktina %f einai %.2f.\n\n", arithmos1, apotelesma);
        }

        else if (epilogh == 0)  /*Molis o xrhsths epileksei to 0 me aythn thn epilogh vgainw apo thn epanalhpsh.*/
        {

        }

        else
        {
            printf("Exeis epileksei lathos arithmo.\n\n");
        }

    }
    while (epilogh != 0);

    return 0;
}

float tetragwno(float arithmos1)
{
    float perimetros;

    perimetros = arithmos1 * 4;

    return perimetros;
}

float parallhlogrammo(float arithmos1, float arithmos2)
{
    float perimetros;

    perimetros = (arithmos1 * 2) + (arithmos2 * 2);

    return perimetros;
}

float trigwno(float arithmos1, float arithmos2)
{
    float perimetros, ypoteinousa;

    ypoteinousa = sqrt(arithmos1 * arithmos1 + arithmos2 * arithmos2);
    perimetros = arithmos1 + arithmos2 + ypoteinousa;

    return perimetros;
}

float kyklos(float arithmos1)
{
    float perimetros;

    perimetros = 2 * PI * arithmos1;  /*Gia to PI xrhsimopoiw to 3.1415926*/

    return perimetros;
}
