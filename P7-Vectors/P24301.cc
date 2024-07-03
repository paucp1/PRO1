/*
Feu una funció que retorni la concatenació de v1 i v2. És a dir, cal retornar un vector que tingui els elements de v1 seguits dels elements de v2.

C++	
    vector<int> concatenacio(const vector<int>& v1, const vector<int>& v2);
Java	
    public static int[] concatenacio(int[] v1, int[] v2);
Python	
    concatenacio(v1, v2);  # returns list
MyPy	
    concatenacio(v1: list[int], v2: list[int]) -> list[int]
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenacio(const vector<int>& v1, const vector<int>& v2) {
    vector<int> conc(v1.size() + v2.size());
    for (int i = 0; i < v1.size(); ++i) {
        conc[i] = v1[i];
    }
    for (int i = 0; i < v2.size(); ++i) {
        conc[v1.size() + i] = v2[i];
    }
    return conc;
}

int main () {
    int x;
    cin >> x;
    vector<int> v1(x);
    for (int i = 0; i < x; ++i) {
        cin >> v1[i];
    }
    int y;
    cin >> y;
    vector<int> v2(y);
    for (int i = 0; i < y; ++i) {
        cin >> v2[i];
    }
    vector<int> res = concatenacio(v1, v2);
    for (int i = 0; i < x + y; ++i) {
        cout << res[i];
    }
    cout << endl;
}
