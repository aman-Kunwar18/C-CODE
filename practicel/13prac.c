#include <stdio.h>
#include <stdlib.h>
int main(int i,char *f[])
{
	char ch;
	if(i!=2)
	{
		printf(" Please provide one file only : ");
		return 0;
	}	
	FILE *file=fopen(f[1],"r");
	int freq[26] ={0},wc=0,flag=0;
	while((ch=fgetc(file)) != EOF ){
		if(ch >= 'A' && ch <= 'Z')
			freq[ch - 'A']++;
		else if(ch >= 'a' && ch <= 'z')
			freq[ch - 'a']++;
		if((ch ==' ' || ch=='\n' ) && flag==1)
		{
			flag=0;
			wc++;
		}
		else if(ch !=' ' && ch!='\n' )
			flag=1;
	}
	ch='a';
	for (int i=0;i<26;i++)
		printf(" frequency of %c is %d \n",ch++,freq[i]);
	printf("\n\n\n Number of words in file is %d ",wc);
}

