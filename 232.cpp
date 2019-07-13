#include<stdio.h>

int main(){
	// input
	int y, jan1st; // the day of Jan 1st
	scanf("%d%d", &y, &jan1st);
	
	// check leap year
	int leap = 0; // whether this year is a leap yaer
	if (y%4 == 0) {
		if (y%100 == 0) {
			if (y%400 == 0)
				leap = 1;
		} else
			leap = 1;
	} // else leap = 0
	//if(leap == 1)
	//	printf("leap!\n");
	
	int testCnt;
	scanf("%d", &testCnt);
	
	// start calculating
	for(int i = 0; i < testCnt; i++){
		int m, d, date = 0;
		scanf("%d%d", &m, &d);
		if (m>12 || m<1)
			printf("-1");
		else if (d>31 || d<0)
			printf("-2"); // Notice: not all date exception has been dealed
		else{
			switch(m){
				case 1:
					date = d;
					break;
				case 2:
					if(d<=28 || (d==29 && leap==1))
						date = d + 31;
					else
						date = -2;
					break;
				case 3:
					date = d + 59;
					if(leap == 1)
						date += 1;
					break;
				case 4:
					if(d > 30)
						date = -2;
					else{
						date = d + 90;
						if(leap == 1)
							date += 1;
					}
					break;
				case 5:
					date = d + 120;
					if(leap == 1)
						date += 1;
					break;
				case 6:
					if(d > 30)
						date = -2;
					else{
						date = d + 151;
						if(leap == 1)
							date += 1;
					}
					break;
				case 7:
					date = d + 181;
					if(leap == 1)
						date += 1;
					break;
				case 8:
					if(d > 30)
						date = -2;
					else{
						date = d + 212;
						if(leap == 1)
							date += 1;
					}
					break;
				case 9:
					date = d + 243;
					if(leap == 1)
						date += 1;
					break;
				case 10:
					if(d > 30)
						date = -2;
					else{
						date = d + 273;
						if(leap == 1)
							date += 1;
					}
					break;
				case 11:
					date = d + 304;
					if(leap == 1)
						date += 1;
					break;
				case 12:
					if(d > 30)
						date = -2;
					else{
						date = d + 334;
						if(leap == 1)
							date += 1;
					}
					break;
				default:
					//printf("default\n");
					break;
			}
			//printf("%d\n", date);
			if(date >= 0){
				date += (jan1st-1);
				date %= 7;
			}
			printf("%d", date);
		}
		
		if (i != testCnt-1)
			printf("\n");
	}
	
	return 0;
}
