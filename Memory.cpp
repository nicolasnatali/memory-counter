#include "Memory.h"

Memory::Memory() = default;

void Memory::addMemory(int mem) {
    setMemory(mem);
}

void Memory::resetMemory() {
    setMemory(0);
}

int Memory::getMemory() const {
    return memory;
}

void Memory::setMemory(int mem) {
    Memory::memory = mem;
}
