#include<stdio.h>

int main(){
	int c2, c1, c0;
	int a = 0, b = 0, c = 0;
	scanf("%d%d%d", &c2, &c1, &c0);
	// x^3 + c2*x^2 + c1*x + c0 = (x+a)*(x+b)*(x+c)
	// --> c2 = a+b+c, c1 = ab+bc+ca, c0 = abc
	// NOTICE: a <= b <= c
	int cnt = 0;
	for(int i = 1; i*i <= c0; i++){
		if(c0 % i == 0){
			a = i;
			for(int j = i; j*j <= c0; j++){
				if((c0/a) % j == 0){
					b = j;
					c = (c0/a)/b;
					//printf("");
					if(a+b+c == c2){
						printf("%d %d %d", a, b, c);
						return 0;
					}else if(a-b-c == c2){
						printf("%d %d %d", -c, -b, a);
						return 0;
					}else if(b-a-c == c2){
						printf("%d %d %d", -c, -a, b);
						return 0;
					}else if(c-a-b == c2){
						printf("%d %d %d", -b, -a, c);
						return 0;
					}
				}
			} 
		}
	}
	
	return 0;
}
