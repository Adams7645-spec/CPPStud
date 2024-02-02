#pragma once
#include "EvenNumInteractor.h"
#include "GreaterThanPrevious.h"

class ConsoleInteractor {
private:
    EvenNumInteractor numInteractor;
    GreaterThanPrevious greaterThanPrevious;

    int getFilteredNumber() {
        int result;
        cin >> result;
        return result;
    }
public:
    ConsoleInteractor() = default;
    void printEvenNumSum() {
        int enteredNum;
        cout << "Enter a number to count even sum : ";
        enteredNum = getFilteredNumber();
        numInteractor = EvenNumInteractor(enteredNum);
        cout << "Result is : " << numInteractor.getNumber();
    }
    void printGreaterThanPrevious() {
        greaterThanPrevious.SetArray();
        greaterThanPrevious.FindGreaterThanPrev();
    }
};

