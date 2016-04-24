/*
** my_putstr_len.c for my_putstr_len in /u/epitech_2012/vray_s/cu/rendu/lib/my
** 
** Made by Sébastien Vray

** 
** Started on  Fri Feb 15 18:42:22 2008 Sébastien Vray
** Last update Fri Feb 15 18:44:56 2008 Sébastien Vray
*/
/*
**This function prints a char string on the stdout from start to end, if and is equal to 0 all chars will be printed
*/
void     my_putstr_len(int start, char *str, int end)
{
  if (end == 0)
    {
      my_putstr(str);
    }
  while ((str[start] != '\0') && end != 0)
    {
      write(1,&str[start],1);
      start++;
      end--;
    }
}
