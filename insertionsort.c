#include<conio.h>
#include<stdio.h>

int swap(int, int); // function to swap two elements

void main()
{
	int a[],i,j,n;
	printf("Enter the value of n:\t");
	scanf("%d",&n);
	printf("Enter %d values into the array\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 
	for(i=1;i<n;i++)               // for loops to compare two elements
	{
		for{j=1;j<i;j++)
			{
				while(j>0 && (a[j-1] > a[j]))
				{
					swap(a[j-1],a[j]);	
				}
				j = j-1;
			}
	}
	
	for(i=0;i<n;i++)
	{
		printf("After sorting\n");
		printf(a[i]);
	}
}

int swap(int x, int y)     // function swapping two elements and returning the final value back to the main function.
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	return x,y;
}
