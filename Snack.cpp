// Snack.cpp
#include "Snack.h"

Snack::Snack(const std::string& name) : name(name) {}

Snack::~Snack() {}

std::string Snack::getName() const {
    return name;
}

void Snack::setName(const std::string& newName) {
    name = newName;
}