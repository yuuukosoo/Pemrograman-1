#include <stdio.h>
int main(){
int pilihan;
float pertama,kedua,hasil;

while (1){
printf("1. Penjumlahan\n");
printf("2. Pengurangan\n");
printf("3. Perkalian\n");
printf("4. Pembagian\n");
printf("5. Exit\n");
printf("Masukkan Pilihan :");
scanf("%d",&pilihan);

if(pilihan >=1 && pilihan <=4){
printf("Masukkan nilai Pertama :");
scanf("%f",&pertama);
printf("Masukkan nilai kedua :");
scanf("%f",&kedua);

switch(pilihan){
    case 1:
    hasil=pertama+kedua;
    printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f \n\n", pertama,kedua,hasil);
    break;

    case 2:
    hasil=pertama-kedua;
    printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f \n\n",pertama,kedua,hasil);
    break;

    case 3:
    hasil=pertama*kedua;
    printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f \n\n",pertama,kedua,hasil);
    break;

    case 4:
        if(kedua!=0 || pertama!=0){
    hasil=pertama/kedua;
    printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f \n\n",pertama,kedua,hasil);
    } else{
        printf("pembagian nol tidak bisa\n\n");}
    break; 
    } 
    }

    else if(pilihan==5){
        printf("Terimakasih, telah menggunakan kalkulator MUHAMMAD NAUFAL KHALISH\n\n"); 
        break;}
        

    else {printf("Input anda salah, silahkan coba lagi \n\n");}
    
}
return 0;    

}





