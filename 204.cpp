#include<stdio.h>
#include<stdlib.h>

/*struct window{
	int* ptr; //point to the window itself
	int see; //the winNum of the win seen from this
	int hasBeenSeen; //bool hasBeenSeen
};*/

int main(){
	int W, D;
	scanf("%d%d", &W, &D);
	//build up the room
	int** map = (int**) malloc (D*sizeof(int*));
	for(int i = D-1; i >= 0; i--){
		map[i] = (int*) malloc (W*sizeof(int));
		for(int j = 0; j < W; j++){
			scanf("%d", &map[i][j]);
		}
	}
	//printf("finish input\n");
	/*
	//record the num seen by each other
	//which reduce calculating time to half
	int* seen = (int*) malloc (2*(W+D)*sizeof(int));
	for(int i = 0; i < 2*(W+D); i++){
		
	}*/
	//reflect
	for(int i = 0; i < 2*(W+D); i++){
		//printf("for window %d ", i);
		int x, y, dx, dy;
		if(i < W){//initialize for buttom side
			//printf("at buttom : ");
			y = i;
			x = 0;
			dy = 0;
			dx = 1;
		}else if(i < W+D){//initialize for right side
			//printf("on the right : ");
			x = i-W;
			y = W-1;
			dy = -1;
			dx = 0;
		}else if(i < 2*W+D){//initialize for the top
			//printf("on the top : ");
			x = D-1;
			y = 2*W+D-1-i;
			dy = 0;
			dx = -1;
		}else{//initialize for left side
			//printf("on the left : ");
			x = 2*(W+D)-1-i;
			y = 0;
			dy = 1;
			dx = 0;
		}
		//printf("(%d,%d)", x, y);
		while(x<D && y<W && x>=0 && y>=0){
			if(map[x][y] == 1){
				if(dy == 1){
					dy = 0;
					dx = 1;
				}else if(dy == -1){
					dy = 0; 
					dx = -1;
				}else if(dx == 1){
					dy = 1;
					dx = 0;
				}else{
					dy = -1;
					dx = 0;
				}
			}
			x += dx;
			y += dy;
			//printf("-->(%d,%d)", x, y);
		}
		//printf("\n");
		//output
		if(x >= D) //top
			printf("%d", 2*W+D-1-y);
		else if(y >= W) //right side
			printf("%d", W+x);
		else if(x < 0) //buttom
			printf("%d", y);
		else if(y < 0) //left side
			printf("%d", 2*(W+D)-1-x);
		//next line
		if(i != 2*(W+D)-1)
			printf("\n");
	}
	
	return 0;
} 
