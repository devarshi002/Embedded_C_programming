# include<stdio.h>
int main() {
    int a, b;
    printf("Enter first integers: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);

    int sum = a + b;
    printf("Sum: %d\n", sum);
    return 0;
    
}