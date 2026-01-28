//Place your needed include statements here (This is roughly the equivelent of libraries in python)
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  //Place your solution code here
  int  n;
  int *arr = NULL;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("No elements to process\n");
        return 0;
    }

    arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        perror("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    arr = NULL;

    return 0;
 }
