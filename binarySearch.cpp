#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
  int low = 0;
  int high = size - 1;

  while (low <= high) {
    // Calculate the middle point
    int mid = low + (high - low) / 2;

    // Check if the target is at mid
    if (arr[mid] == target) {
      return mid;
    }

    // If target is greater, ignore the left half
    else if (arr[mid] < target) {
      low = mid + 1;
    }

    // If target is smaller, ignore the right half
    else {
      high = mid - 1;
    }
  }

  // Return -1 if the target is not found
  return -1;
}

int main() {
  int arr[] = {2,  3,  4, 10,
               40, 50, 60}; // Array must be sorted for binary search
  int size = sizeof(arr) / sizeof(arr[0]);
  int target;

  cout << "Enter the element to search for: ";
  cin >> target;

  int result = binarySearch(arr, size, target);

  if (result != -1) {
    cout << "Element found at index " << result << endl;
  } else {
    cout << "Element not found" << endl;
  }

  return 0;
}
