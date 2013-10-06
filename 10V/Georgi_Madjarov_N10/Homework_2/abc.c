#include<stdio.h>

int main()
{
	unsigned long  x,y,z;
	int a;
	x=1;
	y=2;
	z=0;
	printf("%d - %lu\n",1, x);
	printf("%d - %lu\n",2, y);
	for(a=3; a<=100; a++)
{
	z=x+y;
	printf("%d - %lu\n",a,z);
	y=x;
	x=z;	
}

	return 0;
}
