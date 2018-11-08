#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s){
    for(unsigned int i = 0; i < s.length() / 2; i++){
        if(s[i] != s[s.length() - 1 - i]){
            return false;
            break;
        }
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    isPalindrome(s) ? cout << "Yes \n" : cout << "No \n";
    system("pause");
    return 0;
}
