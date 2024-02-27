#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
    srand(time(NULL));
	int i,j, gunsayisi = 30;
    float bitcoin[gunsayisi];
    float artisAzalis[gunsayisi - 1];

    
    for (i = 0; i < gunsayisi; i++) {
        bitcoin[i] = (float)(rand() % 10000) / 100; 
    }

   
    for ( i = 0; i < gunsayisi - 1; i++) {
        artisAzalis[i] = bitcoin[i + 1] - bitcoin[i];
    }

    
    int beklemesuresi;
    printf("Kac gun bekleyebilirsiniz: ");
    scanf("%d", &beklemesuresi);

    float totalkar = 0;
    int maxkar = 1;

    
    for (i = 0; i < gunsayisi - beklemesuresi; i++) {
        float totalRaise = 0;

        
        for (j = 0; j < beklemesuresi; j++) {
            totalRaise += artisAzalis[i + j];
        }

        
        if (totalRaise > totalkar) {
            totalkar = totalRaise;
            maxkar = i + 1; 
        }
    }

    
    printf("En karli gunler:\n");
    for ( i = 0; i < beklemesuresi; i++) {
        printf("Gun %d: %.2f\n", maxkar + i, artisAzalis[maxkar + i - 1]);
    }

    return 0;
}

