/*
** xmalloc.c for xmalloc.c in /u/epitech_2012/vray_s/cu/minishell1
**
** Made by Sébastien Vray

**
** Started on  Wed Feb 20 18:56:41 2008 Sébastien Vray
** Last update Tue Apr 29 14:13:56 2008 Sébastien Vray
*/
/*
* This function mallocs n bytes and returns the pointer associated
* prints an error on stderr on failure
*/
#include <stdlib.h>

void	*xmalloc(int n)
{
  void	*ptr;

  ptr = malloc(n);
  if (ptr == NULL)
    {
      print_err("Malloc couldn't allocate the required memory!\n");
      exit(1);
    }
  return (ptr);
}
