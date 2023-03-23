#include<stdio.h>
#include<math.h>

#define N 5
#define M 7

int main(){
	int i=0,j=0,*punt1,*punt2;
    int mt[N][M];
	srand(time(NULL));
    /*for(i=0;i<N;i++){
	    for(j=0;j<M;j++){
		    mt[i][j]=1+rand()%100;
		    printf("[%d]  ",mt[i][j]);
	    }
	    printf("\n");
    }*/
    punt1=&mt[0][0];
    punt2=&mt[N][M];
    while(punt1!=punt2){
    	j=j+1;
		*punt1=1+rand()%100;
    	printf("[%d]  ",*punt1);
    	if(j==7){
    		printf("\n");
    		j=0;
		}
		punt1++;
	}
    return 0;
}
