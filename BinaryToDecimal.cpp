#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int binaryToDecimal(const string& binary) {
    int decimal = 0;
    int length = binary.length();

    for (int i = 0; i < length; ++i) {
        if (binary[length - i - 1] == '1') {
            decimal += pow(2, i);
        }
    }
    return decimal;
}
string decimalToBinary(int decimal) {
    string binary = "";
    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary.empty() ? "0" : binary; 
}
int main() {
    while (true){
    int choice;
    cout << "Binary and Decimal Converter"<<endl;
    cout << "1. Binary to Decimal"<<endl;
    cout << "2. Decimal to Binary"<<endl;
    cout << "3. Exit"<<endl;
    cout << "Enter your choice: "<<endl;
    cin >> choice;
    if (choice == 1) {
        string binary;
        cout << "Enter a binary number: ";
        cin >> binary;
        int decimal = binaryToDecimal(binary);
        cout << "Decimal: " << decimal << endl;
    } else if (choice == 2) {
        int decimal;
        cout << "Enter a decimal number: ";
        cin >> decimal;
        string binary = decimalToBinary(decimal);
        cout << "Binary: " << binary << endl;
    } else if (choice == 3) {
        cout << "Exiting program.\n";
        return 0;
    } else {
        cout << "Invalid choice. Please try again.\n";
    }
    }
    return 0;
}
