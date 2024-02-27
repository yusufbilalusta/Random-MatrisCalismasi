#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j; 
	srand(time(NULL));
	int dizi[20];
	for(i=0 ; i<20 ; i++){
		dizi[i] = rand() % 26 + 25;
		printf("%d\n",dizi[i]);
	}
	
	int duzenlenmis[20];
	int uzunluk = 0;
	for(i=0 ; i<20 ; i++){
		bool isAgain = true;
		
		for(j=0;j<uzunluk ; j++){
			if (dizi[i] == duzenlenmis[j]) {
                isAgain = false;
                break;
            }
		}
		if (isAgain) {
            duzenlenmis[uzunluk] = dizi[i];
            uzunluk++;
        }
		
		
		
	}
	for(i=0;i<uzunluk ; i++) printf("%d ",duzenlenmis[i]);
		
	return 0;
}
