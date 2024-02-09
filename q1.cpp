//#include <iostream>
//
//#include <climits>
//
//using namespace std;
//
//class Arr {
//public: void findLargestSmallest(int arr[], int size) {
//    if (size == 0) {
//        cout << "Array empty " << endl;
//        return;
//    }
//
//    int smallest = 10000;
//    int largest = 1;
//
//    for (int i = 0; i < size; ++i) {
//        if (arr[i] < smallest)
//            smallest = arr[i];
//        if (arr[i] > largest)
//            largest = arr[i];
//    }
//
//    cout << "Smallest element: " << smallest << endl;
//    cout << "Largest element: " << largest << endl;
//}
//};
//
//int main() {
//    Arr arrr;
//    int arr[] = {
//            1110,
//            7,
//            9,
//            333,
//            323,
//            1
//    };
//    int size = sizeof(arr) / sizeof(arr[0]);
//    arrr.findLargestSmallest(arr, size);
//    return 0;
//}