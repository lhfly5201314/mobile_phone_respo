#include <stdio.h>

int power(int b,int n);

int main(){
	int i;

	for(i=0;i<10;++i)
	{
		printf("i=%d,2=%d,-3=%d\n",i,power(2,i),power(-3,i));
		printf("i=%d",i);
	}
	

	return 0;
}


int power(int base,int n)
{
	//int i,p;
	int p;

	//p=1;

	//for(i=1;i<=n;++i)
	for(p=1;n>0;--n)
	{
		p=p*base;
	}
	return p;

}



