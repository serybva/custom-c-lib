/*
** my_strcat.c for my_strcat in /u/epitech_2012/vray_s/cu/rendu/lib/my
** 
** Made by Sébastien Vray

** 
** Started on  Fri Feb 15 19:08:11 2008 Sébastien Vray
** Last update Wed Apr 30 23:47:20 2008 Sébastien Vray
*/
/*
**This functions appends str2 to str1 and returns str1
*/
char	*my_strcat(char *str1, char *str2)
{
  int	i;
  int	i2;

  i = my_strlen(str1);
  i2 = 0;
  while (str2[i2] != '\0')
    {
      str1[i] = str2[i2];
      i++;
      i2++;
    }
  str1[i] = '\0';
  return (str1);
}
