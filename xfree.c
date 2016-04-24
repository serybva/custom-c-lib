/*
** xfree.c for xfree.c in /u/epitech_2012/vray_s/cu/minishell1
** 
** Made by Sébastien Vray

** 
** Started on  Wed Feb 20 18:55:40 2008 Sébastien Vray
** Last update Thu May  1 17:29:19 2008 Sébastien Vray
*/
/*
**This function frees the memory at the location pointed by ptr, and sets ptr to NULL
*/

#include <stdlib.h>

void	xfree(void *ptr)
{
  if (ptr != NULL)
    {
      free(ptr);
      ptr = NULL;
    }
}
