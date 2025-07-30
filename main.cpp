// main.cpp
#include <iostream>
#include "Snack.h"
#include "SnackSlot.h"
#include "VendingMachine.h"

using namespace std;

int main() {
    Snack* bounty = new Snack("Bounty");
    Snack* snickers = new Snack("Snickers");
    SnackSlot* slot = new SnackSlot(10);  /*количество батончиков, которые помещаются в слот*/
    slot->addSnack(bounty);  //Добавляем батончик в слот
    slot->addSnack(snickers);
    VendingMachine* machine = new VendingMachine(5);  /*Количество слотов для снеков*/
    machine->addSlot(slot);  // Помещаем слот обратно в аппарат

    cout << machine->getEmptySlotsCount() << endl; // Должно вывести 0, т.к. слот не пустой

    delete machine;
    delete slot;
    delete snickers;
    delete bounty;

    return 0;
}
