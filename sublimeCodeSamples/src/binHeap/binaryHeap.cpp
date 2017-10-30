#include <cassert>
#include <algorithm>
#include <iterator>
#include "binaryHeap.h"

const auto LOG_TAG = "BIN_HEAP";
const auto INVALID_INDX_VAL = -99999;


binaryHeap::binaryHeap(int capacity):
    m_size(0),
    m_capacity(capacity > 0 ? capacity : 0)
{
    if(m_capacity > 0){
        m_container = new int[m_capacity];
    }
    else{
        /* if the input capacity is not greater than zero, 
           point the underlying container{/pointer/array} to nullptr
        */
        m_container = nullptr;
    }
}

binaryHeap::binaryHeap(std::initializer_list<int> inList):
    binaryHeap(inList.size())
{
    if(m_container != nullptr){
        std::copy(inList.begin(), inList.end(), m_container);
        m_size = m_capacity;
    }  
}

binaryHeap::~binaryHeap(){
    delete m_container;
    m_container = nullptr;
    m_capacity = 0;
    m_size = 0;
}

int binaryHeap::fill(const std::initializer_list<int>& inList){
    if(m_capacity <= 0){
        return 0;
    }

    std::initializer_list<int>::const_iterator itr = inList.begin();
    for(int i = 0 ; i < getCapacity() && itr != inList.end(); ++i, ++itr){
        m_container[i] = *itr;
        m_size++;
    }
    return m_size;
}

void binaryHeap::buildHeap(const heapType& typeOfHeap){
    if(typeOfHeap == heapType::MAX_HEAP){
        buildMaxHeap();
    }
    else{
        buildMinHeap();
    }
}

void binaryHeap::buildMaxHeap(){    
    int sz = getSize();
    for(int i = getSize()/2 - 1; i >= 0; --i){
        maxHeapify(i, sz);
    }
    //std::cout<<"After HeapiFy: "<<std::endl;
    //std::cout<<*this<<std::endl;
}

void binaryHeap::buildMinHeap(){
    
}

void binaryHeap::maxHeapify(int idx, int sz){
    int largest = idx;
    int l = 2*idx+1;
    int r = 2*idx+2;

    if(l < sz && 
        m_container[l] > m_container[largest]){
            largest = l;
    }

    if( r < sz &&
        m_container[r] > m_container[largest]){
            largest = r;
    }

    if(largest != idx){
        std::swap(m_container[largest], m_container[idx]);
        maxHeapify(largest, sz);
    }
}

void binaryHeap::sort(){

    /* 1.Build MAX_HEAP */
    buildHeap(heapType::MAX_HEAP);

    /*2.
        I).swap the root element with last element.
        II). HeapiFy the remaining Heap elements
    */
    //std::cout<<"----- Sorting:-----"<<std::endl;
    int sz = getSize();
    for(int i = sz-1; i >= 0; --i)
    {
        std::swap(m_container[0], m_container[i]);
        maxHeapify(0, i);

       // std::cout<<*this<<std::endl;
    }
    //std::cout<<"-------------------"<<std::endl;
}


int binaryHeap::getCapacity() const {
    return m_capacity;
}

int binaryHeap::getSize() const {
    return m_size;
}

inline bool binaryHeap::empty() const {
    return (m_capacity > 0 && m_size == 0);
}

inline bool binaryHeap::isFull() const {
    return (m_capacity > 0 && m_size == m_capacity);
}

int& binaryHeap::operator[](const int indx) {
    assert(indx >= 0 && indx < getSize());
    return m_container[indx];
}
const int& binaryHeap::operator[](const int indx) const {
    if(indx >= 0 && indx < getSize()){
        return m_container[indx];
    }
    else
        return INVALID_INDX_VAL;
}

void binaryHeap::display() const{
    if(m_capacity < 0){
        return;
    }

    std::cout<<"Heap Elements: [";
    for(int i = 0; i < getSize(); i++){
        std::cout<<m_container[i];
        if(i < getSize()-1)
            std::cout<<" ";
    }
    std::cout<<"]"<<std::endl;
}


std::ostream& operator<<(std::ostream& os, const binaryHeap& H)
{
    os << "Heap Elements: [";
    if(H.empty()){
        std::cout<<" ";
    }
    else{
        for(int i = 0; i < H.getSize(); ++i){
            os<<H[i];
            if(i < H.getSize()-1)
                os<<" ";
        }
    }
    os<<"]"<<std::endl;

    return os;
}

int main()
{
    /*binaryHeap maxHeap(6);
    int sz = maxHeap.fill({12, 11, 13, 5, 6, 7});*/

    binaryHeap maxHeap {12, 11, 13, 5, 6, 7, 99, 77};
    std::cout<<maxHeap<<std::endl;
    maxHeap.sort();
    std::cout<<maxHeap<<std::endl;

    return 0;
}