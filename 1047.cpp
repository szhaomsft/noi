#include <stdio.h>

int main()
{
    int a;
    int div[3];
    int b[3];

    scanf("%d", &a);

    b[0] = 3;
    b[1] = 5;
    b[2] = 7;

    int i;
    for (i = 0; i < 3; i++)
    {
        div[i] = a % b[i];
    }

    // this is a flag to tell if 3, 5, 7 can divide it
    int flag = 0;
    for (i = 0; i < 3; i++)
    {
        if (div[i] == 0)
        {
            if (flag != 0)
            {
                printf(" ");
            }

            printf("%d", b[i]);
            flag = 1;
        }
    }

    if (flag == 0)
    {
        printf("n");
    }

    return 0;
}
