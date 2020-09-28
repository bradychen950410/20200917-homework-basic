#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "請輸入數字：\n";
    cin >> num;
    if (num % 3 == 0) {
      cout << "This is 三的倍數";
    } else {
      cout << "This is not 三的倍數";
    }
}
