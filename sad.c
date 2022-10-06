#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int ftstrchr(char c,char const *set)
{
    int j=0;
        while(set[j])
        {
            if(set[j]==c)
                return 1;
            j++;
        }
        return 0;
}
char *ft_strtrim(char const *s1, char const *set)
{
    char *b;
    int i;
    int s1ln;

    i = 0;
    if(s1 == NULL)
        return (NULL);
    if(set == 0)
      return (char *)s1;
    s1ln = ft_strlen(s1) - 1;
    while(ftstrchr(s1[i],set))
        i++;
    while(ftstrchr(s1[s1ln],set) && s1ln>0)
        s1ln--;
    if(i>s1ln){
        return (ft_substr(s1,i,0));
    }
    b= ft_substr(s1,i,s1ln-i +1);
    return (b);
}
int main()
{

        char c = '+';
    printf("#%s#",ft_strtrim("++++++hello jjj j+++",&c));
}