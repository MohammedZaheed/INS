#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> key = {{7, 8}, {11, 11}};
vector<vector<int>> multiply(const vector<vector<int>>& key, const vector<vector<int>>& arr) {
    int rows = key.size();
    int cols = arr[0].size();
    vector<vector<int>> arr2(rows, vector<int>(cols, 0));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            for (int k = 0; k < arr.size(); k++) {
                arr2[i][j] += key[i][k] * arr[k][j];
            }
        }
    }
    return arr2;
}
string encrypt(string s) {
    string str = "";
    int n = (s.length() % 2 == 0) ? s.length() / 2 : s.length() / 2 + 1;
    vector<vector<int>> arr(2, vector<int>(n, 0));
    int i;

    for (i = 0; i < s.length() / 2; i++) {
        int c = s[2 * i] - 'a';
        int d = s[2 * i + 1] - 'a';
        arr[0][i] = c;
        arr[1][i] = d;
    }
    if (2 * i < s.length()) {
        arr[0][i] = s[2 * i] - 'a';
        arr[1][i] = 'x' - 'a';
    }
    vector<vector<int>> arr2 = multiply(key, arr);
    for (int j = 0; j < arr2[0].size(); j++) {
        str += (char)(arr2[0][j] % 26 + 'a');
        str += (char)(arr2[1][j] % 26 + 'a');
    }
    return str;
}

int main() {
    cout << encrypt("short") << endl;
    return 0;
}
