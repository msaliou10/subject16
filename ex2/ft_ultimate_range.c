#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int *tab;
    int i;

    i = 0;
    if(min >= max)
        return (0);
    tab = malloc(sizeof(int) * (max - min));
    if (tab == NULL)
        return (-1);
    while (min < max)
    {
        tab[i] = min;
        min++;
        i++;
    }
    *range = tab;
    return (i);
}

int main(void)
{
    int *range;
    int size;
    int i;
    int min;
    int max;

    i = 0;
    min = 4;
    max = 10;
    size = ft_ultimate_range(&range, min, max);
    if(range != NULL && size != 0)
    {
        printf("Size: %d\n", size);
         while (i < size)
        {
            printf("%d ", range[i]);
            i++;
        }
    }
    free(range);
    return (0);
}