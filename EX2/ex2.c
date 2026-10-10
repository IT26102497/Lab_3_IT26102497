#include <stdio.h>
int main() 
{
    double tk_v; // Takeoff Speed (km/hr)
    double s;    // Distance Travelled (m)
    double v;    // Final Velocity (m/s)
    double t;    // Time (s)
    double a;    //Acceleration (m/s^2)

    printf("Enter the Takeoff Speed (In Kilometers per Hour):");
    scanf("%lf", &tk_v);

    printf("Enter the Distance Traveled (In Meters):");
    scanf("%lf", &s);

    // Convert km/hr to m/s (1 km/hr = 1000 meters / 3600 seconds)
    v = tk_v * 5.0 / 18.0;

    // Using Formulas v = at and s = 1/2 * a * t^2 -> t = (2 * s) / v
    t = (2.0 * s) / v;

    // Acceleration a = v / t
    a = v / t;
   
    printf("Acceleration of the Jet Fighter: %.2f m/s^2\n", a);
    printf("Time to reach takeoff speed: %.2f seconds\n", t);

    return 0;
}


