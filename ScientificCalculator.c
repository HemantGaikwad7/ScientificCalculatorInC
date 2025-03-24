#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main() {
    int choice;
    double num1, num2, result, angle;
    
    printf("Scientific Calculator\n");
    printf("--------------------\n");
    
    do {
        printf("\nChoose operation:\n");
        printf("1. Addition\t\t2. Subtraction\n");
        printf("3. Multiplication\t4. Division\n");
        printf("5. Modulus\t\t6. Power\n");
        printf("7. Square Root\t\t8. Exponential (e^x)\n");
        printf("9. Natural Log\t\t10. Base 10 Log\n");
        printf("11. Sine\t\t12. Cosine\n");
        printf("13. Tangent\t\t14. Exit\n");
        printf("Enter choice (1-14): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
                break;
                
            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
                break;
                
            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("%.2lf × %.2lf = %.2lf\n", num1, num2, num1 * num2);
                break;
                
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if(num2 == 0) {
                    printf("Error! Division by zero\n");
                } else {
                    printf("%.2lf ÷ %.2lf = %.2lf\n", num1, num2, num1 / num2);
                }
                break;
                
            case 5:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("%.2lf mod %.2lf = %.2lf\n", num1, num2, fmod(num1, num2));
                break;
                
            case 6:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                printf("%.2lf^%.2lf = %.2lf\n", num1, num2, pow(num1, num2));
                break;
                
            case 7:
                printf("Enter number: ");
                scanf("%lf", &num1);
                if(num1 < 0) {
                    printf("Error! Negative number\n");
                } else {
                    printf("√%.2lf = %.2lf\n", num1, sqrt(num1));
                }
                break;
                
            case 8:
                printf("Enter exponent: ");
                scanf("%lf", &num1);
                printf("e^%.2lf = %.2lf\n", num1, exp(num1));
                break;
                
            case 9:
                printf("Enter number: ");
                scanf("%lf", &num1);
                if(num1 <= 0) {
                    printf("Error! Invalid input\n");
                } else {
                    printf("ln(%.2lf) = %.2lf\n", num1, log(num1));
                }
                break;
                
            case 10:
                printf("Enter number: ");
                scanf("%lf", &num1);
                if(num1 <= 0) {
                    printf("Error! Invalid input\n");
                } else {
                    printf("log₁₀(%.2lf) = %.2lf\n", num1, log10(num1));
                }
                break;
                
            case 11:
                printf("Enter angle in radians: ");
                scanf("%lf", &angle);
                printf("sin(%.2lf) = %.2lf\n", angle, sin(angle));
                break;
                
            case 12:
                printf("Enter angle in radians: ");
                scanf("%lf", &angle);
                printf("cos(%.2lf) = %.2lf\n", angle, cos(angle));
                break;
                
            case 13:
                printf("Enter angle in radians: ");
                scanf("%lf", &angle);
                printf("tan(%.2lf) = %.2lf\n", angle, tan(angle));
                break;
                
            case 14:
                printf("Exiting calculator...\n");
                break;
                
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 14);

    return 0;
}