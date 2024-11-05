#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  unordered_map<int, string> hashTable;

  // Inserting key-value pairs
  hashTable[1] = "Apple";
  hashTable[2] = "Banana";
  hashTable[3] = "Cherry";
  hashTable[4] = "Date";

  int key;
  cout << "Enter the key to search for: ";
  cin >> key;

  // Search operation
  if (hashTable.find(key) != hashTable.end()) {
    cout << "Element found: " << hashTable[key] << endl;
  } else {
    cout << "Element not found" << endl;
  }

  return 0;
}
