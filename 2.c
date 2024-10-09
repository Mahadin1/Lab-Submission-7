#include<stdio.h>


int main(){
	int size;
	
	int sum = 0;
	printf("Enter the array size : ");
	scanf("%d",&size);
	int first_array[size];
	printf("Enter you array elements \n");
	
	
	
	for(int i = 0;i < size;i++){
		scanf("%d",&first_array[i]);
    }
    
    printf("Reverse elements are : ");
    for(int i = (size-1);i >= 0;i--){
    
		printf("%d : ",first_array[i]);
	}

    return 0;
	
	
}
