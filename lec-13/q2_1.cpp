#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);

    int i = 0;
    int j = v.size() - 1;

    while (i < j) {
        if (v[i] == 0) {
            i++;
        } else if (v[j] == 1) {
            j--;
        } else if (v[i] == 1 && v[j] == 0) {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }

    for (int k = 0; k < v.size(); k++) {
        cout << v[k] << " ";
    }

    return 0;
}
