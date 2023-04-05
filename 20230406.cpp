#include<stdio.h>
int main()
{
	int a,b,c,e,f;
	printf("请输入一个三位整数：");
	scanf("%d",&a);
	b=a%10;
	c=(a/10)%10;
	e=(a/100)%10;
	f=b+c+e;
	printf("%d",f);
    return 0;
}
