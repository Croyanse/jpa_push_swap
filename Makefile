NAME = push_swap
OBJ = $(SRC:.c=.o)
OBJLIB = $(LIBFT:.c=.o)

SRC	=	push_big.c \
		push_little.c \
		push_med.c \
		algo_big.c \
		utils/utils.c \
		utils/utils2.c \
		utils/utils_ope.c \
		utils/utils_ope2.c \
		utils/utils3.c



MAIN1 = main.c
MAIN2 = main_bonus.c

all: $(NAME)
	

$(NAME) : $(OBJ)
	make -C libft
	gcc -g -Werror -Wall -Wextra main.c $(OBJ) libft/libft.a -o $(NAME)

bonus: $(OBJ)
	make -C libft
	gcc -g -Werror -Wall -Wextra main_bonus.c utils_bonus.c utils/utils_ope_bonus2.c utils/utils_ope_bonus.c libft/libft.a utils/utils2.c utils/utils_bonus.c utils/utils3.c -o checker


.o :.c 
	gcc -c $?

clean:
	rm -f *.o
	rm utils/*.o

fclean: clean
	rm -f $(NAME)
	make fclean -C libft

save1:
	rm -rf /Users/jpaterno/Documents/SAVE1/*
	cp -rf * /Users/jpaterno/Documents/SAVE1/
save2:
	rm -rf /Users/jpaterno/Documents/SAVE2/*
	cp -rf * /Users/jpaterno/Documents/SAVE2/

NUMB =  2 1 3 6 5 90 80 50 40 70 60 30 20
valre:
	make re && clear && valgrind --show-possibly-lost=no --leak-check=yes ./push_swap $(NUMB)

val:
	valgrind --show-possibly-lost=no --leak-check=yes ./push_swap $(NUMB)

fspace:
	rm -rf ~/Library/**.42_cache_bak*; rm -rf ~/**.42_cache_bak; brew cleanup
	wipe


re: fclean all

.PHONY: clean fclean all re
