//Easy Pronunciation
// Words that contain many consecutive consonants, like "schtschurowskia", are generally considered somewhat hard to pronounce.

// We say that a word is hard to pronounce if it contains 
// 4
// 4 or more consonants in a row; otherwise it is easy to pronounce. For example, "apple" and "polish" are easy to pronounce, but "schtschurowskia" is hard to pronounce.

// You are given a string 
// S
// S consisting of 
// N
// N lowercase Latin characters. Determine whether it is easy to pronounce or not based on the rule above — print YES if it is easy to pronounce and NO otherwise.


// My solution 

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int sze;
//     string ip[n];
//     int cnt = 0;
//     bool spell = true;
    
//     for(int i = 0; i < n; i++){
//         cin>>sze;
//         cin>>ip[i];
//     }
    
//     for(int j = 0; j < n; j++){
        
//         auto it = ip[j].begin();
//         for(int k = 0; k < ip[j].length(); k++){
//             if(*it != 'a' ||*it != 'e' ||*it != 'i' ||*it != 'o' ||*it != 'u'){
//                 cnt++;
//             }
//             else if(*it == 'a' ||*it == 'e' ||*it == 'i' ||*it == 'o' ||*it == 'u'){
//                 cnt = 0;
//             }
//             if(cnt > 4){
//                 cout<<"NO"<<endl;
//                 spell = false;
//                 break;
//             }
//             it++;
//         }
//         if(spell == true){
//             cout<<"YES"<<endl;
//             cnt = 0;
//         }
//     }
// }

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int cnt = 0;
        bool easy = true;
        
        for (int i = 0; i < n; i++) {
            if (!isVowel(s[i])) {
                cnt++;
            } else {
                cnt = 0;
            }
            
            if (cnt >= 4) {
                easy = false;
                break;
            }
        }
        
        if (easy) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}