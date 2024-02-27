#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int hafta =1;
	while(hafta<5){
		
	
			int i,j;
			int subeA[5];
			int subeB[5];
			
			
			for(i=0 ; i<5 ; i++){
				subeA[i] = rand()%100;
				subeB[i] = rand()%100;
				printf("%d	%d\n",subeA[i],subeB[i]);
			}
			
			int enBuyukA = 0, enBuyukB=0;
			int enBuyukIndisA = 0, enBuyukIndisB = 0;
			for(i=0 ; i<5 ; i++){
				if(subeA[i] > enBuyukA){
					enBuyukA = subeA[i];
					enBuyukIndisA = i;
				}
				if(subeB[i] > enBuyukB){
					enBuyukB = subeB[i];
					enBuyukIndisB = i;
				}
					
			}
			printf("A subesinin %d. haftanin %d. gununde en fazla satis gerceklesmistir \n",hafta, enBuyukIndisA+1);
			printf("B subesinin %d. haftanin %d. gununde en fazla satis gerceklesmistir \n",hafta, enBuyukIndisB+1);
			
			hafta++;
	
	}
	
	
	return 0;
}
