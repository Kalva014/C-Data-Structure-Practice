#include <iostream>

int binarySearch_recursive(int* arr, int valueToFind, int min, int max) {
    if(max < min) {
        return -1;
    }

    int average = ((max + min) / 2);

    if(arr[average] == valueToFind) {
        return average;
    }

    if(average > valueToFind) {
        return binarySearch_recursive(arr, valueToFind, min, average - 1);
    }
    else{
        return binarySearch_recursive(arr, valueToFind, average + 1, max);
    }
}

int binarySearch_iterative(int* arr, int valueToFind, int min, int max) {
    if(max < min) {
        return -1;
    }

    while(1 <= max) {
        int average = (max + min) / 2; 

        if(arr[average] == valueToFind) {
            return average;
        }

        if(valueToFind > average) {
            min = average + 1; 
        }
        else {
            max = average - 1;
        }
    }
}   

int main() {
    int* arr = new int[10];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 5;
    arr[3] = 6;
    arr[4] = 7;
    arr[5] = 8;
    arr[6] = 11;
    arr[7] = 12;
    arr[8] = 15;
    arr[9] = 20;
    std::cout << binarySearch_recursive(arr,7, 0, 9) << std::endl;
    std::cout << binarySearch_iterative(arr,7, 0, 9) << std::endl;

    return 0;
}