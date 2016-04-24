/*
** my_strncmp.c for my_strncmp in /u/epitech_2012/vray_s/cu/rendu/lib/my
** 
** Made by Sébastien Vray

** 
** Started on  Fri Feb 15 19:12:49 2008 Sébastien Vray
** Last update Fri Feb 15 19:14:23 2008 Sébastien Vray
*/
/*
**This function compares two string until the character n is reached, and returns 0 if they are identical else it returns 1
*/
int     my_strncmp(char *s1, char *s2, int n)
{
  int   i;

  i = 0;
  while (n != 0)
    {
      if (s1[i] != s2[i])
        {
          return (s1[i] - s2[i]);
        }
      i++;
      n--;
    }
  return (0);
}
