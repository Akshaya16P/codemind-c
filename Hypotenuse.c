#include<stdio.h>
#include<math.h>
int main(){
    int  s,a;
    scanf("%d%d",&s,&a);
    float hypo=sqrt((s*s)+(a*a));
    printf("%.2f",hypo);
}