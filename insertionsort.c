<<<<<<< HEAD
/* Program to sort an array of elements using Insertion Sort.
 * Using Insertion Sort, an element will be compared with all the elements before it.
 * Consider an unsorted array of elements, 3,4,0,5,1.
 * Now, consider 0, when i = 2, this means that the element 0 will be compared with the elements before it and they are 3 and 4 respectively.
*/

/* Complexity of Insertion Sort.
 * Best Case - O(n)
 * Worst Case - O(n^2)
*/

// Author : Mahesh Kumar K


#include<stdio.h>
void main()
{
    long a[],n;
    int i,key;
    printf("Enter the value of n:\t");
    scanf("%d",&n);
    printf("Enter %d values into the array\n",n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        }

    printf("Before sorting\n");
    for(i=0;i<n;i++)
    {
        printf("\t",a[i]);
    }

    for(i=1;i<n;i++)
    {
        key = a[i];
        while(key>=0 && a[key-1]<a[key])
            {
            int temp = a[key];
            a[key]= a[key-1];
            a[key-1]=a[key];
            key--;
            }
    }

    printf("After sorting\n");
    for(i=0;i<n;i++)
    {
        printf("\t",a[i]);
    }
}


=======
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

>>>>>>> 22e9755b078a103bd8ee331b4930ddc0fffdaf1c
