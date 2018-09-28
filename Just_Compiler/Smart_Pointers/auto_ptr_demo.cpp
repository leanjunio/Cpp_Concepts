#include <iostream>
#include <memory>

class A {
public:
    void show() { std::cout << "A::show()" << std::endl; }
};

int main(int argc, char const *argv[])
{
    // p1 is an auto_ptr of type A
    std::auto_ptr<A> p1 {new A};
    p1->show();

    // Returns the memory address of p1
    std::cout << p1.get() << std::endl;

    // Copy constructor called, this makes p1 empty
    std::auto_ptr<A> p2 {p1};
    p2->show();

    // p1 is empty now
    std::cout << p1.get() << std::endl;

    // p1 gets copied in p2
    std::cout << p2.get() << std::endl;

    return 0;
}
