#include <stdio.h>
int main ()
{
// Panjang Sisi Segitiga
int Sisi_1=4;
int Sisi_2=5;
int Sisi_3=7;
int harga_per_meter=85000;
int keliling_tanah=Sisi_1+Sisi_2+Sisi_3;
int total_harga=keliling_tanah*harga_per_meter;
printf("Diketahui : \n");
printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", Sisi_1,Sisi_2,Sisi_3);
printf("Keliling tanah Pak Dengklek adalah %d\n",keliling_tanah);
printf("Harga Tanah Per Meter %d\n", harga_per_meter);
printf("Jawaban :\n");
printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", total_harga);
}
