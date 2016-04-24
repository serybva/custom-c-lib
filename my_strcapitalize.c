/*
** my_strcapitalize.c
**
** Made by Sébastien vray
**
** Started on  Fri Feb 15 19:06:48 2008 Sébastien Vray
** Last update Fri Feb 15 19:07:40 2008 Sébastien Vray
*/
/*
**This function capitalize all the chars in the given string and returns it
*/
char    *my_strcapitalize(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= 'a') &&  (str[i] <= 'z') && (str[i - 1] < 'A' ))
        {
          str[i] = str[i] - 'a' + 'A';
        }
      i++;
    }
  str[i] = '\0';
  return (str);
}
