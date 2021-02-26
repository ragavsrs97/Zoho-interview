#include<stdio.h>
int main()
{
char a[30],b[30];
printf("Enter the letter: ");
scanf("%s",a);
int length=0;
for(int i=0;a[i]!=NULL;i++)
{
length++;
}
int j=0;
for(int i=(length/2);i<length;i++)
{
	b[j]=a[i];
j++;
}
for(int i=0;i<(length/2);i++)
{
	b[j]=a[i];
	j++;
}
j=0;
for(int i=length-1;i>=0;i--)
{j++;
	for(int k=i;k>0;k--)
	{
		printf(" ");
	}
	for(int l=0;l<j;l++)
	{
		printf("%c",b[l]);
	}
printf("\n");
}

}
