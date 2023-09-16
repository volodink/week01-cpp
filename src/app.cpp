#include <iostream>

// #define DEBUG

class Application {
    public:
        int run() {
            #ifdef DEBUG
                std::cout << "DEBUG is ON" << std::endl;
            #endif
            std::cout << "Enter height: ";
            double height;
            std::cin >> height;
            std::cout << "Enter base: ";
            double base;
            std::cin >> base;
            double area = 1.0/2.0 * base * height;
            std::cout << "Area: " << area << std::endl;
            return 0;
        };
};

int main(int argc, char** argv) {
    Application application;
    int result = application.run();
    return result;
}
