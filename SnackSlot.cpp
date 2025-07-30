// SnackSlot.cpp
#include "SnackSlot.h"

SnackSlot::SnackSlot(int capacity) : capacity(capacity) {}

SnackSlot::~SnackSlot() {
    // Слот не владеет снеками, не удаляем их здесь
}

bool SnackSlot::addSnack(Snack* snack) {
    if ((int)snacks.size() < capacity) {
        snacks.push_back(snack);
        return true;
    }
    return false;
}

int SnackSlot::getCount() const {
    return static_cast<int>(snacks.size());
}

int SnackSlot::getCapacity() const {
    return capacity;
}

bool SnackSlot::isEmpty() const {
    return snacks.empty();
}

void SnackSlot::setCapacity(int newCapacity) {
    if (newCapacity >= 0 && newCapacity >= (int)snacks.size()) {
        capacity = newCapacity;
    }
    // Иначе игнорируем, чтобы не потерять уже добавленные снекы
}