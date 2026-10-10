#include <stdio.h>
#include <math.h>
int main() 
{
    double A; // Area of the Sail in Square Meters
    double H; // Height of the Sail in Meters
    double B; // Base of the Sail in Meters

    printf("Enter the Area of the Sail(In Square Meters):");
    scanf("%lf", &A);

    // Base = (2/3) * height. Therefore  Area = (1/3) * height^2
    H = sqrt(3.0 * A);
    B = (2.0 / 3.0) * H;

    printf("Height of the Sail: %.2f meters\n", H);
    printf("Base of the Sail: %.2f meters\n", B);

    return 0;
}
