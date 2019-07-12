#include<stdio.h>

int main(){
	int X, Y, x1, y1, x2, y2;
	int dx1, dy1, dx2, dy2, t;
	scanf("%d%d", &X, &Y);
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	scanf("%d%d%d%d", &dx1, &dy1, &dx2, &dy2);
	scanf("%d", &t);
	
	for (int i = 0; i < t; i++) {
		//move
		x1 += dx1;
		x2 += dx2;
		y1 += dy1;
		y2 += dy2;
		//if touch the wall
		if (x1 >= X) {
			//x1 = 2*X - x1;
			dx1 = -dx1;
		} else if (x1 <= 0) {
			//x1 = -x1;
			dx1 = -dx1;
		}
		if (x2 >= X) {
			//x2 = 2*X - x2;
			dx2 = -dx2;
		} else if (x2 <= 0) {
			//x2 = -x2;
			dx2 = -dx2;
		}
		if (y1 >= Y) {
			//y1 = 2*Y - y1;
			dy1 = -dy1;
		} else if (y1 <= 0) {
			//y1 = -y1;
			dy1 = -dy1;
		}
		if (y2 >= Y) {
			//y2 = 2*Y - y2;
			dy2 = -dy2;
		} else if (y2 <= 0) {
			//y2 = -y2;
			dy2 = -dy2;
		}
		//collidation
		if (x1 == x2 && y1 == y2){
			printf("collide!\n");
			if(dx1 != dx2){
				dx1 = -dx1;
				dx2 = -dx2;
			}
			if(dy1 != dy2){
				dy1 = -dy1;
				dy2 = -dy2;
			}
		}
		
		printf ("%d %d %d %d\n", x1, y1, x2, y2);
		//printf ("	change is %d %d %d %d\n", dx1, dy1, dx2, dy2);
	}
	
	printf ("%d\n%d\n%d\n%d", x1, y1, x2, y2);
	
	return 0;
} 
