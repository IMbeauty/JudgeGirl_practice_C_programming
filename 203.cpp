#include<stdio.h>

int main(){
	int X, Y, x1, y1, x2, y2;
	int dx1, dy1, dx2, dy2, t;
	scanf("%d%d", &X, &Y);
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	scanf("%d%d%d%d", &dx1, &dy1, &dx2, &dy2);
	scanf("%d", &t);
	int turnUp1 = 0, turnLeft1 = 0, turnUp2 = 0, turnLeft2 = 0;
	for(int i = 0; i < t; i++){
		if(turnUp1 == 0)
			x1 += dx1;
		else
			x1 -= dx1;
		if(x1 >= X){//if dx > X => while?
			x1 = X - (x1-X);
			turnUp1 = 1;
		}else if(x1 <= 0){
			x1 = -x1;
			turnUp1 = 0;
		}
		
		if(turnUp2 == 0)
			x2 += dx2;
		else
			x2 -= dx2;
		if(x2 >= X){
			x2 = X - (x2-X);
			turnUp2 = 1;
		}else if(x2 <= 0){
			x2 = -x2;
			turnUp2 = 0;
		}
		
		if(turnLeft1 == 0)
			y1 += dy1;
		else
			y1 -= dy1;
		if(y1 >= Y){
			y1 = Y - (y1-Y);
			turnLeft1 = 1;
		}else if(y1 <= 0){
			y1 = -y1;
			turnLeft1 = 0;
		}
		
		if(turnLeft2 == 0)
			y2 += dy2;
		else
			y2 -= dy2;
		if(y2 >= Y){
			y2 = Y - (y2-Y);
			turnLeft2 = 1;
		}else if(y2 <= 0){
			y2 = -y2;
			turnLeft2 = 0;
		}
		if(x1 == x2 && y1 == y2){
			//¤Ï¼u
			if(dx1 != dx2){
				if(turnUp1 == 1)
					turnUp1 = 0;
				else
					turnUp1 = 1;
				if(turnUp2 == 1)
					turnUp2 = 0;
				else
					turnUp2 = 1;
			}
			if(dy1 != dy2){
				if(turnLeft1 == 1)
					turnLeft1 = 0;
				else
					turnLeft1 = 1;
				if(turnLeft2 == 1)
					turnLeft2 = 0;
				else
					turnLeft2 = 1;
			}
		}
		//printf("%d,%d,%d,%d\n", x1, y1, x2, y2);
	}
	printf("%d\n%d\n%d\n%d", x1, y1, x2, y2);
	
	return 0;
} 
