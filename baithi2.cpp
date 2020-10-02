#include <stdio.h>  

int main(){
 

float  tienvon , tienlai  ;
int sonam; 
float tong;
printf("nhap tienvon  :/n");
scanf ("%f",&tienvon  );
printf("nhap lai xuat moi nam :/n");
scanf ("%f",&tienlai );
printf ("nhap laixuat  :/n");
scanf ("%d",&sonam);
for (int i=0; i<sonam ;i++)
{
tong =(tienvon*tienlai )/100;
tienvon+=tong;
printf("so tien thu duoc %d: %f\n",i+1,tong);
printf("so tien thu duoc = %f\n",i+1,tong);
   }
}  
