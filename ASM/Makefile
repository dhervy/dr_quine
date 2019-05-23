FLAGS =  -Wall -Wextra -Werror
NASMFLAGS = -f macho64
NASM = /usr/local/bin/nasm

COLLEEN_S = Colleen.s
GRACE_S = Grace.s
SULLY_S = Sully.s

COLLEEN_O = $(COLLEEN_S:.s=.o)
GRACE_O = $(GRACE_S:.s=.o)
SULLY_O = $(SULLY_S:.s=.o)

all: Colleen Grace Sully

Colleen: $(COLLEEN_O)
	@gcc $(COLLEEN_O) -o Colleen

Grace: $(GRACE_O)
	@gcc $(GRACE_O) -o Grace

Sully: $(SULLY_O)
	@gcc $(SULLY_O) -o Sully

%.o: %.s
	$(NASM) $(NASMFLAGS) -o $@ $<

clean:
	@/bin/rm -rf $(SULLY_O) $(GRACE_O) $(COLLEEN_O)

fclean: clean
	@/bin/rm -rf Sully Colleen Grace Sully_* Grace_kid.s

re: fclean all

.PHONY: all clean fclean re
