//#include <iostream>
//
//using namespace std;
//
//class Arrayyy
//{
//public: void SimilarValues(int arr1[], int s1, int arr2[], int s2) {
//    cout << "Similar values ";
//    cout << "[ ";
//    for (int i = 0; i < s1; ++i) {
//        for (int j = 0; j < s2; ++j) {
//            if (arr1[i] == arr2[j]) {
//                cout << arr1[i] << " ";
//                break;
//            }
//        }
//    }
//    cout << " ]";
//    cout << endl;
//}
//};
//
//int main() {
//    Arrayyy arr;
//    int array1[] = {
//            2,
//            4,
//            5,
//            6,
//            1
//    };
//    int size1 = sizeof(array1) / sizeof(array1[0]);
//    int array2[] = {
//            3,
//            6,
//            9,
//            0,
//            23,
//            55,
//            2
//    };
//    int size2 = sizeof(array2) / sizeof(array2[0]);
//
//    arr.SimilarValues(array1, size1, array2, size2);
//
//    return 0;
//}