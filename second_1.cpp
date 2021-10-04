#include <iostream>

int* f(double a, double *number, double *remainder) {
    int a_ = (int) a;
    *number=a_;
    *remainder = a - *number;
    return &a_;
}

int main() {
    double a, n, r;
    double* ptr;
    std::cin >> a;

    int* a_ = f(a, &n, &r);
    f(.9, &n, &r);
    ptr = &a;

    std::cout << n << " " << r << std::endl;
    std::cout << "n " << n << std::endl;
    std::cout << "a_ " << a_ << std::endl;
    std::cout << "*a_ " << *a_ << std::endl;
    std::cout << "&n " << &n << std::endl;
    std::cout << "ptr " << ptr << std::endl;
    std::cout << "&ptr " << &ptr << std::endl;
    std::cout << "*ptr " << *ptr << std::endl;
    std::cout << "a " << a << std::endl;
    std::cout << "&a " << &a << std::endl;


    return 0;
}
