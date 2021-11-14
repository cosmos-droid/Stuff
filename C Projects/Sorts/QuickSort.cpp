#include <stdio.h>
#include <stdlib.h>


int Bolme(int A[],int start , int end)
{

int pivot = A[end];
int kontrolindex = start;
int temp;


for(int i=start; i<=end ; i++)
{

if(A[i] < pivot)
{

temp = A[kontrolindex];	
A[kontrolindex]=A[i];
A[i]=temp;

kontrolindex++;
}

}

temp = A[end];
A[end]=A[kontrolindex];
A[kontrolindex]=temp;

return kontrolindex;
	
}

void sort (int B[],int start ,int end )
{
if(start < end)
{

int kontrolindexy = Bolme(B,start,end);
sort(B,start,kontrolindexy-1);
sort(B,kontrolindexy+1,end);
}
	
	
}


int main()
{
	
	int S[5]={0,7,2,6,4};
	sort(S,0,4);
	
	for(int j= 0 ; j<5 ; j++)
	{
	printf("%d",S[j]);	
	}

	
	
	
	return 0;
}
