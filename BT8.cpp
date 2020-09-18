#include<stdio.h>
int main(){
	int i=1,n;
	float S;
	S=0;
	printf("Nhap n: ");
	scanf("%d",&n);
	if(n<1){
	printf("Ban ngu vcl");
}
	while(i<=n){
		S = S+1.0/i;
		i++;
		printf("Tong day so la: %f",S);
	}
}
