#include <stdio.h>
int main (){
char nama[99];
char NIM[99];
char Kelas_Paralel[99];
char ttl[99];
char Alamat[99];
char Hobby[99];
char No_hp[99];

fgets(nama,sizeof(nama),stdin);
fgets(NIM,sizeof(NIM),stdin);
fgets(Kelas_Paralel,sizeof(Kelas_Paralel),stdin);
fgets(ttl,sizeof(ttl),stdin);
fgets(Alamat,sizeof(Alamat),stdin);
fgets(Hobby,sizeof(Hobby),stdin);
fgets(No_hp,sizeof(No_hp),stdin);

printf("Nama : %s",nama);
printf("NIM : %s",NIM);
printf("Kelas paralel : %s",Kelas_Paralel);
printf("Tempat/Tanggal Lahir : %s",ttl);
printf("Alamat : %s",Alamat);
printf("Hobby : %s",Hobby);
printf("No. HP : %s",No_hp);





}