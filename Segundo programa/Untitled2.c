#include <stdio.h>

int main()
{

    int L = 2;
    float h = (3.0f/2)*L;
    float C1 = L*L;
    float C2 = (L*h)/2;
    float C3 = (3.0f/2)*(L)/2;
    float C4 = (L*L)*(1.0f/4)*L;
    float pt = (3.0f/2)*L+(3.0f/2)*L+(3.0f/2)*L+(3.0f/2)*L+(3.0f/2)*L+(L*L)+(1.0f/4)*L+(1.0f/4)*L;
    float at = C1+2*C2+C3+C4;
    printf ("Area total: %.2f\n", at);
    printf ("Perimetro total: %.2f\n", pt);
    return 0;
}
