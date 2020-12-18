#include <stdio.h>
#include <stdlib.h>


/* birim matris tanimi:
		NxN birim matris "N" satir ve "N" sutunu olan bir matristir. Sol ustten
		sag alta kosegen ustundeki girislerin hepsi "1"dir ve diger girislerin hepsi "0"dir.
*/

int main() {
	int **birimMatris;
	int i,j;
	int satirSayisi,sutunSayisi;
	printf("Satir sayisi:");
	scanf("%d",&satirSayisi);
	printf("Sutun sayisi:");
	scanf("%d",&sutunSayisi);
	
	// dinamik birim matris olusturma.
	birimMatris=(int**)calloc(satirSayisi,sizeof(int*));
	for(i=0;i<satirSayisi;i++){
		birimMatris[i]=(int*)calloc(sutunSayisi,sizeof(int));
	}
	
	for(i=0;i<satirSayisi;i++){
		for(j=0;j<sutunSayisi;j++){
			if(i==j){
				birimMatris[i][j]=1;
			}
		}
	}
	for(i=0;i<satirSayisi;i++){
		for(j=0;j<sutunSayisi;j++){
			printf("%d   ",birimMatris[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<satirSayisi;i++){
		free(birimMatris[i]);
	}
	free(birimMatris);
	return 0;
}
