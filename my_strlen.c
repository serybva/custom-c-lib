/**
 * Returns the length of the given string
 */
int	my_strlen(const char *str)
{
  int   i;

  i = 0;
  if (!str)
    return (0);
  while (str[i] != '\0')
    {
      i++;
    }
  return (i);
}
