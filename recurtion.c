#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    /*
     * Take length and breadth as input from user using scanf
     */
    printf("Enter length of Rectangle\n");
    scanf("%f", &length);
    printf("Enter width of Rectangle\n");
    scanf("%f", &width);

    perimeter = 2 * (length + width);
    printf("Perimeter of Rectangle : %f\n", perimeter);

    /* Area of Rectangle = length x width */
    area = length * width;
    printf("Area of Rectangle : %f\n", area);

    return 0;
}
