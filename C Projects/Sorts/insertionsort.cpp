#include <stdio.h>
# define MAX 100	
	
 void insertionsort(int arr[],int size){
 	int i,j;
 	int pivot;
 	
 	for(i=1;i<size;i++){
 		pivot = arr[i];
 		j = i-1;
 		
 		while (j >=0 && arr[j]>pivot){
 			arr[j+1]=arr[j];
 			j--;
		 }
 		
 		arr[j+1]=pivot;
	 }
 	
 	
 }
 
 
 
 
 
int main(){
	

	
	int array[MAX];
	int size;
	
	printf("Kac elemanli olsun ");
	scanf("%d",&size);
	
	for(int i = 0 ; i < size ; i++){
		
		scanf("%d",&array[i]);
	}
	
	
	insertionsort(array,size);
	
	for(int i = 0 ; i < size ; i++){
		
		printf("%d \t",array[i]);
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
