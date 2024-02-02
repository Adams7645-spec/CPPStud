#pragma once

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <conio.h>

using std::cin;
using std::cout;
using std::vector;
using std::string;
using std::to_string;

class EvenNumInteractor {
private:
    int number;
    int result;
    vector<int> numberByDigits;

    void breakNumIntoDigitVec(int input) {
        vector<int> tempVector;
        while (input != 0) {
            int digit = input % 10;
            tempVector.insert(tempVector.begin(), digit);
            input = input / 10;
        }
        numberByDigits = tempVector;
    }
    void clearDigitVec() {
        numberByDigits.clear();
    }
public:
    EvenNumInteractor() = default;
    EvenNumInteractor(int number) {
        this->number = number;
        breakNumIntoDigitVec(this->number);
    }
    int getNumber() {
        result = 0;
        for (int digit : numberByDigits) {
            if (digit % 2 == 0) {
                result += digit;
            }
        }
        return result;
    }
    void setNumber(int number) {
        this->number = number;
    }
};