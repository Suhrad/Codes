#include<stdio.h>
#include<conio.h>


void rotate(int a[10],int d,int n)
{
	int q=d;
	while(q<=n)
	{ 
		static int j=0;
		int i=0;
		int temp=a[i];
		while(i<n)
		{
		a[i]=a[i+1];
		i++;
		}
		a[i]=temp;
				j++;
		q++;
		
	}
}
void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}



int main()
{
	
	int a[10]={1,2,3,4,5,6,7,8,9,10},i,j,n=10,d;
	printf("Enter the no. from which you want to reverse the string\n");
	scanf("%d",&d);
	d=n-d;
	rotate(a,0,d-1);
	rotate(a,d,n-1);
	rotate(a,0,n-1);
	print(a,n);
}
