// It is best to use unique_ptr when we want a single pointer to an object that will be reclaimed when that single pointer is destroyed

#include <iostream>
#include <memory>

class A {
public:
    void show() {
        std::cout << "A::show()" << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    std::unique_ptr<A> p1 {new A};
    p1->show();

    // Returns the memory address of p1
    std::cout << p1.get() << std::endl;

    // Transfers ownership to p2
    std::unique_ptr<A> p2 {std::move(p1)};
    p2->show();

    std::cout << p1.get() << std::endl;
    std::cout << p2.get() << std::endl;

    // Transfers ownership to p3
    std::unique_ptr<A> p3 {std::move(p2)};
    p3->show();

    std::cout << p1.get() << std::endl;
    std::cout << p2.get() << std::endl;
    std::cout << p3.get() << std::endl;
    
    return 0;
}
