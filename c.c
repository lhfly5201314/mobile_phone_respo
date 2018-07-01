//#include <stdlib.h>
#include <stdio.h>

#define LOWER 0
#define UPPER 200
#define STEP 20

int main01(){
	float fa,cel,lower,upper,step;
	step=20;
	upper=300;
	lower=0;

	while(fa<=upper){
		cel=(5.0/9)*(fa-32);
//		cel=9*(fa-32)/5;
		printf("%f\t%f\n",fa,cel);
		fa=fa+step;
	}
	return 0;


}


int main02(){
	float fa,cel,step,lower,upper;
	step=20;
	upper=200;
	lower=0;

	for(fa=0.0;fa<=upper;fa=fa+step){
		printf("fa=%f\t,cel=%f\n",fa,(5.0/9.0)*(fa-32));
	}

	return 0;
}

int main(){
	float fa,cel;;

	for(fa=LOWER;fa<=UPPER;fa=fa+STEP){
		printf("fa=%f\t,cel=%f\n",fa,(5.0/9.0)*(fa-32));
	}

	printf("\nhello world\n");
	return 0;
}
