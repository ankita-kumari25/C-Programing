#include<stdio.h>
int main() {
    int arr[99];
    int sum = 0;
    printf("Enter 99 numbers between 1 to 100:\n");
    for(int i = 0; i < 99; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int expectedSum = (100 * 101) / 2;
    int missing = expectedSum - sum;
    printf("Missing number is: %d\n", missing);
    return 0;
}
