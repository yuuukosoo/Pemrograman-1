#include <stdio.h>
int main (){
char nama[99]; char NIM[99]; char KP[99]; 
char ttl[99]; char Alamat[99]; char Hobby[99]; char No_hp[99];

printf("Nama :"); fgets(nama,sizeof(nama),stdin);
printf("NIM :"); fgets(NIM,sizeof(NIM),stdin);
printf("Kelas_Paralel :"); fgets(KP,sizeof(KP),stdin);
printf("Tempat/Tanggal Lahir :"); fgets(ttl,sizeof(ttl),stdin);
printf("Alamat :"); fgets(Alamat,sizeof(Alamat),stdin);
printf("Hobby :"); fgets(Hobby,sizeof(Hobby),stdin);
printf("No HP :"); fgets(No_hp,sizeof(No_hp),stdin);

printf("Nama : %s",nama);
printf("NIM : %s",NIM);
printf("Kelas paralel : %s",KP);
printf("Tempat/Tanggal Lahir : %s",ttl);
printf("Alamat : %s",Alamat);
printf("Hobby : %s",Hobby);
printf("No. HP : %s",No_hp); return 0; }

