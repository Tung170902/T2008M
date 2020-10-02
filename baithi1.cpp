#include <stdio.h>
int main() {
	int F0 = 0;
	int F1 = 1;
	int F;
    printf("day so fibonaci < 100 : \n");
    for ( int i = 0 ; i < 100 ; i++ ){
        if ( i <= 1 ){
            F = i;
        }else{
        	F = F0 + F1;
        	F0 = F1;
        	F1 = F;
        	if(F > 100) {
            	break;
        	}
      	}
      		printf("%d  ",F);
	}
}

