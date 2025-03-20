#include <iostream>
using namespace std;

int reverse(int n) {
    int reversedNum = 0;
    while (n > 0) {
        reversedNum = reversedNum * 10 + (n % 10); // 숫자를 뒤집음
        n /= 10;
    }
    return reversedNum;
}

void main() {
    int num;
    cout << "정수를 입력하세요: ";
    cin >> num;
    cout << "역순 변환 결과: " << reverse(num) << endl;
}

int main() {
    main();
    return 0;
}