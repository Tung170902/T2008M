#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	printf("Nhap a= ");
	scanf("%d",&a);
	printf("Nhap b= ");
	scanf("%d",&b);
	if(a>=b){
		printf("%f",(float) (a/b));	
	}else{
		printf("%f ",(float) (a*b));
		return 0;
	}

}
