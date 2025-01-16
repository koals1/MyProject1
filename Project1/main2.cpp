//#include "Array.h"
//
//int main() {
//    Array arr1(5);
//    std::cout << "Initial array (5 elements, all zero): ";
//    arr1.display();
//
//
//    arr1.fillRandomValues(1, 10);
//    std::cout << "Array after random fill (1-10): ";
//    arr1.display();
//    Array arr2(3, 7, 7);
//    std::cout << "Array with 3 elements, all 7: ";
//    arr2.display();
//
//    
//    arr1.sort();
//    std::cout << "Sorted array arr1: ";
//    arr1.display();
//
//  
//    std::cout << "Min value in arr1: " << arr1.minValue() << std::endl;
//    std::cout << "Max value in arr1: " << arr1.maxValue() << std::endl;
//
//
//    arr1.resize(8);
//    std::cout << "Array arr1 after resizing to 8: ";
//    arr1.display();
//
//    Array arr3 = arr1;
//    std::cout << "Array arr3 (copy of arr1): ";
//    arr3.display();
//
//    
//    arr2 = arr1;
//    std::cout << "Array arr2 after assignment from arr1: ";
//    arr2.display();
//
//    return 0;
//}
