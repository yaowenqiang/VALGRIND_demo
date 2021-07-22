#include <iostream>

void f(long l)
{
    long lb = 1;
    long lc = lb;
    long ld = lc;
    if(lc) {
        std::cout << "Hello\n";
    }
}

int main()
{
    long la;
    f(la);
}
