#include<stdio.h>
using namespace std;

int main(){
	int N, M;
	scanf("%d", &N); 
	int* num = new int[N];
	for(int i = 0; i < N; i++){
		scanf("%d", &num[i]); 
	}
	scanf("%d", &M); 
	int* cnt = new int[M];
	for(int i = 0; i < M; i++){
		cnt[i] = 0; 
	}
	for(int i = 0; i < N; i++){
		int t = num[i] % M;
		cnt[t]++;
	}
	for(int i = 0; i < M - 1; i++){
		printf("%d\n", cnt[i]);
	}printf("%d", cnt[M - 1]);
	
	return 0;
} 
