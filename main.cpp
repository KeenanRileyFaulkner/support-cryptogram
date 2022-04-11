#include <iostream>
#include <string>

void decrypt(std::string& str);

int main() {
    std::string firstString = "AJCJC";
    std::string secondString = "LZPD-LDYFDZIIPQF";
    std::string thirdString = "ZEWPBYD ICCUPQFB";
    std::string fourthString = "ICBBZFC PQBUDJKUYD YD ICQUYD";

    decrypt(firstString);
    decrypt(secondString);
    decrypt(thirdString);
    decrypt(fourthString);
}


void decrypt(std::string& str) {
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == 'A') {
            str.replace(i, 1, "Q");
        }
        else if (str[i] == 'B') {
            str.replace(i, 1, "S");
        }
        else if (str[i] == 'C') {
            str.replace(i, 1, "E");
        }
        else if (str[i] == 'D') {
            str.replace(i, 1, "R");
        }
        else if (str[i] == 'E') {
            str.replace(i, 1, "D");
        }
        else if (str[i] == 'F') {
            str.replace(i, 1, "G");
        }
        else if (str[i] == 'I') {
            str.replace(i, 1, "M");
        }
        else if (str[i] == 'J') {
            str.replace(i, 1, "U");
        }
        else if (str[i] == 'K') {
            str.replace(i, 1, "C");
        }
        else if (str[i] == 'L') {
            str.replace(i, 1, "P");
        }
        else if (str[i] == 'P') {
            str.replace(i, 1, "I");
        }
        else if (str[i] == 'Q') {
            str.replace(i, 1, "N");
        }
        else if (str[i] == 'U') {
            str.replace(i, 1, "T");
        }
        else if (str[i] == 'W') {
            str.replace(i, 1, "V");
        }
        else if (str[i] == 'Y') {
            str.replace(i, 1, "O");
        }
        else if (str[i] == 'Z') {
            str.replace(i, 1, "A");
        }
    }

    std::cout << str << std::endl;
}