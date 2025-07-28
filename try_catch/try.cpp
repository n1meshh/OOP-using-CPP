#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE];
    int input;

    cout << "Enter " << SIZE << " positive integers:" << endl;

    for (int i = 0; i < SIZE; ++i) {
        try {
            cout << "Enter number " << i + 1 << ": ";
            cin >> input;

            if (cin.fail()) {
                throw 'a';  // Simulate char-type error
            }

            if (input < 0) {
                throw string("Negative numbers not allowed.");
            }

            if (i >= SIZE) {
                throw out_of_range("Index out of bounds.");
            }

            arr[i] = input;
        }
        catch (char) {
            cout << "Error: Character input is not allowed." << endl;
            cin.clear();  // Clear error state
            cin.ignore(1000, '\n');  // Discard invalid input
            --i;  // Retry the same index
        }
        catch (string &e) {
            cout << "Error: " << e << endl;
            --i;  // Retry the same index
        }
        catch (out_of_range &e) {
            cout << "Error: " << e.what() << endl;
            break;
        }
    }

    cout << "\nStored values:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}