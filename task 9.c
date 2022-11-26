#include<stdio.h>

main(){
	
	int a = 1;
	int factorial = 1;
	int n;
	
	printf("Enter the value: ");
	scanf ("%d",&n);
	
	do{
		
		factorial = factorial * a;
			
		
		a++;	
	
	
	}while(a<=n);
		
		printf("%d",factorial);
}
