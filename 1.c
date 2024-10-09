#include<stdio.h>

int main(){
	int size;
	int sum = 0;
	printf("Enter the array size : ");
	scanf("%d",&size);
	int new_array[size];
	printf("Enter you array elements \n");
	
	
	
	for(int i = 0;i < size;i++){
		printf("element  %d : ",(i+1));
		scanf("%d",&new_array[i]);
		sum = sum + new_array[i];
	}
    printf("The sum of array elements is : %d",sum);

    return 0;
}
