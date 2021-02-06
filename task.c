
#include <stdio.h>

int main()
{
    int data, i, j;

    /* Input data from user
     */
    printf("Input: ");
    scanf("%d", &data);

    for(i=1; i<=data; i++)
    {
        for(j=data; j>data-i; j--)
        {
            printf("%d", j);
        }

        for(j=1; j<=data-i; j++)
        {
            printf("%d", (data - i + 1));
        }

        printf("\n");
    }

    return 0;
}
