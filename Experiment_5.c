#include <stdio.h>

int main() {
    int age = 18;                
    float price = 99.50;         
    double salary = 55000.75;  
    char grade = 'A';   

    printf("Integer (int) value = %d\n", age);
    printf("Float (float) value = %.2f\n", price);
    printf("Double (double) value = %.4lf\n", salary);
    printf("Character (char) value = %c\n", grade);

    return 0;
}