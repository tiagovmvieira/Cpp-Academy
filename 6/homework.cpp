#include <cstdlib> 
#include <iostream>
#include <string>
#include <vector>

std::string CaesarCipher(std::string theString, int key, bool toEncrypt);

int main(){

    std::string theString = "Make me secret";
    
    std::string encryptedStr = CaesarCipher(theString, 5, true);
    std::string decryptedStr = CaesarCipher(encryptedStr, 5 , false);
    
    std::cout << "Encrypted " << encryptedStr << "\n";
    std::cout << "Decrypted " << decryptedStr << "\n";

    return 0;
}

std::string CaesarCipher(std::string theString, int key, bool toEncrypt){
    std::string returnString = "";

    int charCode = 0;
    char letter;

    if (toEncrypt){
        key *= -1;
    }

    for(char& c: theString){
        if(isalpha(c)){
            charCode = (int)c;
            charCode += key;

            if(isupper(c)){
                if(charCode > (int)'Z'){
                    charCode -= 26;
                } else if(charCode < (int)'A'){
                    charCode += 26;
                }
            } else {
                if(charCode > (int)'z'){
                    charCode -= 26;
                } else if(charCode < (int)'a'){
                    charCode += 26;
                }
            }
            letter = charCode; // int to char conversion
            returnString += letter;
        }
        else {
            letter = c;
            returnString += letter;
        }
    }

    return returnString;
}