FLAG= -Wall -Werror -Wall

COLLEEN_S = Colleen.s
GRACE_S = Grace.s
SULLY_S = Sully.s

COLLEEN_O = $(COLLEEN_S:.s=.o)
GRACE_O = $(GRACE_S:.s=.o)
SULLY_O = $(SULLY_S:.s=.o)

all: Colleen Grace Sully

Colleen: $(COLLEEN_O)
	@nasm -f macho64 COLLEEN_S
	@gcc $(COLLEEN_O) -o Colleen

Grace: $(GRACE_O)
	@nasm -f macho64 GRACE_S
	@gcc $(GRACE_O) -o Grace

Sully: $(SULLY_O)
	@nasm -f macho64 SULLY_S
	@gcc $(SULLY_O) -o Sully

clean:
	@/bin/rm -rf $(SULLY_O) $(GRACE_O) $(COLLEEN_O)

fclean: clean
	@/bin/rm -rf Sully Colleen Grace Sully_* Grace_kid.s

re: fclean all

.PHONY: all clean fclean re
