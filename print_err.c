/*
**This function print a message on stderr
*/
void	print_err(char *str)
{
  write(2, str, my_strlen(str));
}
