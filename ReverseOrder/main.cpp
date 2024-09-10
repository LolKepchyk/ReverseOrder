#include <iostream>

using namespace std;

int main() {
   const int SIZE = 10;
   int mas[SIZE];

   // Input values into the array
   for (int i = 0; i < SIZE; ++i) {
	  cout << "Enter mas [" << i << "] => _\b";
	  cin >> mas[i];
   }

   // Reverse the order of elements in the array
   for (int i = 0; i < SIZE / 2; ++i) {
	  int temp = mas[i]; // Store the current element in a temporary variable
	  mas[i] = mas[SIZE - 1 - i]; // Swap the current element with the element from the end
	  mas[SIZE - 1 - i] = temp; // Complete the swap
   }

   // Output the reversed array
   for (int i = 0; i < SIZE; ++i) {
	  cout << mas[i] << " ";
   }
   cout << endl;
  
   return 0;
}