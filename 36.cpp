#include<stdio.h>

main(){
	int y, m, fstDay;
	scanf("%d%d%d", &y, &m, &fstDay);
	if(y >= 1000 && y <= 3000 
	&& m >= 1 && m <= 12
	&& fstDay >= 0 && fstDay <= 6){
		printf(" Su Mo Tu We Th Fr Sa\n");
		printf("=====================\n");
		int dayCnt = 0;
		if(m == 2){
			if(y % 4 == 0){
				if(y % 100 == 0){
					if(y % 400 == 0)
						dayCnt = 29;
					else
						dayCnt = 28;
				}else
					dayCnt = 29;
			}else{
				dayCnt = 28;
			}
		}else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
			dayCnt = 31;
		}else{
			dayCnt = 30;
		}
		for(int i = 0; i < fstDay; i++){
			printf("   ");
		}
		for(int i = 1; i <= dayCnt; i++){
			printf("%3d", i);
			if((i+fstDay)%7 == 0 && i != dayCnt)
				printf("\n");
		}
		printf("\n");
		printf("=====================\n");
	}else{
		printf("invalid\n");
	}
	
	return 0;
}
