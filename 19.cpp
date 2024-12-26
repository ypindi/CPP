// Type Casting
int a = 10;
double b = static_cast<double>(a); // Convert int to double

// Dynamic casting
Base *basePtr = new Derived();
Derived *derivedPtr = dynamic_cast<Derived *>(basePtr);

// typedef and using
typedef int Integer;
Integer a = 10;

using Integer = int;
Integer b = 20;

template <typename T>
using Vec = std::vector<T>;
Vec<int> v; // Instead of writing std::vector<int>

// Dangling Pointers
int *ptr = new int(10);
delete ptr; // Memory is freed

// ptr is now a dangling pointer
cout << *ptr; // Undefined behavior: Accessing freed memory

To avoid dangling pointers, always set the pointer to nullptr after deleting the memory : delete ptr;
ptr = nullptr; // Safe to use now

// Smart Pointers
// Smart pointers are wrappers around raw pointers that automatically
// manage the lifetime of dynamically allocated objects. They help avoid
// memory leaks by ensuring that memory is properly deallocated when the pointer goes out of scope.
std::unique_ptr<int> ptr = std::make_unique<int>(10);
