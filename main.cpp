#include <iostream>
using namespace std;
int add(int a, int b);
int main ()
{
    cout << "Greeting\n";
    cout << "Hello World!\n";
    cout << "The summ of three and four is "<<add(3,4)<< endl;
    return 0;
}

int add (int a, int b)
{
    return (a+b);
}