SRCS			=	ft_atoi.c\
					ft_isprint.c\
					ft_bzero.c\
					ft_strlcpy.c\
					ft_tolower.c\
					ft_strchr.c\
					ft_strlen.c\
					ft_toupper.c\
					ft_isalnum.c\
					ft_strncmp.c\
					ft_isalpha.c\
					ft_memcpy.c\
					ft_isascii.c\
					ft_memmove.c\
					ft_strrchr.c\
					ft_isdigit.c\
					ft_memset.c\
					ft_strncmp.c\
					ft_strdup.c\
					ft_memchr.c\
					ft_substr.c\
					ft_memcmp.c\
					ft_strnstr.c\
					ft_calloc.c\
					ft_strjoin.c\
					ft_putchar_fd.c\
					ft_putstr_fd.c\
					ft_putendl_fd.c\
					ft_putnbr_fd.c\
					ft_strmapi.c\
					ft_itoa.c\
					ft_striteri.c\
					ft_strlcat.c\
					ft_strtrim.c\
					ft_split.c

SRCS_B			=	ft_lstnew.c\
					ft_lstsize.c\
					ft_lstlast.c\
					ft_lstadd_front.c\
					ft_lstadd_back.c\
					ft_lstdelone.c\
					ft_lstclear.c\
					ft_lstiter.c\
					ft_lstmap.c

HEAD			=	libft.h

OBJS			=	$(SRCS:%.c=$(OBJS_D)%.o)

OBJS_B			=	$(SRCS_B:%.c=$(OBJS_D)%.o)

OBJS_D			=	objs/

NAME			=	libft.a

ARC				=	ar rcs

CC				=	gcc

RM				=	rm -rf

FLAG			=	-Wall -Wextra -Werror

$(NAME)			:	$(OBJS_D) $(OBJS) $(HEAD)
				$(ARC) $(NAME) $(OBJS)

$(OBJS_D)%.o	:	%.c $(HEAD) Makefile
				$(CC) $(FLAG) -c $< -o $@

bonus			:	$(OBJS_D) $(OBJS_B) $(HEAD)
				$(ARC) $(NAME) $(OBJS_B)

all				:	$(NAME)

clean			:
				$(RM) $(OBJS) $(OBJS_B) $(OBJS_D)

fclean			:	clean
				$(RM) $(NAME)

$(OBJS_D)		:
				mkdir -p $(OBJS_D)

re				:	fclean all

.PHONY			:	all clean flean re bonus
