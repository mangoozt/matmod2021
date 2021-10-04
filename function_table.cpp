#include <iostream>
#include <cmath>

void read_w_prompt(const std::string &prompt, double &variable) {
    std::cout << prompt;
    std::cin >> variable;
}

void read_w_prompt(const std::string &prompt, unsigned int &variable) {
    std::cout << prompt;
    std::cin >> variable;
}

double math_func(double x, double a) {
    return std::sin(x) / (sqrt(std::pow(x, 3) + a));
}

void calculate_print(double x, double a){
    // Calculate  std::sin(x) / (sqrt(std::pow(x, 3) + a));
    double d = std::pow(x, 3) + a;
    std::cout << x << '\t';
    if(d > 0) {
        if(d != 0) {
            std::cout << std::sin(x) / sqrt(d) << std::endl;
        }else{
            std::cout << "x^3 + a == 0" << std::endl;
        }
    }else{
        std::cout << "x^3 + a < 0" << std::endl;
    }
}

struct point2d{
    double x;
    double y;
};

point2d operator+(point2d a, point2d b){
    return point2d{a.x+b.x,a.y+b.y};
}

int main() {
    double a, x1, x2;
    unsigned int n;
    read_w_prompt("a: ", a);
    read_w_prompt("x1: ", x1);
    read_w_prompt("x2: ", x2);
    read_w_prompt("n: ", n);
    double dx=(x2-x1)/(n-1);
    std::cout << "x\ty" << std::endl;
    for(size_t i=0;i<n;++i){
        double x = x1+dx*i;
        calculate_print(x, a);
    }
}