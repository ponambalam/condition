#include<stdio.h>
int main(){
	int num,a;
	printf("%d%d",&num);
	if((a%3==0)&&(a%5==0)){
		printf("%d is divisible by both 3 and 5");
	}else{
	
	printf("The number is not divisible by 3 and 5");
	
}
	return 0;
    }