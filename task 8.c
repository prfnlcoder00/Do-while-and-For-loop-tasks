#include<stdio.h>

main(){
	
	int a = 1;
	int sum = 0;
	int n;
	
	printf("Enter the value: ");
	scanf ("%d",&n);
	
	do{
		
		sum = sum+a;
			
		
		a++;	
	
	
	}while(a<=n);
		
		printf("%d",sum);
}
