#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

const int MAX_SIZE = 1000;
int heap_array[MAX_SIZE];
int heapSizePointer = 0;

void satisfyMaxHeapProperty(int currentIndex) {
    int indexOfLeftChild = 2 * currentIndex + 1;
    int indexOfRightChild = 2 * currentIndex + 2;
    int indexOfLargestElement = currentIndex;
    if (indexOfLeftChild < heapSizePointer && heap_array[indexOfLeftChild] > heap_array[indexOfLargestElement]) {
        indexOfLargestElement = indexOfLeftChild;
    }
    if (indexOfRightChild < heapSizePointer && heap_array[indexOfRightChild] > heap_array[indexOfLargestElement]) {
        indexOfLargestElement = indexOfRightChild;
    }
    if (indexOfLargestElement != currentIndex) {
        swap(heap_array[currentIndex], heap_array[indexOfLargestElement]);
        satisfyMaxHeapProperty(indexOfLargestElement);
    }
}

void heapify() {
    cout << "Heapifying the input array to make it a maximum heap....." << endl;
    for (int currentIndex = (heapSizePointer / 2) - 1; currentIndex >= 0; currentIndex--) {
        satisfyMaxHeapProperty(currentIndex);
    }
    cout << "Maximum heapification of the input array is complete." << endl;
}

int main() {
    cout << endl;
    string inputLine;
    int numberElement;
    cout << "Please enter the number elements you wish to store in the heap or make a maximum heap of, separated by spaces (maximum of 1000 elements): ";
    getline(cin, inputLine);
    istringstream inputStringStream(inputLine);
    while (inputStringStream >> numberElement) {
        if (heapSizePointer >= MAX_SIZE) {
            cout << "The heap data structure is full of the first 1000 number elements. Cannot add more elements into it." << endl;
            break;
        }
        heap_array[heapSizePointer] = numberElement;
        heapSizePointer++;
    }
    cout << endl;
    cout << "Original array of the number elements you just entered is as follows: " << endl;
    cout << "[";
    for (int i = 0; i < heapSizePointer; i++) {
        if (i == heapSizePointer - 1) {
            cout << heap_array[i];
            break;
        }
        cout << heap_array[i] << ", ";
    }
    cout << "]" << endl;
    cout << endl;
    heapify();
    cout << endl;
    cout << "The maximum heap when represented as a primitive array is: " << endl;
    cout << "[";
    for (int i = 0; i < heapSizePointer; i++) {
        if (i == heapSizePointer - 1) {
            cout << heap_array[i];
            break;
        }
        cout << heap_array[i] << ", ";
    }
    cout << "]" << endl;
    cout << endl;
    return 0;
}