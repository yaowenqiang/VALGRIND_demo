#include <iostream>

void f(int *p2)
{
    int i1 = p2[10];
    std::cout << "Hello\n";
}

int main()
{
    int  *p1 = new int[10];
    f(p1);
    delete [] p1;
}
