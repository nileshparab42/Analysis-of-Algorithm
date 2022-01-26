
#include<stdio.h>
#include<conio.h>
void main()
	{
	int n, a[100],i,j,z,item,countm=0;
	float w,per;
	printf("How many element are there?\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
		scanf("%d",&a[i]);
		}
	for(j=2;j<=n;j++)
		{
		item=a[j];
		z=j-1;
		while(z>=1&&item<a[z])
			{
			a[z+1]=a[z];
			z=z-1;
			countm=countm+1;
			}
		a[z+1]=item;
		}
	printf("after printing :\n");
	for(i=1;i<=n;i++)
		{
		printf("%d\n",a[i]);
		}
	printf("\nCount of move :%d",countm);
	w=(n*n-n)/2;
	per=(countm/w)*100;
	printf("\nPercentage of move :%f%",per);
	if(per<33)
		{
		printf("\nBest case");
		}
	if(per<66&&per>33)
		{
		printf("\nAverage case");
		}
	if(per>66)
		{
		printf("\nWrost case");
		}
	getch();
	clrscr();
	}