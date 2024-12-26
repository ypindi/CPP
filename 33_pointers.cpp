// Void Pointers - void* ptr

// #include <iostream>

// void printValue(void* ptr, char type) {
//     if (type == 'i') {
//         std::cout << "Integer: " << *(static_cast<int*>(ptr)) << std::endl;
//     } else if (type == 'f') {
//         std::cout << "Float: " << *(static_cast<float*>(ptr)) << std::endl;
//     }
// }

// int main() {
//     int intVal = 42;
//     float floatVal = 3.14;

//     printValue(&intVal, 'i');   // Pass integer
//     printValue(&floatVal, 'f');  // Pass float

//     return 0;
// }

// Dangling Pointers - Accessing a local variable outside its scope
// #include <iostream>

// int* createDanglingPointer() {
//     int x = 42;
//     return &x;  // x is a local variable, and its memory is freed after this function returns
// }

// int main() {
//     int* ptr = createDanglingPointer();
//     // ptr is now a dangling pointer because x's memory has been deallocated
//     std::cout << *ptr;  // Undefined behavior
//     return 0;
// }

// Void Pointers - int* ptr = nullptr;
// #include <iostream>

// int main() {
//     int* ptr = nullptr;  // Null pointer
//     if (ptr == nullptr) {
//         std::cout << "Pointer is null" << std::endl;
//     }
//     return 0;
// }

// Wild Pointers
// #include <iostream>

// int main() {
//     int* ptr;  // Uninitialized pointer (wild pointer)
//     *ptr = 42; // Undefined behavior: dereferencing a wild pointer
//     return 0;
// }
// Even this is a wild pointer
// int* ptr; // uninitialized