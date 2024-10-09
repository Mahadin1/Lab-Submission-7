#include<stdio.h>


int main(){
	int size;
	printf("Enter array size : ");
	scanf("%d",&size);
	int array[size];
	
	printf("Enter array elements : ");
	for(int i = 0;i < size;i++){
		scanf("%d",&array[i]);
	}
	int min, max;
	min = array[0];
	max = array[0];
	
	for(int i = 0;i < size;i++){
		if(array[i] < min){
			min = array[i];
		}else if(array[i] > max){
			max = array[i];
		}
	}
	printf("max is : %d\n",max);
	printf("min is : %d",min);
	
	
	
	return 0;
}
