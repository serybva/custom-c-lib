/**
 * Writes P or N on standard output if the given number is either positive or negative
 */
int     my_isneg(int n)
{
  if (n > 0)
    {
      my_putchar('P');
    }
  else
    {
      my_putchar('N');
    }
  return (0);
}
