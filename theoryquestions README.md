**What is polymorphism in C++ and why is it important?**
Polymorphism means "many forms" and allows objects to be treated as instances of their base type while executing derived class behavior. It's essential for achieving flexibility and extensibility in object-oriented programming.

**2. Explain the concept of compile-time (static) polymorphism with examples.**
Static polymorphism is resolved during compilation, typically using function overloading or operator overloading.
Example:
class Print {
public:
    void show(int i) { cout << "Integer: " << i << endl; }
    void show(double d) { cout << "Double: " << d << endl; }
};

**3. Describe the concept of runtime (dynamic) polymorphism with examples.**
Dynamic polymorphism is achieved using virtual functions. The function call is resolved at runtime based on the object type.
Example:
class Base {
public:
    virtual void display() { cout << "Base display" << endl; }
};

class Derived : public Base {
public:
    void display() override { cout << "Derived display" << endl; }
};

**4. What is the difference between static and dynamic polymorphism?**

Static: Resolved at compile time, faster, uses overloading.

Dynamic: Resolved at runtime, flexible, uses virtual functions.

**5. How is polymorphism implemented in C++?**
Using:

Function overloading

Operator overloading (compile-time)

Inheritance with virtual functions (runtime)

**6. What are pointers in C++ and how do they work?**
Pointers are variables that store memory addresses. They can point to data or functions.

**7. Explain the syntax for declaring and initializing pointers.**
int a = 10;
int* ptr = &a;

**8. How do you access the value pointed to by a pointer?**
Using the dereference operator *.
cout << *ptr;

**9. Describe the concept of pointer arithmetic.**
Pointer arithmetic includes operations like incrementing or decrementing pointers to traverse arrays.
Example:
int arr[3] = {1, 2, 3};
int* p = arr;
p++; // points to arr[1]

**10. What are the common pitfalls when using pointers?**

Dereferencing null/uninitialized pointers

Memory leaks

Dangling pointers

**11. How are pointers used with objects in C++?**
You can point to objects and access members using ->.
MyClass* obj = new MyClass();
obj->show();

**12. Explain the process of dynamically allocating objects using pointers.**
Use new keyword.
MyClass* obj = new MyClass();

**13. Provide an example of accessing object members using pointers.**
obj->display();  // instead of (*obj).display();

**14. What is the difference between a pointer to an object and a reference to an object?**

Pointer can be null, reassigned.

Reference is an alias, cannot be null or reassigned.

1**5. How do you release dynamically allocated objects in C++?**
delete obj;

**16. What is the this pointer in C++ and what is its significance?**
this is an implicit pointer to the current object inside a class.

**17. How is the this pointer used in member functions?**
It can distinguish class members from parameters.
this->x = x;

**18. Explain how the this pointer can be used to return the current object.**
Used in chaining functions:
return *this;

**19. What is a virtual function in C++ and why is it used?**
A virtual function allows runtime polymorphism and ensures the right function is called on derived objects.

**20. Describe the syntax for declaring a virtual function.**
class Base {
    virtual void show();
};

**21. Explain the concept of a vtable (virtual table) and its role in virtual functions.**
A vtable is a table of function pointers used by C++ to support dynamic dispatch of virtual functions.

**22. What is a pure virtual function and how is it declared?**
A pure virtual function is declared by assigning = 0.
virtual void draw() = 0;

**23. Provide an example of a class with pure virtual functions.**
class Shape {
public:
    virtual void draw() = 0;
};

**24. What are the implications of having pure virtual functions in a class?**
It makes the class abstract; it cannot be instantiated.

**25. How is polymorphism implemented using inheritance and virtual functions?**
A base class has a virtual function, and the derived class overrides it.

**26. Provide an example of implementing polymorphism with base and derived classes.**
class Animal {
public:
    virtual void sound() { cout << "Animal sound" << endl; }
};
class Dog : public Animal {
public:
    void sound() override { cout << "Bark" << endl; }
};

**27. Explain the concept of late binding in the context of polymorphism.**
Late binding means function calls are resolved at runtime using virtual functions.

**28. How does the compiler manage polymorphism in C++?**
Using vtable and vptr (virtual pointer inside objects).

**29. What is an abstract class in C++?**
A class with at least one pure virtual function.

**30. How do abstract classes differ from regular classes?**
They cannot be instantiated and must be inherited.

**31. Explain the role of abstract methods in abstract classes.**
They provide an interface for derived classes to implement specific behavior.

**32. Provide an example of defining and using an abstract class.**
class Vehicle {
public:
    virtual void start() = 0;
};
class Car : public Vehicle {
public:
    void start() override { cout << "Car starts" << endl; }
};

**33. What are the benefits of using abstract classes in C++?**

Provide a blueprint for derived classes

Support polymorphism

**34. What is exception handling in C++ and why is it important?**
It allows managing runtime errors gracefully using try, catch, and throw.

**35. Describe the syntax for throwing and catching exceptions in C++.**
try {
    throw 10;
} catch (int e) {
    cout << "Caught: " << e;
}


**36. Explain the concept of try, catch, and throw blocks.**

try: code that might throw

throw: signals an error

catch: handles the error

**37. What is the role of the catch block in exception handling?**
It captures and handles exceptions thrown in try blocks.

**38. Provide an example of handling multiple exceptions in C++.**
try {
    // ...
} catch (int) {
    cout << "Int exception";
} catch (double) {
    cout << "Double exception";
}

**39. How does the throw keyword work in exception handling?**
It transfers control from the try block to the appropriate catch block.

**40. What is the purpose of the finally block in exception handling?**
C++ doesn't have finally; use RAII (destructors) instead to clean up resources.

**41. How do you create custom exception classes in C++?**
By inheriting from std::exception.


class MyException : public exception {
    const char* what() const throw() {
        return "Custom error";
    }
};

**42. What are templates in C++ and why are they useful?**
Templates allow writing generic code. They reduce redundancy and improve code reuse.

43. Describe the syntax for defining a function template.

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

**44. Provide an example of a function template that performs a generic operation.**
See above max() function.

**45. What is a class template and how is it different from a function template?**
A class template allows classes to operate on generic types.
Function templates are for individual functions.

**46. Explain the syntax for defining a class template.**

template <class T>
class Box {
    T value;
};

**47. Provide an example of a class template that implements a generic data structure.**


template <class T>
class Stack {
    vector<T> items;
public:
    void push(T val) { items.push_back(val); }
    T pop() {
        T val = items.back();
        items.pop_back();
        return val;
    }
};

**48. How do you instantiate a template class in C++?**
Stack<int> intStack;

**49. What are the advantages of using templates over traditional class inheritance?**

Type safety

Avoids code duplication

More flexible for generic programming

**50. How do templates promote code reusability in C++?**
Templates allow writing one version of code that works with any data type, reducing maintenance and redundancy.

