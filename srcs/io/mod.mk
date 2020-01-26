SRCS += $(addprefix $(PATHS_IO), \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
get_next_line.c)

PATHS_PRINF = $(addprefix $(PATHS_IO), ft_printf/)

SRCS += $(addprefix $(PATHS_PRINF), \
buffer.c \
usefull_func1.c \
usefull_func2.c \
parser1.c \
parser2.c \
format1.c \
format2.c \
output1.c \
output2.c \
ft_printf.c)

CFLAGS += -I $(addprefix $(INCLUDE), ft_printf/)

$(PATHB)%.o: $(PATHS_IO)%.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(PATHB)%.o: $(PATHS_PRINF)%.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@