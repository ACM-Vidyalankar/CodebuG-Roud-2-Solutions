#include <iostream>
using namespace std;

void one(string s){
        int len = s.length();
        // changed 'len+1' to 'len'
        for (int i = 0;i < len; i++){
            // changed '!=' to '=='
            if(i%2 ==0)
                // changed 'i++' to 'i'
                cout<< s[i];
        }

}

void two(string s){
       int len = s.length();
       // changed 'len+1' to 'len'
       for (int i = 0;i < len; i++){
           // changed '==' to '!='
           if(i%2 !=0)
                // changed 'i++' to 'i'
                cout << s[i];
       }

    }

int main() {

    string s;
    int t;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++){
        cin >> s;
        one(s);
        cout << " ";
        two(s);
        cout << endl;
    }
    return 0;
}