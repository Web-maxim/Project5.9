// VendingMachine.cpp
#include "VendingMachine.h"

VendingMachine::VendingMachine(int slotCount) : slotCount(slotCount) {}

VendingMachine::~VendingMachine() {
    // Машина не владеет слотами, не удаляем их
}

bool VendingMachine::addSlot(SnackSlot* slot) {
    if ((int)slots.size() < slotCount) {
        slots.push_back(slot);
        return true;
    }
    return false;
}

int VendingMachine::getEmptySlotsCount() const {
    int count = 0;
    for (auto slot : slots) {
        if (slot->isEmpty()) {
            ++count;
        }
    }
    return count;
}