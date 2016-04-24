/*
** my_strncat.c for my_strncat in /u/epitech_2012/vray_s/cu/minishell1
**
** Made by Sébastien Vray
**
** Started on  Fri Feb 22 17:08:52 2008 Sébastien Vray
** Last update Fri Feb 22 17:08:59 2008 Sébastien Vray
*/
/**
 * Concatenates the given string str1 with str2 and stops after n chars
 */
char    *my_strncat(char *str1, char *str2, int n)
{
  int   i;
  int   i2;

  i = my_strlen(str1);
  i2 = 0;
  while (n > i2)
    {
      str1[i] = str2[i2];
      i++;
      i2++;
    }
  str1[i] = '\0';
  return (str1);
}
