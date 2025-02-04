#include <iostream>
#include <string>
using namespace std;

char a[26] = {'a', 'b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char key[26] = {'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a'};

string stringEncryption(string s) {
    string encryptedString = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            for (int j = 0; j < 26; j++) {
                if (s[i] == a[j]) {
                    encryptedString += key[j];
                    break;
                }
            }
        } else {
            encryptedString += s[i];
        }
    }
    return encryptedString;
}

string stringDecryption(string s) {
    string decryptedString = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            for (int j = 0; j < 26; j++) {
                if (s[i] == key[j]) {
                    decryptedString += a[j];
                    break;
                }
            }
        } else {
            decryptedString += s[i];
        }
    }
    return decryptedString;
}

int main() {
    string str;
    cout << "Enter text: ";
    getline(cin,str);
    cout << "Plain text: " << str << endl;
    string encryptedString = stringEncryption(str);
    cout << "Encrypted message: " << encryptedString << endl;
    cout << "Decrypted message: " << stringDecryption(encryptedString) << endl;
    return 0;
}
