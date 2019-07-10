#include<stdio.h>

main(){
	int n = 0;
	scanf("%d", &n);
	for(int i = 1; i < n; i++){
		printf("%d\n", i);
	}
	for(int i = n; i > 1; i--){
		printf("%d\n", i);
	}
	printf("%d",1);
	return 0;
} 
