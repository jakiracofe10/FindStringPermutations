#include <iostream>
#include <cstring>

using namespace std;

void findPermutations(string s1, int index) {
    if (index == s1.length()) {
        cout << s1 << endl;
        return;
    }
    for (int i = index; i < s1.length(); i++) {
        swap(s1[index],s1[i]);
        findPermutations(s1,index+1);
        swap(s1[index],s1[i]);
    }



}

int main() {
    string input;
    cin >> input;
    findPermutations(input,0);
    return 0;
}