#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "정수를 입력하세요 (100000 미만): ";
    cin >> number;

    if (number < 0 || number >= 100000) {
        cout << "입력값이 범위를 벗어났습니다." << endl;
        return 1;
    }

    // 각 자릿수를 추출하여 읽을 수 있는 형식으로 출력
    int 만 = number / 10000; // 1만 단위
    int 천 = (number % 10000) / 1000; // 1천 단위
    int 백 = (number % 1000) / 100; // 1백 단위
    int 십 = (number % 100) / 10; // 1십 단위
    int 일 = number % 10; // 1일 단위

    // 만 단위
    if (만 > 0) {
        if (만 == 1) cout << "만 ";  //(1일 때는 "만"만 출력)
        else cout << 만 << "만 ";
    }

    // 천 단위
    if (천 > 0) {
        if (천 == 1) cout << "천 ";  //(1일 때는 "천"만 출력)
        else cout << 천 << "천 ";
    }

    // 백 단위
    if (백 > 0) {
        if (백 == 1) cout << "백 ";  //(1일 때는 "백"만 출력)
        else cout << 백 << "백 ";
    }

    // 십 단위
    if (십 > 0) {
        if (십 == 1) cout << "십 ";  //(1일 때는 "십"만 출력)
        else cout << 십 << "십 ";
    }

    // 일 단위 (0일은 출력하지 않음)
    if (일 > 0) cout << 일;

    cout << endl;
    
    return 0;
}

//자릿수에서 1일 때는 해당 자릿수 이름만 출력하고, 그 외의 자리는 그대로 출력하는 방식으로 조건을 추가.