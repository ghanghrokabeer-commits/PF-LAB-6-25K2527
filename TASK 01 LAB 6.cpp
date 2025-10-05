#include<stdio.h>
int main(){
	int n;
	int product=1;
	printf("enter the number:");
	scanf("%d",&n);
	if(n>=0){
	for( int i=1; i<=n;i++){
		product=product*i;
	}
	printf("the factorial product is:%d",product);
   }else{
   	printf("enter the valid input");
   }

	return 0;
}
