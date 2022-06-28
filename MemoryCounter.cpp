#include "Counter.h"
#include "Memory.h"
#include "MemoryCounter.h"

#include <array>
#include <iostream>

MemoryCounter::MemoryCounter(Counter *aCounter, Memory *aMemory) : aCounter(aCounter), aMemory(aMemory) {}

void MemoryCounter::displayChoices() {
    std::array<std::string, 6> choices{
            "1) increment counter",
            "2) decrement counter",
            "3) reset counter",
            "4) add memory",
            "5) reset memory",
            "6) quit"
    };
    for (int i = 0; i < 6; i++) {
        std::cout << choices[i] << std::endl;
    }
}

void MemoryCounter::run() {
    while (menuChoice != 6) {
        displayChoices();
        getUserInput();
        switch (menuChoice) {
            case 1:
                aCounter->incrementCount();
                displayOutput();
                break;
            case 2:
                aCounter->decrementCount();
                displayOutput();
                break;
            case 3:
                aCounter->resetCount();
                displayOutput();
                break;
            case 4:
                aMemory->addMemory(aCounter->getCount());
                displayOutput();
                break;
            case 5:
                aMemory->resetMemory();
                displayOutput();
                break;
            case 6:
                std::cout << "Program Ending" << std::endl;
                break;
        }
    }
}

void MemoryCounter::getUserInput() {
    std::cin >> menuChoice;
}

void MemoryCounter::displayOutput() {
    std::cout << "Current Count: " << aCounter->getCount() << std::endl;
    std::cout << "Current Memory: " << aMemory->getMemory() << std::endl;
}
