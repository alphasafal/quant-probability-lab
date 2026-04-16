#include <iostream>
using namespace std;

int main() {
    char exp1[] = {'A','B','C'};
    int exp2[] = {1,2,3,4};

    int count = 0;

    for (char a : exp1) {
        for (int b : exp2) {
            count++;
        }
    }

    cout << count << endl;
}