/*
** xrealloc.c for xrealloc in /u/epitech_2012/vray_s/cu/lib
** 
** Made by Sébastien Vray

** 
** Started on  Mon Feb 25 16:52:40 2008 Sébastien Vray
** Last update Wed Apr 30 23:37:48 2008 Sébastien Vray
*/
/*
**This functions realloc the memory for n bytes at the adress specified by ptr
*/
#include <stdlib.h>

void	*xrealloc(void *ptr, int n)
{
  void	*new_ptr;

  new_ptr = (void *)xmalloc(n);
  if (new_ptr == NULL)
    {
      print_err("Cannot allocate memory!\n");
      exit(1);
    }
  xfree(ptr);
  return (new_ptr);
}
