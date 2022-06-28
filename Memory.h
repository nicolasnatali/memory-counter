#ifndef MEMORY_COUNTER_MEMORY_H
#define MEMORY_COUNTER_MEMORY_H

class Memory {
public:
    Memory();

    void addMemory(int mem);

    void resetMemory();

    [[nodiscard]] int getMemory() const;

    void setMemory(int mem);

private:
    int memory{};
};

#endif //MEMORY_COUNTER_MEMORY_H
