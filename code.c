#include<stdio.h>
int main(){
    int n, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        if(i % 3 == 0 && i % 5 == 0)
            sum += i;
    }
    
    printf("Sum of multiples of 3 and 5 up to %d is: %d\n", n, sum);

    return 0;
    // End of program
}