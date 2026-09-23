#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strdup(char *src)
{
    char *copy;
    int i;

    i = 0;
    copy = malloc(sizeof(char) * (ft_strlen(src) + 1));
    if (copy == NULL)
    {
        return (0);
    }
    while (src[i])
    {
        copy[i] = src[i];
        i++;
    }
    copy[i] = '\0';
    return copy;
}

int main(void)
{
    char src[] = "Hello world";
    char *copy;
    copy = ft_strdup(src);
    printf("%s\n", copy);
    free(copy);
    return (0);
}