#pragma once
#include <iostream>
#include <string>

class Animal {
public:
    virtual void Voice() const = 0; // Чисто виртуальная функция
    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    void Voice() const override {
        std::cout << "Woof!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void Voice() const override {
        std::cout << "Meow!" << std::endl;
    }
};

class Cow : public Animal {
public:
    void Voice() const override {
        std::cout << "Moo!" << std::endl;
    }
};
