/*
** my_swap.c for my_swap in /u/epitech_2012/vray_s/cu/rendu/lib/my
**
** Made by Sébastien Vray

**
** Started on  Fri Feb 15 19:23:30 2008 Sébastien Vray
** Last update Fri Feb 15 19:24:00 2008 Sébastien Vray
*/
/*
* This function swaps the values of the two given arguments
*/
void     my_swap(int *a, int *b)
{
  int   c;

  c = *a;
  *a = *b;
  *b = c;
}
