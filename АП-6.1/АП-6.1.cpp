#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void generateArray(int arr[], int size, int minValue, int maxValue) {
    for (int i = 0; i < size; i++) {
        arr[i] = minValue + rand() % (maxValue - minValue + 1);
    }
}

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}

void countAndSum(const int arr[], int size, int& count, int& sum) {
    count = 0;
    sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0 && arr[i] % 2 != 0) {
            count++;
            sum += arr[i];
        }
    }
}

void replaceWithZero(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0 && arr[i] % 2 != 0) {
            arr[i] = 0;
        }
    }
}

int main() {
    srand(time(0));
    const int size = 23;
    int arr[size];

    generateArray(arr, size, -25, 80);

    cout << " Start:        ";
    printArray(arr, size);

    int count, sum;
    countAndSum(arr, size, count, sum);
    cout << " Satisfaction:   " << count << endl;
    cout << " Sum:            " << sum << endl;

    replaceWithZero(arr, size);

    cout << " Modification: ";
    printArray(arr, size);

    return 0;
}
