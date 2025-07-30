// SnackSlot.h
#ifndef SNACKSLOT_H
#define SNACKSLOT_H

#include <vector>
#include "Snack.h"

class SnackSlot {
protected:
    int capacity;
    std::vector<Snack*> snacks;

public:
    explicit SnackSlot(int capacity);
    virtual ~SnackSlot();

    bool addSnack(Snack* snack);
    int getCount() const;
    int getCapacity() const;
    bool isEmpty() const;

    void setCapacity(int newCapacity); 
};

#endif