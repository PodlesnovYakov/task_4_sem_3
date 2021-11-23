#include <string>
#include <iterator>
#include <utility>
#include <iostream>
#include <sstream> 
#include <locale.h>
#include <algorithm>
#include <ctime>
using namespace std;
string check_probel(string str)
{
        int i = str.find("  ");
        while (i != string::npos) {
            str.erase(i, 1);
            i = str.find("  ");

        }
        if (*(str.begin()) == ' ') {
            str.erase(0, 1);
        }
        if (!str.empty() && *(str.end() - 1) == ' ') {
            str.erase(str.size() - 1, 1);
        }   
    return str;
}


string del_word_last(string str) {
    string str_check;
    int i = str.rfind(' ');
    str.push_back(' ');
    str.insert(0, " ");
    str_check = str.substr(i+1, str.size() - i);
    i = str.find(str_check);
    while (i != string::npos) {
        str.erase(i, str_check.size()-1);
        i = str.find(str_check);

    }
    if (*(str.begin()) == ' ') {
        str.erase(0, 1);
    }
    if (!str.empty() && *(str.end() - 1) == ' ') {
        str.erase(str.size() - 1, 1);
    }
    return str;
}
string duo_symbols(string str) {
    string str2;
    if (str.empty()) {
        str = "";
    }
    else {
        for (auto it = str.begin(); it != str.end(); it++) {
            str2.push_back(*it);
            str2.push_back(*it);
        }
        str2 = check_probel(str2);
    }
    
    return str2;
}

int main()
{  

}
