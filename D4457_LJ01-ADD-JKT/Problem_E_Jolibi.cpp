#include <stdio.h>

int main()
{
    int jojo,lili,bibi;
    int rata,tinggi,orang;
    int nilai;
    int other = 0;
    
    
    //regular scan
    scanf("%d",&nilai);
    scanf("%d %d %d",&jojo,&lili,&bibi);
    int array [nilai];
    
    //loop scan
    for (int i = 1 ; i <= nilai ; i++){
        scanf("%d",&array[i]);
    }

    //total other people
    for (int i = 1 ; i <= nilai ; i++){
        other = other + array[i];
    }
    
    //average calculation

    tinggi = other + jojo + lili +bibi;
    orang = nilai + 3;
    rata = tinggi / orang;

    //if operation
    if (jojo >= rata)
    {
        printf("Jojo lolos\n");
    }
    else
    {
        printf("Jojo tidak lolos\n");
    }
    if (lili >= rata)
    {
        printf("Lili lolos\n");
    }
    else
    {
        printf("Lili tidak lolos\n");
    }
    if (bibi >= rata)
    {
        printf("Bibi lolos\n");
    }
    else
    {
        printf("Bibi tidak lolos\n");
    }
    
    
    return 0;
}

