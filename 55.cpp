#include<stdio.h>

int main(){
	int m, n;
	int x1, y1, n1, e1, f1;
	int x2, y2, e2, n2, f2;
	//printf("m,n,x,y,e,n,f1, x,y,e,n,f2 is\n");
	scanf("%d%d", &m, &n);
	// m is x, n is y, origin is on left buttom
	scanf("%d%d%d%d%d", &x1, &y1, &e1, &n1, &f1);
	scanf("%d%d%d%d%d", &x2, &y2, &e2, &n2, &f2);
	int pattern1 = e1+n1, pattern2 = e2+n2;
	int duration = (f1 > f2)? f1:f2;
	int explode = 0; //boolean
	for(int i = 1; i <= duration; i++){
		if(i <= f1){
			if((i-1)%pattern1 < n1){
				y1++;
				y1 %= n;
			}else{
				x1++;
				x1 %= m;
			}
		}
		if(i <= f2){
			if((i-1)%pattern2 < e2){
				x2++;
				x2 %= m;
			}else{
				y2++;
				y2 %= n;
			}
		}
		//printf("at time %d,\n", i);
		//printf("r1 is at (%d,%d), ", x1, y1);
		//printf("r2 is at (%d,%d)\n", x2, y2);
		if(x1 == x2 && y1 == y2){
			printf("robots explode at time %d", i);
			explode = 1;
			break;
		}
	}
	if(explode == 0)
		printf("robots will not explode");
	
	return 0;
} 
