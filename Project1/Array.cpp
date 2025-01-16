//#include "Array.h"
//
//Array::Array() : arr(new int[0]), size(0) {}
//
//Array::Array(size_t n) : size(n) {
//    arr = new int[size];
//    for (size_t i = 0; i < size; ++i) {
//        arr[i] = 0;
//    }
//}
//
//Array::Array(size_t n, int min, int max) : size(n) {
//    arr = new int[size];
//    generateRandomValues(min, max);
//}
//
//Array::Array(const Array& other) : size(other.size) {
//    arr = new int[size];
//    for (size_t i = 0; i < size; ++i) {
//        arr[i] = other.arr[i];
//    }
//}
//
//Array::~Array() {
//    delete[] arr;
//}
//
//void Array::display() const {
//    for (size_t i = 0; i < size; ++i) {
//        std::cout << arr[i] << " ";
//    }
//    std::cout << std::endl;
//}
//
//void Array::fillRandomValues(int min, int max) {
//    generateRandomValues(min, max);
//}
//
//void Array::generateRandomValues(int min, int max) {
//    for (size_t i = 0; i < size; ++i) {
//        arr[i] = min + (i) % (max - min + 1);
//    }
//}
//
//void Array::resize(size_t newSize) {
//    int* newArr = new int[newSize];
//    for (size_t i = 0; i < newSize && i < size; ++i) {
//        newArr[i] = arr[i];
//    }
//    delete[] arr;
//    arr = newArr;
//    size = newSize;
//}
//
//void Array::sort() {
//    for (size_t i = 0; i < size - 1; ++i) {
//        for (size_t j = i + 1; j < size; ++j) {
//            if (arr[i] > arr[j]) {
//                int temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//}
//
//int Array::minValue() const {
//    int min = arr[0];
//    for (size_t i = 1; i < size; ++i) {
//        if (arr[i] < min) {
//            min = arr[i];
//        }
//    }
//    return min;
//}
//
//int Array::maxValue() const {
//    int max = arr[0];
//    for (size_t i = 1; i < size; ++i) {
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//    return max;
//}
//
//Array& Array::operator=(const Array& other) {
//    if (this != &other) {
//        delete[] arr;
//        size = other.size;
//        arr = new int[size];
//        for (size_t i = 0; i < size; ++i) {
//            arr[i] = other.arr[i];
//        }
//    }
//    return *this;
//}
