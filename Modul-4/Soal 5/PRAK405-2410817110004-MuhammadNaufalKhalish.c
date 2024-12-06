#include <stdio.h>
int main(){

int a,b;
int total=0;
scanf("%d %d",&a, &b);
for(int i=1; i<=a; i++){
    int hasilbaris=0;

    for(int j=i;j>=1; j--){
        hasilbaris+=j*b;
        printf("(%d*%d)",j,b);
        if(j>1){
            printf("+");
        } }
printf("= %d\n",hasilbaris);
total+=hasilbaris;}
printf("%d",total);
    return 0; }