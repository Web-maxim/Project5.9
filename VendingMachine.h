// VendingMachine.h
#ifndef VENDINGMACHINE_H
#define VENDINGMACHINE_H

#include <vector>
#include "SnackSlot.h"

class VendingMachine {
private:
    int slotCount;
    std::vector<SnackSlot*> slots;

public:
    explicit VendingMachine(int slotCount);
    ~VendingMachine();

    bool addSlot(SnackSlot* slot);
    int getEmptySlotsCount() const;
};

#endif