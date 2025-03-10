#include "Heap.hpp"

Heap::Heap() : heapSize(0) {}

void Heap::insertElements(const std::string& inputLine) {
    std::istringstream inputStringStream(inputLine);
    int numberElement;
    while (inputStringStream >> numberElement) {
        if (heapSize >= MAX_SIZE) {
            std::cout << "The heap data structure is full of the first 1000 number elements. Cannot add more elements into it." << std::endl;
            break;
        }
        heapArray[heapSize] = numberElement;
        heapSize++;
    }
}

void Heap::displayOriginalArray() const {
    std::cout << "Original array of the number elements you just entered is as follows: " << std::endl;
    std::cout << "[";
    for (int i = 0; i < heapSize; i++) {
        if (i == heapSize - 1) {
            std::cout << heapArray[i];
            break;
        }
        std::cout << heapArray[i] << ", ";
    }
    std::cout << "]" << std::endl;
}

void Heap::heapify() {
    std::cout << "Heapifying the input array to make it to be a maximum heap....." << std::endl;
    for (int currentIndex = (heapSize / 2) - 1; currentIndex >= 0; currentIndex--) {
        satisfyMaximumHeapProperty(currentIndex);
    }
    std::cout << "Maximum heapification of the original input array is complete." << std::endl;
}

void Heap::displayHeap() const {
    std::cout << "The maximum heap when represented as a primitive array is: " << std::endl;
    std::cout << "[";
    for (int i = 0; i < heapSize; i++) {
        if (i == heapSize - 1) {
            std::cout << heapArray[i];
            break;
        }
        std::cout << heapArray[i] << ", ";
    }
    std::cout << "]" << std::endl;
}

void Heap::satisfyMaximumHeapProperty(int currentIndex) {
    int indexOfLeftChild = getLeftChildIndex(currentIndex);
    int indexOfRightChild = getRightChildIndex(currentIndex);
    int indexOfLargestElement = currentIndex;
    if (indexOfLeftChild < heapSize && heapArray[indexOfLeftChild] > heapArray[indexOfLargestElement]) {
        indexOfLargestElement = indexOfLeftChild;
    }
    if (indexOfRightChild < heapSize && heapArray[indexOfRightChild] > heapArray[indexOfLargestElement]) {
        indexOfLargestElement = indexOfRightChild;
    }
    if (indexOfLargestElement != currentIndex) {
        std::swap(heapArray[currentIndex], heapArray[indexOfLargestElement]);
        satisfyMaximumHeapProperty(indexOfLargestElement);
    }
}

int Heap::getLeftChildIndex(int currentIndex) const {
    return 2 * currentIndex + 1;
}

int Heap::getRightChildIndex(int currentIndex) const {
    return 2 * currentIndex + 2;
}

int Heap::getParentIndex(int currentIndex) const {
    return (currentIndex - 1) / 2;
}