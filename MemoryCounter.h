#ifndef MEMORY_COUNTER_MEMORYCOUNTER_H
#define MEMORY_COUNTER_MEMORYCOUNTER_H

class MemoryCounter {
public:
    MemoryCounter(Counter *aCounter, Memory *aMemory);

    static void displayChoices();

    void run();

    void getUserInput();

    void displayOutput();

private:
    Counter *aCounter;
    Memory *aMemory;
    int menuChoice{};
};

#endif //MEMORY_COUNTER_MEMORYCOUNTER_H
