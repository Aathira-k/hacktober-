#include<stdio.h>
int main()
{
	int n,A[20],B[20],C[20],sw=0,st=0,AW,AT;
	printf("input the no. of process");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("input burst time for p %d ",i);
		scanf("%d",&A[i]);
	}
	B[0]=0;
	
	for(int j=1;j<n;j++)
	{
		B[j]=A[j-1]+B[j-1];

	}
	for(int j=0;j<n;j++)
	{
		C[j]=A[j]+B[j];
	}
	
	for(int i=0;i<n;i++)
	{
		sw+=B[i];
		AW=sw/n;
	}
	printf("average waiting time is %d",AW);
	for(int i=0;i<n;i++)
	{
		st+=C[i];
		AT=st/n;
	}
	printf("average turnaround time is %d",AT);
}
			
