#include<iostream>
#include <cctype>
#include<string>
using namespace std;




/*
-- length of str:
#include<cstring> // Mandatory

    char str[] = {'a', 'b', 'c', '\0'};
    cout << strlen(str) << endl; // 3
    char s[] = "Hello";
    cout << strlen(s); // 5



-- Access str by index no:
int main() {
    char s[] = "Hello";
    cout << s[2];
    return 0;
}



-- Take input from user:
int main() {
    char str[100];
    cin >> str; // hello world
    cout << str; // hello

    cin.getline(str, 100); // hello world
    cout << str; // hello world
}


int main() {
    char str[100];
    cin.getline(str, 100, '.'); // take input until write .
    cout << str;
}


------------------------- Dynamic String ----------------------------------
-- string resize:
int main() {
    string str = "Hello world!";
    cout << str; // Hello world!
    str = "Hello";
    cout << str; // Hello
}


-- String take input:
int main() {
    string str;
    // cin >> str; // hello world
    // cout << str; // hello
    getline(cin , str); // hello world
    cout << str; // hello world
}


-- str concatenation:
int main() {
    string str1 = "Hello";
    string str2 = "world";
    string a = str1 + " " + str2;
    cout << a;
}


-- str compare:
int main() {
    string str1 = "Hello";
    string str2 = "world";
    cout << (str1 == str2); //0
}


-- str length:
int main() {
    string str = "Hello";
    cout << str.length();
}

-- for loop over string with condition:
int main() {
    string str = "Hello world";
    int cnt = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == 'o') {
            cnt++;
        }
    }
    cout << cnt;
}



prob1: Reverse a string:
int main() {
    string str = "Hello";
    int st = 0, end = str.length() - 1;
    while(st < end) {
        swap(str[st++] , str[end--]);
    }
    cout << str;
}

prob2: Valid palindrome or not?
#include<iostream>
#include <cctype>
#include<string>
using namespace std;

bool isAlphaNumeric(char ch) {
    if(
        (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
        return true;
    }
    return false;
}

bool isValidPalindrome(string str) {
    int st = 0, end = str.length() - 1;
    while(st < end) {
        // if(!isAlphaNumeric(str[st])) {
        //     st++;
        //     continue;
        // }
        // if(!isAlphaNumeric(str[end])) {
        //     end--;
        //     continue;
        // }
        if(!isalnum(str[st])) {
            st++;
            continue;
        }
        if(!isalnum(str[end])) {
            end--;
            continue;
        }
        if(tolower(str[st]) != tolower(str[end])) {
            return false;
        }
        st++, end--;
    }
    return true;
}

int main() {
    string str = "Ma$da&m";
    cout << isValidPalindrome(str);
}



prob 3: Reverse word in string:


int main() {
    string str = " the pen ";
    string sentence = "";
    reverse(str.begin(), str.end());

    for(int i = 0; i < str.length(); i++) {
        // create a word
        string word = "";
        while(str[i] != ' ' && i < str.length()) {
            word += str[i];
            i++;
        }
        // reverse individual word
        reverse(word.begin(), word.end());
        
        if(word.length() > 0) { // word is non empty
            sentence += " " + word;
        }
    }
    cout << sentence.substr(1); // start with 1st index. that is why removing 0th index
}
*/
