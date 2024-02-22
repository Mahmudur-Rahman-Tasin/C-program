#include<stdio.h>

void main()
{
	int *p, sum, i;
	int x[5] = {5,9,6,3,7};
	i=0; sum=0;

	p = x;// Equivalent to p=&x[0];

	printf("Element\t Value\t Address\n\n");
	while(i < 5)
	{
		printf("x[%d]\t %d\t %d\n",i,*p,p);
		sum=sum+*p;
		i++; p++;
	}
	printf("\nSum = %d\n",sum);
	printf("\n&x[0] = %d\n",&x[0]);
	printf("\np = %d\n\n\n",p);

//	printf("%d ",*x);
//	printf("%d ",*(x+1));
    i=0;
    printf("Element\t Value\t Address\n\n");
	while(i < 5)
	{
		printf("x[%d]\t %d\t %d\n",i,*(x+i),x+i);
		i++;
	}
}

