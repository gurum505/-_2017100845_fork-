#include <iostream>

int main()
{
    int n = 8; //n=8--> n=9
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            std::cout << i << " * " << j << "= " << i * j << std::endl;
        }
        std::cout << "----------" << std::endl;
    }
    std::cout << "Hello World!\n";
}
