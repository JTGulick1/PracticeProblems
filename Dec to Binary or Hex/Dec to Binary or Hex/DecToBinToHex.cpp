#include <iostream>
#include <string>

using namespace std;

void DecToBin(int n) {
    int rem;
    string bin = "";
    int i = 0;
    while (n > 0) {
        rem = n % 2;
        bin += to_string(rem);
        n = n / 2;
        i++;
    }
    reverse(bin.begin(), bin.end());
    cout << bin;
    cout << endl;
}

void BinToDec(int n)
{
    int zed = 0;
    int base = 1;
    while (n != 0) {
        int rem = n % 10;
        n = n / 10;
        zed += rem * base;
        base = base * 2;
    }
    cout << zed << endl;
}

void DecToHex(int n) {
    cout << "0x" << hex << n << endl;
}

void HexToDex(int h) {
    cout << dec << h << endl;
}

int main() {
	int dec = 503;
    float h = 0x255f;
    int b = 111110111;
	DecToBin(dec);
    BinToDec(b);
	DecToHex(dec);
    HexToDex(h);
	return 0;
}