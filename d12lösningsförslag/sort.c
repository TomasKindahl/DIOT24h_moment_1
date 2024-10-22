#include <stdlib.h>
#include <stdio.h>

void insertionSort(int arr[], int n) {  
    int i, key, j;  
    for (i = 1; i < n; i++) {  
        key = arr[i];  
        j = i - 1;  
  
        while (j >= 0 && arr[j] > key) {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}  

int main(int argc, char **argv) {
    char nums[10];
    printf("Hur många tal vill du mata in? ");
    fgets(nums, 10, stdin);
    int num = atoi(nums);
    int iarr[num];
    for(int i = 0; i < num; i++) {
	    printf("Ange tal %d: ", i+1);
	    fgets(nums, 10, stdin);
        iarr[i] = atoi(nums);
    }
    printf("---- sorteras ----\n");
    insertionSort(iarr, num);
    for(int i = 0; i < num; i++) {
	    printf("tal %d: %d\n", i+1, iarr[i]);
    }
    return 0;
}