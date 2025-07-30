// main.cpp
#include <iostream>
#include "Snack.h"
#include "SnackSlot.h"
#include "VendingMachine.h"

using namespace std;

int main() {setlocale(LC_ALL, "rus");
    Snack* bounty = new Snack("Bounty");
    Snack* snickers = new Snack("Snickers");
    SnackSlot* slot = new SnackSlot(10);  /*êîëè÷åñòâî áàòîí÷èêîâ, êîòîðûå ïîìåùàþòñÿ â ñëîò*/
    slot->addSnack(bounty);  //Äîáàâëÿåì áàòîí÷èê â ñëîò
    slot->addSnack(snickers);
    VendingMachine* machine = new VendingMachine(5);  /*Êîëè÷åñòâî ñëîòîâ äëÿ ñíåêîâ*/
    machine->addSlot(slot);  // Ïîìåùàåì ñëîò îáðàòíî â àïïàðàò

    cout << machine->getEmptySlotsCount() << endl; // Äîëæíî âûâåñòè 0, ò.ê. ñëîò íå ïóñòîé

    delete machine;
    delete slot;
    delete snickers;
    delete bounty;

    return 0;
}
