/*
** my_str_isalpha.c for my_str_isalpha in /u/epitech_2012/vray_s/cu/rendu/lib/my
** 
** Made by Sébastien Vray

** 
** Started on  Fri Feb 15 18:55:48 2008 Sébastien Vray
** Last update Fri Feb 15 18:59:11 2008 Sébastien Vray
*/
/*
**This function returns 1 if the chars of the given string are alphabetical, else it returns 0
*/
int    my_str_isalpha(char *str)
{
  int   i;

  if (str == 0)
    {
      return (1);
    }
  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] < 'A') ||  (str[i] > 'z'))
        {
	  return (0);
        }
      i++;
    }
  return (1);
}
