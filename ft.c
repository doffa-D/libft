#include<stdio.h>
#include<stdlib.h>

size_t    ft_strlen(const char *str)
{
    int    i;

    i = 0;
    while (str[i] != 0)
        i++;
    return (i);
}
char *ft_substr(char const *s, unsigned int start, size_t len)
{
  size_t i;
  char *b;
  
  i = 0;
  b = malloc(sizeof(char) * (len + 1));
  if(b == 0)
    return 0;
  while(i < len && start < ft_strlen(s))
  {
    b[i] = s[start];
    i++;
    start++;
  }
  b[i] = '\0';
  return (b);

}
char    *ft_strchr(const char *s, int c)
{
    int    i;

    i = 0;
    while (s[i] != 0 && c != s[i])
        i++;
    if (s[i] == c)
        return ((char *) &s[i]);
    return (0);
}
char    *ft_strtrim(char const *s1, char const *set)
{
    int    i;
    int s1ln;

    s1ln = ft_strlen(s1) - 1;
    if (!s1 || !set)
        return (0);
    while (*s1 && ft_strchr(set, *s1))
        s1++;
    i = ft_strlen(s1);
    while (i && ft_strchr(set, s1[i]))
        i--;
    if(i>s1ln){
        return (ft_substr(s1,i,0));
    }
    return (ft_substr(s1, 0, i + 1));
}

char **ft_split(char const *s, char c)
{
    char  *z;
    char  *a;
    int     i = 0;
    size_t n;
    size_t n;
    z = ft_strtrim(s,&c);
    n = ft_strlen(z);
    while (i++ < 3)
    {
        a = ft_strchr(&c, *z);
        n = n - ft_strlen(a);
        char *c = ft_substr(z, 0, n);
        printf("#%s#\n", c);
        z++;
        a++;
    }
    return (NULL);
}
int main()
{
    ft_split("       hello jjj j  ",' ');
}