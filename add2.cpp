#include <iostream>  // For input/output

using namespace std;

/*
 * Main function - entry point of the program
 * Demonstrates C++ style input/output using cin and cout
 */
int main() {
    int a, b, sum;

    // Display a simple message
    cout << "Hello, World!" << endl;

    // Ask user for input
    cout << "Enter two integers: ";
    cin >> a >> b;

    // Calculate sum
    sum = a + b;

    // Display result
    cout << "Sum = " << sum << endl;

    return 0; // Indicate successful execution
}
