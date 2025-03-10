#include "Heap.hpp"

using namespace std;

int main() {
    Heap heap;
    string inputLine;

    cout << endl;
    cout << "Please enter the number elements you wish to store in the heap or make a maximum heap of, separated by spaces (maximum of 1000 elements): " << endl;
    getline(cin, inputLine);

    heap.insertElements(inputLine);
    cout << endl;
    heap.displayOriginalArray();
    cout << endl;
    heap.heapify();
    cout << endl;
    heap.displayHeap();
    cout << endl;

    return 0;
}