CNAME = client
SNAME = server
CC = gcc
CFLAGS = -Wall -Wextra -Werror

CSRC = client.c ft_error.c
SSRC = server.c ft_error.c

all : $(CNAME) $(SNAME)

$(CNAME) :
	$(CC) $(CFLAGS) $(CSRC) -o $(CNAME)
$(SNAME) :
	$(CC) $(CFLAGS) $(SSRC) -o $(SNAME)

clean : 
	rm -rf $(CNAME)
	rm -rf $(CNAMEb)
fclean : clean

re : fclean all

.PHONY : all clean fclean re
