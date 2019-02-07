#include <iostream>

using namespace std;
void reverseArray(int intArray[], int size);
int main() {

const int size = 4;
int intArray[size] = {1,2,3,4};
reverseArray(intArray, size);
  return 0;
}

void reverseArray(int intArray[], int size){
cout << "Normal Array:\n";
for(int i = 0; i < size; i++){
  cout << intArray[i] << " ";
}
cout << "\nReversed Array:\n";
for(int i = size - 1; i >= 0; i--){
  cout << intArray[i] << " ";
}
cout << "\n";
}
