#include <stdio.h>
int main(){
int awal,akhir,i,j;
scanf("%d %d",&awal, &akhir);

for(int i=awal, j=akhir; i<=akhir && j>=awal; i++,j-- ){
    printf("%d %d",i,j);
    if(i<akhir || j>awal) {printf(" - ");} 
}

for(int i=awal,j=akhir; i>=akhir && j<=awal; i--,j++){
    printf("%d %d",i ,j);
    if(i>akhir || j<awal) {printf(" - "); }
}
return 0; }


