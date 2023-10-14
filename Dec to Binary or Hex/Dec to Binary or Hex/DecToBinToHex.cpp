#include <iostream>
using namespace std;

void DecToBin(int n) {
    int binaryNum[32];

    int i = 0;
    while (n > 0) {

        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        std::cout << binaryNum[j];
}

void DecToHex(int n) {
    cout << "0x" << std::hex << n << endl;
}

int main() {
	int dec = 34;
    cin >> dec;
	DecToBin(dec);
    cout << endl;
	DecToHex(dec);
	return 0;
}