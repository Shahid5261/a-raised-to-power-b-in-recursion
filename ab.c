#include<stdio.h>
int main()
{
	int a,b,p;
	printf("enter the value of a and b");
	scanf("%d %d",&a,&b);
	p=power(a,b);
	printf("%d power of %d is %d",a,b,p);
	
}
int power(int a, int b)
{
	int temp;
	if(b==1)
	{
		return a;
	}
	else{
		temp=a*power(a,b-1);
		return temp;
	}
}
