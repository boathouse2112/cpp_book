#include <iostream>

struct Vector {
    int sz;
    double* elem;
};

void vector_init(Vector& v, int s) {
    v.elem = new double[s]; // allocate an array of s doubles
    v.sz = s;
}

double read_and_sum(int s) {
    Vector v;
    vector_init(v, s); // allocate s elements for v
    for (int i=0; i!=s; ++i)
        std::cin >> v.elem[i]; // read into elements
    double sum = 0;
    for (int i=0; i!=s; ++i)
        sum+=v.elem[i]; // take the sum of the elements
    return sum;
}

int main() {

    std::cout << "Input 3 numbers." << std::endl;
    auto const sum = read_and_sum(3);

    std::cout << "Sum: " << sum << std::endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
