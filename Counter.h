#ifndef MEMORY_COUNTER_COUNTER_H
#define MEMORY_COUNTER_COUNTER_H

class Counter {
public:
    Counter();

    void incrementCount();

    void decrementCount();

    void resetCount();

    [[nodiscard]] int getCount() const;

    void setCount(int cnt);

private:
    int count{};
};

#endif //MEMORY_COUNTER_COUNTER_H
