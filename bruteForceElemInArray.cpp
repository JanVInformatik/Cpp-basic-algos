#include <iostream>
using namespace std;

// Function to perform brute-force search
int bruteForceSearch(int arr[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
      return i; // Return the index if target is found
    }
  }
  return -1; // Return -1 if target is not found
}

int main() {
  int arr[] = {3, 5, 7, 9, 11, 13, 15};
  int size = sizeof(arr) / sizeof(arr[0]);
  int target;

  cout << "Enter the element to search for: ";
  cin >> target;

  int result = bruteForceSearch(arr, size, target);

  if (result != -1) {
    cout << "Element found at index " << result << endl;
  } else {
    cout << "Element not found" << endl;
  }

  return 0;
}
