/*
** size_of_ptr_tab.c for size_of_ptr_tab in /u/epitech_2012/vray_s/cu/minishell1
**
** Made by Sébastien Vray

**
** Started on  Wed Feb 20 18:53:20 2008 Sébastien Vray
** Last update Sat Feb 23 19:25:55 2008 Sébastien Vray
*/
/*
**This function return the future size of the future pointer tab each time str[i] matches the separator size is increased by 1:
**Eg:
**For this string: "Foo:foo", the size will be 2 if the separator is ':'
*/

int	size_of_ptr_tab(char *str, int start, char separator)
{
  int	i;
  int	lines;

  lines = 0;
  i = start;
  while (str[i] |= '\0')
    {
      if (str[i] == separator)
        lines++;
      i++;
    }
  return (lines + 1);
}
