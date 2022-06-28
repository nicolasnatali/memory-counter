#include "Counter.h"
#include "Memory.h"
#include "MemoryCounter.h"

int main() {
    Counter counter;
    Memory memory;
    MemoryCounter memoryCounter(&counter, &memory);
    memoryCounter.run();
    return 0;
}
