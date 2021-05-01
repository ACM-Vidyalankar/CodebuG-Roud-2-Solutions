#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    int numberOfSwaps = 0;
        // Changed from 'i--' to 'i++'
        for (int i = 0; i < n; i++) {

            for (int j = 0; j < n - 1; j++) {
                //changed from '>=' to '>'
                if (a[j] > a[j + 1]) {
                    int temp=a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                    numberOfSwaps++;
                }
            }
            //changed from '!=' to '=='
            if (numberOfSwaps == 0) {
                break;
            }
        }
        printf("Array is sorted in %d swaps.\n", numberOfSwaps);
        printf("First Element of sorted array: %d\n", a[0]) ;
        printf("Last Element of sorted array: %d\n", a[n-1]);

    return 0;
}