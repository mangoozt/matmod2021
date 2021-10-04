#include <iostream>

int main()
{
    int i = 0;


// > ,< <=, >=, ==, !=
// &&, ||
// !(a > 5) same as a <= 5
// !true=false
//
//
    int c=5;
    int a = 5.0f;

    if(a>4)
        c = 2;
    else
        c=0;

    c= a>4 && a<5  ? 2 : 0;
//        ^   ^   ^
//        |   |    false
//        |    true
//        |
//        expression
    char g = 'g';
    g>'0' && g<'9';
    return 0;
}