#include <iostream>
#include <string>
using namespace std;

class phone_number {
private:
    string num;

    inline bool check_num(string num) {
        if (num.length() != 10) {
            return false;
        }
        for (char c : num) {
            if (!isdigit(c)) {
                return false;
            }
        }
        return true;
    }

public:
    void input_num() {
        cout << "Enter phone number: ";
        cin >> num;
        if (check_num(num)) {
            cout << "Your entered number is: " << num << endl;
        } else {
            cout << "Entered Phone number is wrong" << endl;
            if (!num.empty()) {
                cout << "Your entered number is: " << num << endl;
            }
        }
    }
};

int main() {
    phone_number num;
    num.input_num();
    return 0;
}
