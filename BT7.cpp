#include<stdio.h>
#include<math.h>
int main(){
	int S,n,i=1;
	printf("Nhap n: ");
	scanf("%d",&n);
	while(i<=n){
		S+=i;
		i++;
		printf("Tong day so la: %d ",S,n);
		getch();
	}
}
