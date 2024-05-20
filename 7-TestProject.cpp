#include "Animal.h"
#include <vector>

int main() {
    // Создаем массив указателей на Animal
    std::vector<Animal*> animals;

    // Заполняем массив объектами наследников Animal
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Cow());

    // Проходимся циклом по массиву и вызываем метод Voice для каждого объекта
    for (const auto& animal : animals) {
        animal->Voice();
    }

    // Очищаем память
    for (auto& animal : animals) {
        delete animal;
    }

    return 0;
}
