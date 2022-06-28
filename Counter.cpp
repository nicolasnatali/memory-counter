#include "Counter.h"

Counter::Counter() = default;

void Counter::incrementCount() {
    count++;
}

void Counter::decrementCount() {
    count--;
}

void Counter::resetCount() {
    setCount(0);
}

int Counter::getCount() const {
    return count;
}

void Counter::setCount(int cnt) {
    Counter::count = cnt;
}
