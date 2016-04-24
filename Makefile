CC	=	gcc -c
SRC	=	my_getnbr.c\
		my_isneg.c\
		my_is_prime.c\
		my_is_prime_sup.c\
		my_power_rec.c\
		my_putchar.c\
		my_putnbr_base.c\
		my_put_nbr.c\
		my_putstr.c\
		my_revstr.c\
		my_showmem.c\
		my_showstr.c\
		my_sort_int_tab.c\
		my_square_root.c\
		my_strcapitalize.c\
		my_strcat.c\
		my_strcmp.c\
		my_strcpy.c\
		my_str_isalpha.c\
		my_str_islower.c\
		my_str_isnum.c\
		my_str_isprintable.c\
		my_str_isupper.c\
		my_strlcat.c\
		my_strlen.c\
		my_strlowcase.c\
		my_strncat.c\
		my_strncmp.c\
		my_strncpy.c\
		my_strstr.c\
		my_strupcase.c\
		my_swap.c\
		my_putstr_len.c\
		my_nbrlen.c\
		cut_nb.c\
		random.c\
		xfree.c\
		xmalloc.c\
		size_of_ptr_tab.c\
		my_strdup.c\
		xcalloc.c\
		print_err.c\
		xrecalloc.c\
		xrealloc.c
OBJ	=	$(SRC:.c=.o)
NAME	=	libmy_${HOSTTYPE}.a
CFLAGS	+=	-W -Wall -Werror -pedantic

all:
		$(CC) $(SRC)
		ar r $(NAME) *.o 
		ranlib $(NAME)
clean:
		rm -f *~
		rm -f *o

fclean: clean
	rm -f $(NAME)

re: fclean all
