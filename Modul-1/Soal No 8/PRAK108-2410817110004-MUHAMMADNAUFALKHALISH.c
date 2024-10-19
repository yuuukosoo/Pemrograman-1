#include <stdio.h>
int main ()
{
float total_putaran=5;
float jarak_tempuh_total=14;

float phi=3.14;
float keliling_putaran= jarak_tempuh_total/total_putaran;

float jari_jari=keliling_putaran/(2*phi);

printf("Diketahui : \n");
printf("Pak Dengklek mengelilingi taman = %.f putaran \n", total_putaran);
printf("Jarak tempuh Pak Dengklek= %.f Kilometer \n",jarak_tempuh_total);
printf("  \n");
printf("Jawaban : \n");
printf("Jari-Jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer \n",jari_jari);




}