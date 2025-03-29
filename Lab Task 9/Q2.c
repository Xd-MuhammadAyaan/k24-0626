#include <stdio.h>
int findUniqueElements(int arr[], int n, int uniqueArr[]) {
    int i, j, isDuplicate, uniqueCount = 0;
    for (i = 0; i < n; i++) {
        isDuplicate = 0;
        for (j = 0; j < uniqueCount; j++) {
            if (arr[i] == uniqueArr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            uniqueArr[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }
    return uniqueCount; 
}
int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n], uniqueArr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int uniqueCount = findUniqueElements(arr, n, uniqueArr);
    printf("Unique elements: ");
    for (i = 0; i < uniqueCount; i++) {
        printf("%d ", uniqueArr[i]);
    }
    printf("\n");
    
    return 0;
}
