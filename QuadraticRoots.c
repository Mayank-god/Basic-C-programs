//FIND THE ROOTS OF QUADRATIC EQUATION!
 
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;     // ax2 + bx + c =0
    double discriminant, root1, root2, realPart, imagPart;

    // Step 1: Input coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Step 2: Calculate discriminant
    discriminant = pow(b, 2) - 4 * a * c;
    printf("Step 1: Discriminant = b^2 - 4ac = %.2lf\n", discriminant);

    // Step 3: Check conditions for roots
    if (discriminant > 0) {
        printf("Step 2: Since discriminant > 0, roots are real and distinct.\n");
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root1 = %.2lf\n", root1);
        printf("Root2 = %.2lf\n", root2);
    }
    else if (discriminant == 0) {
        printf("Step 2: Since discriminant = 0, roots are real and equal.\n");
        root1 = root2 = -b / (2 * a);
        printf("Root1 = Root2 = %.2lf\n", root1);
    }
    else {
        printf("Step 2: Since discriminant < 0, roots are complex and different.\n");
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Root1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}