#include <stdio.h>

  void add(float a, float b);
  void sub(float a, float b);
  void mul(float a, float b); 
  void divide(float a, float b);
  void modulus(int a, int b);

int main() {
    int greet;
    float num1, num2;
    int num1_int, num2_int;  

    
    while(1) {
        
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n");

       
        printf("Enter your choice: ");
        scanf("%d", &greet);

       
        if (greet == 0) {
            printf("Exiting the program.\n");
            break;
        }

        
        if (greet == 5) {
            
            printf("Enter the first number (integer): ");
            scanf("%d", &num1_int);
            printf("Enter the second number (integer): ");
            scanf("%d", &num2_int);
        } else {
            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);
        }

       
        switch(greet) {
            case 1:
                add(num1, num2);
                break;
            case 2:
                subtract(num1, num2);
                break;
            case 3:
                multiply(num1, num2);
                break;
            case 4:
                divide(num1, num2);
                break;
            case 5:
                modulus(num1_int, num2_int);
                break;
            default:
                printf("Invalid choice! Please select a valid option.\n");
                break;
        }
    }

    return 0;
}


void add(float a, float b) {
    printf("Addition of %.2f and %.2f is %.2f\n", a, b, a + b);
}


void subtract(float a, float b) {
    printf("Subtraction of %.2f and %.2f is %.2f\n", a, b, a - b);
}


void multiply(float a, float b) {
    printf("Multiplication of %.2f and %.2f is %.2f\n", a, b, a * b);
}


void divide(float a, float b) {
    if (b != 0) {
        printf("Division of %.2f and %.2f is %.2f\n", a, b, a / b);
    } else {
        printf("Error! Division by zero.\n");
    }
}


void modulus(int a, int b) {
    if (b != 0) {
        printf("Modulus of %d and %d is %d\n", a, b, a % b);
    } else {
        printf("Error! Division by zero.\n");
    }
}
