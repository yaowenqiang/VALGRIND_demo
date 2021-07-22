#include <iostream>

void f(long *p2)
{
    long l1 = p2[10];
    long l2 = l1;
    long l3 = l2;
    if (l3)
    {
        std::cout << "Hello\n";
    }

}

int main()
{
    long *p1 = new long[10];
    f(p1);
    delete []p1;
}

