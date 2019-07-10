#include<stdio.h>
#include<stdlib.h>

int main(){
	int n, m;
	int *px, *py, *pc, *bCnt;
	//input the scope of parking lots
	scanf("%d", &n);
	px = (int*) malloc (n * sizeof(int));
	py = (int*) malloc (n * sizeof(int));
	pc = (int*) malloc (n * sizeof(int));
	bCnt = (int*) calloc (n, sizeof(int));
	for(int i = 0; i < n; i++){
		scanf("%d%d%d", &px[i], &py[i], &pc[i]);
	}
	//input position of illegal bikes
	scanf("%d", &m);
	int *bx, *by;
	bx = (int*) malloc (m * sizeof(int));
	by = (int*) malloc (m * sizeof(int));
	for(int i = 0; i < m; i++){
		scanf("%d%d", &bx[i], &by[i]);
	}
	//calculate for bike[i]
	for(int i = 0; i < m; i++){
		int dist, pNum;
		int first = 0;
		//distance between bike[i] and parking lot[j]
		for(int j = 0; j < n; j++){
			int temp = abs(px[j]-bx[i]) + abs(py[j]-by[i]);
			if(first == 0 && bCnt[j] < pc[j]){
				dist = temp;
				pNum = j;
				first = 1;
			}else if(temp < dist && bCnt[j] < pc[j]){
				dist = temp;
				pNum = j;
			}else if(temp == dist && bCnt[j] < pc[j]){
				if(px[j] < px[pNum]){
					dist = temp;
					pNum = j;
				}else if(px[j] == px[pNum] && py[j] < py[pNum]){
					dist = temp;
					pNum = j;
				}
			}
		}
		//move the bike into the parking lot
		bCnt[pNum]++;
	}
	//output
	for(int i = 0; i < n; i++){
		printf("%d", bCnt[i]);
		if(i != n-1){
			printf("\n");
		}
	}
	free(px);
	free(py);
	free(pc);
	free(bCnt);
	free(bx);
	free(by);
	return 0;
} 
