/*
MOHD ISRAIL MUJAWAR
251P089
FE COMPUTER
DIV D
*/
#include <stdio.h>
 int main(){
int phy,chem,maths;
float avg;
printf("Enter physics marks:");
scanf("%d", &phy);
printf("Enter Chemistry marks:");
scanf("%d", &chem);
printf("Enter Maths marks");
scanf("%d", maths);
avg =(phy + chem+ maths) / 3;
printf("Average = %.2f \n",avg);
(avg >= 50)? printf(" YOU ARE Eligible"): printf(" YOU ARE Not Eligible");
return 0;
}
