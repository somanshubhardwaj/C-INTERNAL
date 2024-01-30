#include <stdio.h>
int main()
{
    int value;
    for (int i = 0; i <= 10; i++)
    {
        value = 5 * i;
        printf("5X%d=%d ", i, value);
    }
    return 0;
}