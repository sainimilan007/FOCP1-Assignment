#include <stdio.h>

int main() {
    float x, y;

    
    printf("Enter the coordinates (x, y): ");
    scanf("%f %f", &x, &y);

   
    printf("\nPoint entered: (%.2f, %.2f)\n", x, y);

    if (x > 0 && y > 0)
        printf("The point lies in the First Quadrant (Quadrant I).\n");
    else if (x < 0 && y > 0)
        printf("The point lies in the Second Quadrant (Quadrant II).\n");
    else if (x < 0 && y < 0)
        printf("The point lies in the Third Quadrant (Quadrant III).\n");
    else if (x > 0 && y < 0)
        printf("The point lies in the Fourth Quadrant (Quadrant IV).\n");
    else if (x == 0 && y == 0)
        printf("The point lies at the Origin.\n");
    else if (x == 0)
        printf("The point lies on the Y-axis.\n");
    else if (y == 0)
        printf("The point lies on the X-axis.\n");

    return 0;
}