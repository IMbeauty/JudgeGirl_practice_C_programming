#include<stdio.h>
#include<math.h>

main(){
	int N, M;
	scanf("%d%d", &N, &M);
	//count their digits
	int n = 1, m = 1;
	while((N/pow(10,n-1)) >= 10){
		n++;
	}
	while((M/pow(10,m-1)) >= 10){
		m++;
	}
	//printf("digit of N,M is %d,%d", n, m);
	
	//get time of appearances of N in M
	int apCnt = 0;
	for(int i = m-n; i >= 0; i--){
		int t = M/(pow(10,i));
		//printf("\nt is %d", t);
		if(t == N)
			apCnt++;
		m--;
		M %= (int)(pow(10,m));
		
	}
	printf("%d", apCnt);
	return 0;
}
