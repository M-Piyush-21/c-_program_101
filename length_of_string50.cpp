#include <iostream>

using namespace std;

int main()
 {
    
    char str[] = "akriti kesarwani"; // Define a character array (string)

    // Calculate the length of the string
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    cout << "The length of the string is: " << length << endl;

    return 0;
}
