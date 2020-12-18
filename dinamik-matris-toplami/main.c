#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void diziyiDoldur(int **,int, int);
void matrisToplam(int**, int**,int**,int,int);
void yazdir(int **, int , int);

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int **matrisA,**matrisB,**matrisC;
	int i,j;
	int satirSayisi,sutunSayisi;
	printf("satir sayisini giriniz:");
	scanf("%d",&satirSayisi);
	printf("sutun sayisini giriniz:");
	scanf("%d",&sutunSayisi);
	
	// Dinamik sekilde matrisler olusturma
	matrisA=(int**)malloc(sizeof(int*)*satirSayisi);
	for(i=0;i<satirSayisi;i++){
			matrisA[i]=(int*)malloc(sizeof(int)*sutunSayisi);	
	}
	matrisB=(int**)malloc(sizeof(int*)*satirSayisi);
	for(i=0;i<satirSayisi;i++){		
			matrisB[i]=(int*)malloc(sizeof(int)*sutunSayisi);	
	}
	matrisC=(int**)malloc(sizeof(int*)*satirSayisi);
	for(i=0;i<satirSayisi;i++){
			matrisC[i]=(int*)malloc(sizeof(int)*sutunSayisi);	
	}

	
	diziyiDoldur(matrisA,satirSayisi,sutunSayisi);
	diziyiDoldur(matrisB,satirSayisi,sutunSayisi);
	puts("matrisA:");
	yazdir(matrisA,satirSayisi,sutunSayisi);
	puts("matrisB:");
	yazdir(matrisB,satirSayisi,sutunSayisi);
	puts("matrisC:(toplam)");
	matrisToplam(matrisA,matrisB,matrisC,satirSayisi,sutunSayisi);
	yazdir(matrisC,satirSayisi,sutunSayisi);
	for(i=0;i<satirSayisi;i++){
		free(matrisA[i]);
		free(matrisB[i]);
		free(matrisC[i]);
	}	
	free(matrisA);
	free(matrisB);
	free(matrisC);

	return 0;
}
void diziyiDoldur(int **matris,int satirSayisi, int sutunSayisi){
	int i,j;
	for(i=0;i<satirSayisi;i++){
		for(j=0;j<sutunSayisi;j++){
			matris[i][j]=rand()%25;
		}
	}
}
void matrisToplam(int **matrisA,int **matrisB,int **matrisC,int satirSayisi, int sutunSayisi){
	int i,j;
	for(i=0;i<satirSayisi;i++){
		for(j=0;j<sutunSayisi;j++){
			matrisC[i][j]=matrisA[i][j] + matrisB[i][j];
		}
	}
}
void yazdir(int **matris, int satirSayisi, int sutunSayisi){
	int i,j;
	srand(time(NULL));
	for(i=0;i<satirSayisi;i++){
		for(j=0;j<sutunSayisi;j++){
			printf("%d   ",matris[i][j]);
		}
		printf("\n");
	}
	
}