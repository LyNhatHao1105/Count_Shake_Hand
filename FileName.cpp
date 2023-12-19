#include <iostream>
#include <string>
using namespace std;

int countHandshakes(int n, string sequence) {
    int count = 0;
    int leftCount = 0;

    for (int i = 0; i < n; i++) {
        if (sequence[i] == '>') {
            leftCount++;
        }
        else if (sequence[i] == '<') {
            if (leftCount > 0) {
                leftCount--;
                count++;
            }
        }
    }

    return count * 2;
}

int main() {
    int n;
    string sequence;

    cout << "Nhap so nguoi: ";
    cin >> n;
    cout << "Nhap chuoi: ";
    cin >> sequence;

    int result = countHandshakes(n, sequence);
    cout << "So lan bat tay: " << result << endl;

    return 0;
}