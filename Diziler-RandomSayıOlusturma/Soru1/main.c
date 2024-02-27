#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,j,sutun, satir;
	
		
	printf("Lutfen birim matrisin sutun sayisini girinz: ");
	scanf("%d",&sutun);
	
	printf("Lutfen birim matrisin satir sayisini girinz: ");
	scanf("%d",&satir);
	
	int dizi[satir][sutun];
	
	for (i=0;i<satir ; i++){
		for(j=0; j<sutun ; j++){
			if(i == j){
				dizi[i][j] = 1;
			}
			else{
				dizi[i][j] = 0;
			}
		}
	}
	
	for (i=0 ;i<satir ; i++){
		for(j=0 ; j<sutun ; j++){
			printf("%d ", dizi[i][j]);
			
		}
		printf("\n");
	}
	
	
	return 0;
}
