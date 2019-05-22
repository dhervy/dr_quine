#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <unistd.h>

#define STR "#include <stdio.h>%1$c#include <strings.h>%1$c#include <stdlib.h>%1$c#include <unistd.h>%1$c%1$c#define STR %2$c%5$s%2$c%1$c%1$cint main()%1$c{%1$c    FILE *fd;%1$c    int i;%1$c    char name[1024];%1$c    char path[1024];%1$c    char make[1024];%1$c    char execute[1024];%1$c    i = %3$d;%1$c    sprintf(path, %2$cSully_%4$cd.c%2$c, i);%1$c    fd = fopen(path, %2$cw%2$c);%1$c    fprintf(fd, STR, 10, 34, i - 1, 37, STR);%1$c    sprintf(name, %2$cSully_%4$cd%2$c, i);%1$c    fclose(fd);%1$c    sprintf(make, %2$cgcc -o %4$cs %4$cs%2$c, name, path);%1$c    system(make);%1$c    if (i)%1$c    {%1$c        sprintf(execute, %2$c./%4$cs%2$c, name);%1$c        system(execute);%1$c    }%1$c    return (0);%1$c}%1$c"

int main()
{
    FILE *fd;
    int i;
    char name[1024];
    char path[1024];
    char make[1024];
    char execute[1024];
    i = 5;
    sprintf(path, "Sully_%d.c", i);
    fd = fopen(path, "w");
    fprintf(fd, STR, 10, 34, i - 1, 37, STR);
    sprintf(name, "Sully_%d", i);
    fclose(fd);
    sprintf(make, "gcc -o %s %s", name, path);
    system(make);
    if (i)
    {
        sprintf(execute, "./%s", name);
        system(execute);
    }
    return (0);
}
