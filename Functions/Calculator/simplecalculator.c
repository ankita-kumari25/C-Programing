#include<stdio.h>
int main(){
    int n1,n2, choice;
    printf("Enter two number :");
    scanf("%d %d",&n1, &n2);
    printf("1. Addition\n 2. Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Sum: %d",n1+n2);
            break;
        case 2:
              printf("Difference: %d",n1-n2);
            break;  
         case 3:
              printf("Product: %d",n1*n2);
            break;  
        case 4:
              printf("Division: %d",n1/n2);
            break;   
            if(n2!=0)
              printf("Quotient :%d",n1/n2);
            else
                printf("Error! Division by zero is not allowed");
            break;
        default:
               printf("Error! Invalid choice");         
            
    }
    return 0;
}