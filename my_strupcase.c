/*
** my_strupcase.c for  my_strupcase in /u/epitech_2012/vray_s/cu/rendu/lib/my
** 
** Made by Sébastien Vray

** 
** Started on  Fri Feb 15 19:20:30 2008 Sébastien Vray
** Last update Fri Feb 15 19:23:01 2008 Sébastien Vray
*/
/*
**This function searches for lowercase caracters in the given string and capitalize them, then it returns the str
*/
char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= 'a') && (str[i] <= 'z'))
	{
	  str[i] = str[i] - 'a' + 'A';
	}
      i++;
    }
  str[i] = '\0';
  return (str);
}
