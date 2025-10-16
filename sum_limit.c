/*
MOHD ISRAIL MUJAWAR
251P089
COMPUTER ENGINEERING 
DIV D
*/
#include <stdio.h>
int main() {
int lim;
int sum=0;
printf(" Enter the limit:");
scanf("%d",&lim);
for(int i=0;i<=lim;i++)
{if(i%2==1){
        sum=i;
        }
}
printf("Sum of odd number is:%d",sum);
    return 0;
}
