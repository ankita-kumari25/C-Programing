#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        // Print spaces
        for(int j = 1; j <= n - i; j++){
            printf("  ");  // two spaces for alignment
        }
        // Print stars (same number each line)
        for(int k = 1; k <= n; k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}