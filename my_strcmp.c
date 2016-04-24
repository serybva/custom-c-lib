/*
** my_strcmp.c for my_strcmp in /u/epitech_2012/vray_s/cu/rendu/lib/my
**
** Made by Sébastien Vray

**
** Started on  Fri Feb 15 19:09:56 2008 Sébastien Vray
** Last update Tue Feb 19 18:07:34 2008 Sébastien Vray
*/
/*
**This function returns 0 if the given strings are identical, returns the "distance" between the first non matching chars otherwise
*/
int     my_strcmp(char *s1, char *s2)
{
  int   i;

  i = 0;
  if (my_strlen(s1) <= my_strlen(s2))
    {
      while (s1[i] != '\0')
	{
	  if (s1[i] != s2[i])
	    {
	      return (s1[i] - s2[i]);
	    }
	  i++;
	}
      return (0);
    }
  else
    return (1);
}
