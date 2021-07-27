 gcc -o child -g -Wextra -Wall child.c -std=c99 -pedantic
 gcc -o parent -g -Wextra -Wall parent.c -std=c99 -pedantic
 valgrind --tool=none --trace-children=yes --log-file=nulgrind.%p.log ./parent
 > c++ -g -o abrw abrw.cpp
 valgrind ./abrw

> valgrind --memcheck:track-origins=yes  ./uninit2
> valgrind --memcheck:track-origins=full  ./a
> valgrind  --track-origins=yes  --leak-check=full  ./a
> valgrind --tool=memcheck ls -l
> valgrind  ls -l
> valgrind  -v -v ./a
> valgrind  --log-fd=9  -v -v ./a
> valgrind  --log-file=a.log  -v -v ./a
> valgrind  --log-socket=127.0.0.1:1500  -v -v ./a

> valgrind-listener

> valgrind --gen-suppressions=yes  -v -v ./a
> valgrind --default-suppressions=no --gen-suppressions=yes  -v -v ./a
default suppressions file
> usr/lib/valgrind/default.supp

> https://sourceware.org/elfutils/Debuginfod.html

> valgrind --hel0p-debug


valgrind  -vgdb=yes --vgdb-error=0 ./a
> gdb ./a
> gdb > target remote | vgdb
