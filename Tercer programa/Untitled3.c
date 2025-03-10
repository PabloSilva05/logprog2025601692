#include <stdio.h>
#include <math.h>

int main()
{

    int L = 2;
    float hip = (L*L)+(L*L);
    float C1 = L*L;
    float C2 = (L*L)/2;
    float C3 = (3.0f/2*L)*(L)/2;
    float C4 = (2*L)*(1.0f/4)*(L);
    float pt =sqrt((3.0f/2*L)*(3.0f/2*L)+(L*L))+sqrt(hip)+sqrt(hip)+(3.0f/2*L)+(2*L)+(1.0f/4*L)+(1.0f/4*L)+L;
    float at = C1+2*C2+C3+C4;
    printf ("Area total: %.1f\n", at);
    printf ("Perimetro total: %.2f\n", pt);
    return 0;
}
