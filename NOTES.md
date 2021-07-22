 gcc -o child -g -Wextra -Wall child.c -std=c99 -pedantic
 gcc -o parent -g -Wextra -Wall parent.c -std=c99 -pedantic
 valgrind --tool=none --trace-children=yes --log-file=nulgrind.%p.log ./parent
 > c++ -g -o abrw abrw.cpp
 valgrind ./abrw

> --memcheck:track-origins=yes  ./uninit2
