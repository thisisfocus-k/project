#include<stdio.h>
int main(void){
    int i,j; 
    for(i = 2; i < 13; i++){
    	printf("(%d)\n",i);
    	for(j = 1; j < 13; j++){
    		printf("%d x %d = %d\n",i,j,i*j);
		}
		printf("\n");
	}
    return 0;
}
