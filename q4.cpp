#include <iostream>

using namespace std;

class ArrayList {
        private: int * data;
        int capacity;
        int size;

        public: ArrayList() {
                        capacity = 10;
                        size = 0;
                        data = new int[capacity];
                }

                ~ArrayList() {
                        delete[] data;
                }

        void add(int value) {
                if (size == capacity) {
                        // Resize the array if it's full
                        int newCapacity = capacity * 2;
                        int * newData = new int[newCapacity];
                        for (int i = 0; i < size; ++i) {
                                newData[i] = data[i];
                        }
                        delete[] data;
                        data = newData;
                        capacity = newCapacity;
                }
                data[size++] = value;
        }

        void remove(int index) {
                if (index >= 0 && index < size) {
                        for (int i = index; i < size - 1; ++i) {
                                data[i] = data[i + 1];
                        }
                        size--;
                }
        }
};

int main() {
        ArrayList list;
        list.add(10);
        list.add(20);
        list.add(30);
        list.remove(1); // Removes element at index 1

        return 0;
}