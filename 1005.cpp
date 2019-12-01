/*

condition 1: 
A + delta * a = x * a * spend
A + delta * b = y * b * spend 

condition 2:
delta * c  = z * c * spend 

z = delta / spend

according to condition 1:
delta * (b - a)  = spend * (b * y - x * a)

delta / spend  = (b * y - x * a) / (b - a)

input: x, a, y, b

*/

#include <stdio.h>

int main()
{
    int x, a, y, b;
    scanf("%d %d %d %d", &x, &a, &y, &b);
    printf("%.2f", (b * (float)y - x * (float)a) / (float)(b - a));
    return 0;
}
