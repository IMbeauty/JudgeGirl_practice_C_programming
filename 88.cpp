#include<stdio.h>

int main(){
	int n1 = 0, n2 = 0;
	int num1[4] = {0};
	int num2[4] = {0};
	scanf("%d%d", &n1, &n2);
	for(int i = 0; i < 4; i++){
		num1[i] = n1%10;
		n1 /= 10;
		num2[i] = n2%10;
		n2 /= 10;
	}
	/*for(int i = 0; i < 4; i++){
		printf("%d", num1[i]);
	}
	printf("\n");
	for(int i = 0; i < 4; i++){
		printf("%d", num2[i]);
	}
	printf("\n");*/
	int A = 0, B = 0;
	for(int i = 0; i < 4; i++){
		if(num1[i] == num2[i])
			A++;
	}
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if(num1[i] == num2[j] && num1[i] > 0 && i != j){
				//printf("%d=%d\n", num1[i], num2[j]);
				B++;
				//avoid repeatly counted
				num1[i] = -1;
				num2[j] = -1;
			}
		}
	}
	
	printf("%dA%dB", A, B);
	return 0;
} 
