#include <stdlib.h>
#include <stdio.h>

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

char *concat(int size, char **strs, char *str, char *sep)
{
    int i;
    int j;
    int k;
    int l;

    i = 0;
    j = 0;
    k = 0;
    l = 0;
    while (i < size)
    {
        while (strs[i][j] != '\0')
        {
            str[l] += strs[i][j];
            j++;
            l++;
        }
        if(i < (size - 1))
        {
            while (sep[k] != '\0')
            {
                str[l++] = sep[k];
                k++;
            }
            k = 0;            
        }
        j = 0;
        i++;
    }
    return str;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    int count;
    char *str;
    
    i = 0;
    count = 0;
    if(size <= 0)
        return (NULL);
    while (i < size)
    {
        count += ft_strlen(strs[i]);
        i++;
        if(i < (size - 1))
            count += ft_strlen(sep);
    }
    str = malloc(sizeof(char) * (count + 1));
    if(str == NULL)
        return (NULL);
    str = concat(size, strs, str, sep);
    return str;
}

int main(void)
{
    char *strs[] = {"Hello", "42", "pisciners", "yeah", "teste"};
    int size = 5;
    char *str = ft_strjoin(size, strs, ", ");
    //printf("%s %d\n", strs[0][0], ft_strlen(strs[0]));
    printf("%s\n", str);
    free(str);
    return (0);
}