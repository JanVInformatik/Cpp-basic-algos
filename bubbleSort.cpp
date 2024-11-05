#include <iostream>
using namespace std;

// Function to perform bubble sort
void bubbleSort(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    // Last i elements are already sorted, so ignore them
    for (int j = 0; j < size - i - 1; j++) {
      // Swap if the element is greater than the next element
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int size = sizeof(arr) / sizeof(arr[0]);

  cout << "Original array: ";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  bubbleSort(arr, size);

  cout << "Sorted array: ";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
