#include <stdio.h>

#define MAXLINE 1000

extern int max;
extern char line [];
extern char longest [];

//int getline1(char line[],int maxlimit);
//void copy(char to[],char from[]);
/*
int main01(){

	int len;
	int max;

	char line[MAXLINE];
	char longest[MAXLINE];
	max=0;

	while((len=getline1(line,MAXLINE))>0)
	{
		if(len>max)
		{
			max=len;
			copy(longest,line);
		}

	}
	if(max>0)
		printf("find it \n");
		printf("%s\n",longest);

	return 0;

}

int getline1(char s[],int lim){
	int c,i;
	for(i=0;i<lim-1&&(c=getchar())!=EOF&&c!='\n';++i){
		s[i]=c;
	}
	if(c=='\n'){
		s[i]=c;
		++i;
	}

	s[i]='\0';

	return i;

}

void copy(char to[],char from[]){

	int i;
	i=0;
	while((to[i]=from[i])!='\0'){
		++i;
	}

}

*/
int getline02(void);
void copy(void);

int main(){
	int len;
	extern int max;
	extern char longest[];

	max=0;
	while((len=getline02())>0){
		max=len;
		copy();
	}
	if(max>0)
		printf("%s",longest);
		printf("%d",max);

	return 0;
}

int getline02(){
	int c,i;
	extern char line[];

	for(i=0;i<MAXLINE-1&&(c=getchar())!=EOF&&c!='\n';++i){
		line[i]=c;
	}
	if(c=='\n'){
		line[i]=c;
		++i;
	}
	line[i]='\0';

	return 0;
}

void copy(){
	
	int i=0;
	extern char line[],longest[];

	//while(i<MAXLINE){
	while((longest[i]=line[i])!='\0')
		++i;
}

