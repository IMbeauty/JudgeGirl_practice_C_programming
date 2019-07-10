#include<stdio.h>

int main(){
	int n, num;
	int cnt[3] = {0};
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &num);
		cnt[num%3]++;
	}
	printf("%d %d %d", cnt[0], cnt[1], cnt[2]);
	return 0;
}
