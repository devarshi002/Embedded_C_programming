# include <stdio.h> //---- preprosessor directive

int main() {
    int side;
    printf("Enter side of square: ");
    scanf("%d", &side);
    int area = side * side;
    printf("Area of square: %d\n", area);
    return 0;
}