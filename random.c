/*
** random.c for function that returns a random nb between min and max in /u/all/vray_s/rendu/math/101vector
** Made by Sébastien Vray

**
** Started on  Sun Nov 11 12:41:44 2007 Sébastien Vray
** Last update Fri Feb 15 18:33:50 2008 Sébastien Vray
*/
/*
* This function return a random number between min and max where seed is a
* abritrary given number that must change at each call
*/
int     randomize(int seed, int min, int max)
{
  int	rep;

  rep = max - min;
  srandom(time (0) * getpid() * seed * 72130 / 1987);
  return (random() % (rep + 1) + min);
}
