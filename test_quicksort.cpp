#include<stdio.h>
void nhapmang(int m[],int &n)
{
	scanf("%d",&n);
	for(int i = 0; i < n; i++ )
	scanf("%d",&m[i]);
}
void xuatmang(int m[],int n)
{
	for(int i=0;i<n;i++)
	printf("%d ",m[i]);
}
void quicksort(int m[],int left,int right)
{
	if(left>=right) return ;
	int pivot=m[(left+right)/2];
	int i=left,j=right;
	do
	{
		while (m[i]<pivot) i++;
		while (m[j]>pivot) j--;
		if(i<=j)
		{
			int tg=m[i];
			m[i]=m[j];
			m[j]=tg;
			i++;
			j--;
		}
	}
	while(i<j);
	quicksort(m,left,j);
	quicksort(m,i,right);
	
}
int main ()
{
	int m[100005],n;
	nhapmang(m,n);
	quicksort(m,0,n-1);
	xuatmang(m,n);
}
