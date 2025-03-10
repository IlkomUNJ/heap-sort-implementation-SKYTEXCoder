#ifndef HEAP_H
#define HEAP_H

#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>

class Heap {
public:
    Heap();
    void insertElements(const std::string& inputLine);
    void displayOriginalArray() const;
    void heapify();
    void displayHeap() const;
    int getLeftChildIndex(int currentIndex) const;
    int getRightChildIndex(int currentIndex) const;
    int getParentIndex(int currentIndex) const;

private:
    static const int MAX_SIZE = 1000;
    int heapArray[MAX_SIZE];
    int heapSize;
    void satisfyMaximumHeapProperty(int currentIndex);
};

#endif // HEAP_H