#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%.3f%%", 100.0f * b / a);
    return 0;
}
