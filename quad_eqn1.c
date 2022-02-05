#include <math.h>
#include <stdio.h>
int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: \n");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;
    if(a==0 && b==0){
        printf("Invalid Inputs");
    }
    else if (a==0){
        printf("Linear Equation\n");
        root1=-b/c;
        printf("root=%.2f\n",root1);
    }
    else if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2f and root2 = %.2f\n", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2f\n", root1);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
} 