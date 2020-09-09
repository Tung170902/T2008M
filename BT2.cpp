#include <stdio.h>
#include <math.h>
int giaiPTbac2(float a,float b,float c,float &x1,float &x2){
		float delta = b*b - 4*a*c;
	if(delta<0){
		x1=x2=0.0;
		return 0;
	}
	else if(delta==0){
			x1=x2=-b/(2*a);
			return 1;
	}
	else{
		delta = sqrt(delta);
			x1=(-b + delta)/(2*a);
			x2=(-b - delta)/(2*a);
			return 2;
	}
}
int main(){
	float a,b,c;
	float x1,x2;
	do{
		printf("Nhap a (a!=0):");
		scanf("%f",&a);
		printf("Nhap b :");
		scanf("%f",&b);
		printf("Nhap c :");
		scanf("%f",&c);
	}
	while(!a);
	// Neu a=0 thi nhap lai
	int numNo = giaiPTbac2(a,b,c,x1,x2);
		if(numNo==0){	
		printf("PT vo nghiem");
		}
		else if(numNo==1){
			printf("PT co nghiem kep x=%.4d",x1);
		}
		else{
			printf("PT co hai nghiem phan biet x1=-b + delta/(2*a),x2=-b - delta/(2*a)",x1,x2);
		}
}
