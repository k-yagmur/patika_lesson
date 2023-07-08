#include <cs50.h>
#include <stdio.h>
#include <math.h>


 int  main(void)
 {
    float para;
     do
    {
        para = get_float("para ustu: ");
    }
    while (para < 0);
    int bozukluk = round(para * 100);

    int yirmibeskurus = bozukluk / 25;
    bozukluk %= 25;

    int onkurus = bozukluk / 10;
    bozukluk %= 10;

    int beskurus = bozukluk / 5;
    bozukluk %= 5;

    int birkurus = bozukluk;
    printf("%d\n", yirmibeskurus + onkurus + beskurus+ birkurus);

    return 0;


}

