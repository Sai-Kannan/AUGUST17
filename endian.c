#include<stdio.h>
int main()
{
	int a=1;
	char *p = (char*)&a;//explicit type casting is done here
	if(*p==1)//if num at that paticular is not 1 then it is big endian
	 printf("little ");
	else
	 printf("big");
}
