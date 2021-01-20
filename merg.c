#include<stdio.h>
void display(int *,int );
void read(int *,int);
int merge(int *,int *,int ,int ,int *);
void main()
{	int x[20],y[20],k;
	int z[20],n1,n2;
	 clrscr();
	 printf("Enter the no of elements of the first array\n");
	 scanf("%d",&n1);
	 read(x,n1);
	 printf("\nEnter the no of elements of the second array\n");
	 scanf("%d",&n2);
	 read(y,n2);
	 k=merge(x,y,n1,n2,z)  ;
	 display(z,k) ;
	 getch();
}
void read(int *ptr,int n1)
	 {    int i;
	 printf("Enter the Elements\n");
	 for(i=0;i<n1;i++)
	 scanf("%d",&ptr[i]);
	 }
	 void display(int *z,int k)
	 {   int i;
	     printf("\nThe merged array is \n");
	       for(i=0;i<k;i++)
		printf("%d " ,z[i]);
	 }
int merge(int *x,int *y,int n1,int n2,int *z)
	{  int i,j,k;
	 i=0;j=0;k=0;
	 while(i<n1 && j<n2)
	{	if (x[i]<y[j])
		{ 	z[k]=x[i];
			i++;
		}
		else if (y[j]<x[i])
			{	z[k]=y[j];
				j++;
			}
			else
			{	z[k]=x[i];
				i++;
				j++;
			}
		k++;
	}
	while(i<n1)
	{ z[k]=x[i];
	  i++;
	  k++;
	}
	while(j<n2)
	{	z[k]=y[j];
		j++;
		k++;
	}
	return k;
	}
