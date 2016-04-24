/*
 * Fetches the next line in the file represented by the given file descriptor
 */
#include "get_next_line.h"

int     my_strlen(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  return (i);
}

char    *my_strncat(char *str1, char *str2, int n)
{
  int   i;
  int   i2;

  i = my_strlen(str1);
  i2 = 0;
  while (n > i2)
    {
      str1[i] = str2[i2];
      i++;
      i2++;
    }
  str1[i] = '\0';
  return (str1);
}

char	*get_next_line(const int fd)
{
  int	reading;
  int	i;
  char	buf[BUFF];
  char	*str;

  reading = BUFF;
  while (reading == BUFF)
    {
      reading = read(fd, buf, BUFF);
      i = 0;
      while ((buf[i] != '\n') && (buf[i + 1] != '\0'))
	{
	  i++;
	}
      str = malloc(my_strlen(str) + ((i + 1) * sizeof(char)));
      str = my_strncat(str, buf, i);
    }
  close(fd);
  free(str);
  return (str);
}
