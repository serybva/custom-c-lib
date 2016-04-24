/*
** my_strncpy.c for my_strncpy in /u/epitech_2012/vray_s/cu/rendu/lib/my
** 
** Made by Sébastien Vray

** 
** Started on  Fri Feb 15 19:14:47 2008 Sébastien Vray
** Last update Fri Feb 15 19:16:23 2008 Sébastien Vray
*/
/*
**This function copies n characters of the source string in the destination string en returns the result
*/
char    *my_strncpy(char *dest, char *src, int n)
{
  int   i;

  i = 0;
  while (n > 0)
    {
      dest[i] = src[i];
      i++;
      n--;
    }
  dest[i] = '\0';
  return (dest);
}
