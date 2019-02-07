#include <iostream>

using namespace std;
void reverseArray(int intArray[]);
int main() {

int intArray[5] = {1,2,3,4,5};
reverseArray(intArray);
  return 0;
}

void reverseArray(int intArray[]){
cout << "Normal Array:\n";
for(int i = 0; i < 5; i++){
  cout << intArray[i] << " ";
}
cout << "\nReversed Array:\n";
for(int i = 4; i >= 0; i--){
  cout << intArray[i] << " ";
}
cout << "\n";
}
