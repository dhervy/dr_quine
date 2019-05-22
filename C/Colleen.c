#include <stdio.h>
/*
 je suis un commentaire hors du main
*/

void dhervy(void)
{
    return;
}

int main(void)
{
    char *str = "#include <stdio.h>%1$c/*%1$c je suis un commentaire hors du main%1$c*/%1$c%1$cvoid dhervy(void)%1$c{%1$c    return;%1$c}%1$c%1$cint main(void)%1$c{%1$c    char *str = %3$c%2$s%3$c;%1$c    printf(str, 10, str, 34);%1$c    /*%1$c        je suis un commentaire dans le main%1$c    */%1$c    dhervy();%1$c    return (0);%1$c}";
    printf(str, 10, str, 34);
    /*
        je suis un commentaire dans le main
    */
    dhervy();
    return (0);
}