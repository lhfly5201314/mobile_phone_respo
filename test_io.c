#include <stdio.h>

#define IN 1
#define OUT 0

int main01(){
	int nc,nl,nw,c,state;
	nc=nl=nw=0;
	state=OUT;
	while((c=getchar())!=EOF){
		++nc;
		if(c=='\n')
			//++nl;
			nl++;
		if(c=='\n'||c==' '||c=='\t'){
			state=OUT;
		}
		if(state==OUT)
		    {
					                    state=IN;
							    ++nw;
		    }
	}

printf("nc:%d,nw:%d,nl:%d",nc,nw,nl);

	}


int main(){
	int c,i,nwhite,nother;
	nwhite=nother=0;
	int digit[10];

	for(i=0;i<10;++i)
	{
		digit[i]=0;
	}

	while((c=getchar())!=EOF)
	{
		if(c>='0'&&c<='9')
			++digit[c-'0'];
		else if(c==' '||c=='\n'||c=='\t')
			++nwhite;
		else
			++nother;
	}

	printf("digits=");
	for(i=0;i<10;++i)
		printf("%d,",digit[i]);
	printf("nwhite=%d,nother=%d",nwhite,nother);
}


