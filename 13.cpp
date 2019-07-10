#include<stdio.h>

main(){
	int n = 0;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++)
			printf("%d", j);
	}
	return 0;
} 
