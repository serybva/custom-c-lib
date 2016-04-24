/*
** xrecalloc.c for xrecalloc in /u/epitech_2012/vray_s/cu/lib
**
** Made by Sébastien Vray

**
** Started on  Mon Feb 25 16:51:01 2008 Sébastien Vray
** Last update Wed Apr 30 23:36:59 2008 Sébastien Vray
*/
/*
* This function reallocs the memory at the address specified by ptr and sets it to zero
*/
#include <stdlib.h>

void	*xrecalloc(void *ptr, int n)
{
  void	*new_ptr;

  new_ptr = (void *)xcalloc(n);
  if (new_ptr == NULL)
    {
      print_err("Couldn't allocate memory!\n");
      exit(1);
    }
  xfree(ptr);
  ptr = new_ptr;
  return (ptr);
}
