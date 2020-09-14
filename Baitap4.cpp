#include<stdio.h>
#include<math.h>
int main (){
	int a;
	printf("Nhap 1 so tu ban phim: ");
	scanf("%d",&a);
	if(a>=2){
		if(a<=7){
			printf("Day la thu %d",a);
		}else{
			if(a==8){
				printf("Day la chu nhat");
				
			}else{
				printf("Day k phai la ngay trong tuan");
			}
		}		
	}else{
			printf("Day k phai la ngay trong tuan");
	}
}
