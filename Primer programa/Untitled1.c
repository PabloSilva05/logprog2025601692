#include <stdio.h>

int main()
{

    int x,y;
    x=2;
    y=4;
    float z = ((float)1/x)+((x+y)/(float)3)+(2*((float)x/y));
    printf ("El valor de Z es: %f", z);
    return 0;
}
