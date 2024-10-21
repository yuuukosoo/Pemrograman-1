#include <stdio.h>
int main ()
{
    int alas,tinggi,miring,keliling;
    float Luas;
    alas=5;
    tinggi=12;
    miring=sqrt(alas*alas + tinggi*tinggi);
    keliling=alas+tinggi+miring;
    Luas=(alas*tinggi)/2;
    printf("Diketahui : \n");
    printf("Alas = %d cm\n",alas);
    printf("Tinggi = %d cm\n",tinggi);
    printf("\n");
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n",tinggi);
    printf("Sisi B = %d cm\n", miring);
    printf("Sisi C = %d cm\n",alas);
    printf("Keliling = %d cm \n",keliling);
    printf("Luas = %.f cm",Luas);
}


