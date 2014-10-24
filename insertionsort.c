/* Program to sort the given set of elements using Insertion Sort.
 * Logic of Insertion Sort, a key element will be compared with all the elements before it and sorting will happen accordingly.
 * Complexity Of Insertion Sort
 * Best case -> O(n)
 * Worst case -> O(n^2)
*/
// Author : Mahesh Kumar K

#include<conio.h>
#include<stdio.h>

void main()
{
	int a[],i,j,n,key;
	printf("Enter the value of n:\t");
	scanf("%d",&n);
	printf("Enter %d values into the array\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 
	for(i=1;i<n;i++)
	{
		key = a[i];
		j = j-1;
		while(j>=0 && (key<a[j]))
		{
			a[j+1]=a[j];
			j--;
		}a[j+1]=key;
	}
	for(i=0;i<n;i++)
	{
		printf("After sorting\n");
		printf(a[i]);
	}
}

