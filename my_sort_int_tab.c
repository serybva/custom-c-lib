/*
** my_sort_int_tab.c for my_sort_int_tab in /u/epitech_2012/vray_s/cu/rendu/lib/my
**
** Made by Sébastien Vray

**
** Started on  Fri Feb 15 18:51:29 2008 Sébastien Vray
** Last update Fri Feb 15 18:52:57 2008 Sébastien Vray
*/
/*
**This function sorts a int array
*/
void    my_sort_int_tab(int *tab, int size)
{
  int   i;
  int   flag;

  flag = 1;
  while (flag == 1)
    {
      flag = 0;
      i = 0;
      while (i < size)
        {
          if (tab[i] > tab[i + 1])
            {
              flag = 1;
              my_swap(&tab[i], &tab[i + 1]);
            }
          i++;
        }
    }
}
