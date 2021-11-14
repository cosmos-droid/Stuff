#include<stdio.h>
#include<stdlib.h>
#define MAX 100


void selectionsort(int arr[],int size){
	int i,j;
	int min;
	
	for(i=0 ; i < size ; i++){
		min =i ; 
		for(j=i+1 ; j < size ; j++){
			if(arr[j]<arr[min]){
				min = j;
			}
		}
	}
	int temp = arr[i];
	arr[i]=arr[min];
	arr[min]=temp;
	
	
}


int main(){
	
	int array[MAX];
	int size;
	
	printf("Kac elemanli olsun ");
	scanf("%d",&size);
	
	for(int i = 0 ; i < size ; i++){
		
		scanf("%d",&array[i]);
	}
	
	
	selectionsort(array,size);
	
	for(int i = 0 ; i < size ; i++){
		
		printf("%d \t",array[i]);
	}
	
	
	return 0;
}
