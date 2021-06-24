#include <iostream>
#include <set>
using namespace std;
 
bool notNum (char c){
    if ('0' <= c && c <= '9') return false;
    else return true;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    string s;
    set<string> st;
    cin >> N;
    while (N--){
        cin >> s;
        st.insert(s);
    }
    int correct = 0, wrong = 0;
    while (cin >> s){
        if (s[0] != 'B'){
            wrong++;
            cout << "N\n";
        } else if (notNum(s[1]) || notNum(s[2])){
            wrong++;
            cout << "N\n";
        } else if (st.count(s.substr(3, 4)) == 0){
            wrong++;
            cout << "N\n";
        } else if (notNum(s[7]) || notNum(s[8])){
            wrong++;
            cout << "N\n";
        } else {
            correct++;
            cout << "Y\n";
        }
    }
    cout << (double)wrong / (correct + wrong) << endl;
    return 0;
}
