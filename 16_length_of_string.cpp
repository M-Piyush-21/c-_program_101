#include <iostream>
#include <string>

using namespace std;

int main() {
  // Get the input string
  string str;
  cout << "Enter a string: ";
  getline(cin, str);

  // Find the length of the string
  int wordcount = 0;
  for (char c : str) {
    wordcount++;
  }

  // Print the length of the string
  cout << "The length of the string is " << wordcount << endl;

  return 0;
}