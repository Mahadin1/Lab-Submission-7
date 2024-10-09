#include<stdio.h>

int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    
    int array[size];
    
    printf("Enter array elements (0 to %d):\n", size - 1);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }


    int count[size];
    for (int i = 0; i < size; i++) {
        count[i] = 0; 
    }
    for (int i = 0; i < size; i++) {
        count[array[i]]++;
    }
    printf("Numbers in array that occur more than once: ");
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (count[i] > 1) {
            printf("\n%d ", i);
            found = 1;
        }
    }

    if (found == 0) {
        printf("None");
    }
    
    return 0;
}
