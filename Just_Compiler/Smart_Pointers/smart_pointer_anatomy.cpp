#include <iostream>

class SmartPtr  {
    int* ptr;   // Actual Pointer
public:
    explicit SmartPtr(int* p = nullptr)
        : ptr{p} 
    {
    }

    // Destructor
    ~SmartPtr() { delete(ptr); }

    // Overload the dereference operator
    int& operator*() { return *ptr; }
};

int main() {
    SmartPtr ptr(new int());
    *ptr = 20;
    std::cout << *ptr << std::endl;

    // We don't need to call delete on the 'ptr'
    // When  ptr goes out of scope, it is automatically deleted

    return 0;
}