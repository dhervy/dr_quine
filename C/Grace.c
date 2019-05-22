#include <unistd.h>
#include <stdio.h>

#define TROLL "je suis inutile"
#define STR "#include <unistd.h>%1$c#include <stdio.h>%1$c%1$c#define TROLL %2$cje suis inutile%2$c%1$c#define STR %2$c%4$s%2$c%1$c#define FT()                               %3$c%1$c    int main()                             %3$c%1$c    {                                      %3$c%1$c        FILE *fd;                          %3$c%1$c        fd = fopen(%2$cGrace_kid.c%2$c, %2$cw%2$c);    %3$c%1$c        fprintf(fd, STR, 10, 34, 92, STR); %3$c%1$c        return (0);                        %3$c%1$c    }%1$c%1$cFT()%1$c"
#define FT()                               \
    int main()                             \
    {                                      \
        FILE *fd;                          \
        fd = fopen("Grace_kid.c", "w");    \
        fprintf(fd, STR, 10, 34, 92, STR); \
        return (0);                        \
    }

FT()
