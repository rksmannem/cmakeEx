#ifndef __MD_SCS_INC_BIN_HEAP_H__
#define __MD_SCS_INC_BIN_HEAP_H__

#include <initializer_list>
#include "Log.h"

enum class heapType : unsigned int{
    MAX_HEAP,
    MIN_HEAP
};

class binaryHeap{
public:
    binaryHeap() = delete;
    binaryHeap(int capacity);
    binaryHeap(std::initializer_list<int>);
    ~binaryHeap();

    void buildHeap(const heapType& );
    void buildMaxHeap();
    void maxHeapify(int idx, int sz);
    void buildMinHeap();

    void sort();

    int getSize() const;
    int getCapacity() const;

    bool empty() const;
    bool isFull() const;

    int& operator[](const int indx);
    const int& operator[](const int indx) const;

    int fill(const std::initializer_list<int>&);
    void display() const;

    friend std::ostream& operator<<(std::ostream& os, const binaryHeap& heap);

private:
    int m_size = 0; /*Number of Elements present in the Heap*/
    int m_capacity; /*Max Number of elements that an heap can hold */
    int *m_container; /*Array To Hold the Elements of the Heap */
};

#endif