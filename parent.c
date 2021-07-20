//parent.c
#include <stdlib.h>
int main(void)
{
    //system("./child");
    system("valgrind --tool=none --log-file=child.%p.log ./child");
}

