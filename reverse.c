#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[],int maxline);

void reverse(char s[]);

int main(void)
{
  // current input line
  char line[MAXLINE];

  while(get_line(line,MAXLINE)>0)
  {
    reverse(line);
    printf("\n%s\n",line);
  }
  return 0;
}

int get_line(char s[],int lim)
{
  int c,i,l;
  for(i=0,l=0;(c=getchar())!=EOF&&c!='\0';++i)
  {
    if(i<lim-1)
      s[l++]=c;
  }
  if(c=='\n'&&l<lim-1)
    s[l++]=c;
  s[l]='\0';
  
  return l;
}

void reverse(char s[])
{
  int i,j;
  int tmp;

  // loop until to the end of s[]
  for(j=0;s[j]!='\0';++j);
  --j;
  // if the last character is \n,--again
  if(s[j-1]=='\n')
    --j;
  // elegant code ,cool
  for(i=0;i<j;++i,--j)
  {
    tmp=s[i];
    s[i]=s[j];
    s[j]=tmp;
  }
}





