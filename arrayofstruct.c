#include<stdio.h>
struct ch
{
	char c;
}st;//taking a structure having char data type
int main()
{
	int n,i;
	struct ch st[10];//array of stuctures are genarally used to store multiple struct variables.
	printf("enter how many  characters to sort : ");
	scanf("%d",&n);
	for( i=0;i<n;i++)
	scanf(" %c",&st[i].c);//reading a dat from user
    for(i=0;i<n;i++)
	{
		 for(int j=i;j<n;j++)
		 {
		 	if(st[i].c>st[j].c)
		 	{
		 		char temp=st[i].c;
		 		st[i].c=st[j].c;   //done sorting.
		 		st[j].c=temp;
			 }
		 }
	}
	for(i=0;i<n;i++)
	{
    	printf("%c",st[i].c);//printing the sorted array
    }	
}
