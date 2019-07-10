#include<stdio.h>

main(){
	int x = 0, result = 1;
	scanf("%d", &x);
	if(x % 3 == 0 && x % 5 == 0 && x % 7 != 0)
		result = 0;
	printf("%d", result);
	return 0;
} 
