#include<iostream>

void printValue(int value)
{
    std::cout << "memory of value" << &value << "value inside value" << value << std::endl;
}

int main()
{
    int something{5}; //stack

    int& ref{something};//esto es una referencia (variable por referencia)

    int something2{something};//esto es una copia (variable por valor)

    ref++;

    int* ptr1{&something};

    ++*ptr1;

    person* person1{new person(Ramon, 20, 1.80)};

    std::cout << "memmory of person1: " << &person1 << std::endl;
    std::cout << "value of person1: " << person1 << std::endl;
    std::cout << "name of person1: " << person1->name << std::endl;
    std::cout << "age of person1: " << person1->age << std::endl;
    std::cout << "height of person1: " << person1->height << std::endl;


    std::cout << "memmory of something: " << &something << " value inside memmory: " << something << std::endl;
    std::cout << "memmory of ref: " << &ref << " value inside ref: " << ref << std::endl;
    std::cout << std::endl;

    std::cout << "memmory of something2: " << &something2 << " value inside something2: " << something2 << std::endl;
    std::cout << "memmory of something: " << &something << " value inside memmory: " << something << std::endl;
    std::cout << "memmory of ref: " << &ref << " value inside ref: " << ref << std::endl;
    std::cout << std::endl;

    std::cout << "memmory of pointer: " << &ptr1 << " value inside pointer: " << *ptr1 << " memmory of the value inside pointer " << ptr1 << std::endl;

    std::cin.get();

    return 0;
}

