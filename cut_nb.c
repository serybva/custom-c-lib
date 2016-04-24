/*
** cut_nb.c for  in /u/epitech_2012/vray_s/cu/rendu/lib/my
**
** Made by Sébastien Vray
**
** Started on  Tue Jan 15 18:17:41 2008 Sébastien Vray
** Last update Fri Feb  1 00:18:52 2008 Sébastien Vray
*/
/*
**These functions limit the precision of a floating point number
*/

float	cut_float(float nb, int pre)
{
  int	tmp;
  int	mul;
  float	res;

  mul = 1;
  while (pre != 0)
    {
      mul *= 10;
      pre--;
    }
  nb *= mul;
  tmp = nb;
  nb = tmp;
  res = nb / mul;
  return (res);
}

double		cut_double(double nb, int pre)
{
  int		tmp;
  int		mul;
  double	res;

  mul = 1;
  while (pre != 0)
    {
      mul *= 10;
      pre--;
    }
  nb *= mul;
  tmp = nb;
  nb = tmp;
  res = nb / mul;
  return (res);
}
