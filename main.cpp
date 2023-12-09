#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    int number;
    vector<int> v;
    for (int i = 0; i < N; i++) {
        cin >> number;
        v.push_back(number);
    }

    sort(v.begin(), v.end());

    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}