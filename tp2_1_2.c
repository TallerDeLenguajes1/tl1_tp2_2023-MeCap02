//# tp2

#include<stdio.h>
#include<math.h>

#define N 20

int main(){
	int i=0;
    double vt[N],*punt1,*punt2;
    srand(time(NULL));
    punt1=&vt[0];
    punt2=&vt[N];
    while(punt1!=punt2){
    	vt[i]=1+rand()%100;
    	printf("%f \n",vt[i]);
		i++;
    	punt1++;
	}
    return 0;
}
