#include <stdio.h>
int main(){
int a,b,c;
scanf("%d %d %d",&a ,&b, &c);
if(a>b && a>c){
   if(b>c){
    printf("%d %d %d",c, b, a);
}
else if(c>b){printf("%d %d %d",b, c, a);}
   
   }

if(b>c && b>a){
    if(c>a){printf("%d %d %d",a, c, b);}
    else if(a>c){printf("%d %d %d",c, a, b);}


if(c>b && c>a){
    if(b>a){printf("%d %d %d",a, b, c);}
    else if(a>b){printf("%d %d %d",b, a, c);}
}}
   
    


}