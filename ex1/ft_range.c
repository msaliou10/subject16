#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *integer;
    int i;

    i = 0;
    if(min >= max)
        return (NULL);
    integer = malloc(sizeof(int) * (max - min));
    if (integer == NULL)
        return (NULL);
    while (min < max)
    {
        integer[i] = min;
        min++;
        i++;
    }
    return integer;
}

int main(void)
{
    int i;
    int min;
    int max;
    int *result;

    i = 0;
    min = 5;
    max = 10;
    result = ft_range(min, max);
    if(result != NULL)
    {
        while (i < (max - min))
        {
            printf("%d ", result[i]);
            i++;
        }
        free(result);
    }
    return (0);
}