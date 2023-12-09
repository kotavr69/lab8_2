/*Вариант 11
Дана строка, набранная из слов, набранных заглавными буквами и
разделенных пробелами (одним или нескольким).
Вывести строку, содержащую эти же слова,
разделенные одним пробелом и расположенные в алфавитном порядке.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    string str;
    string rik = "";
    cout << "Введите слова заглавными буквами" << endl;
    getline(cin, str);
    str += ' ';
    int n = str.length();
    vector<string> l;
    for (int i = 0; i < n; i++) {
        if (((str[i] < 'A') || (str[i] > 'Z')) && (str[i] != ' ')) {
            cerr << "Ошибка! Не соответствует условию!" << endl;
            return 0;
        }
    }

    for (int i = 0; i < n; i++) {
        if (str[i] != ' ') {
            rik += str[i];
        }
        else {
            if (rik.length() > 0) {
                l.push_back(rik);
                rik = "";
            }
        }
    }
    sort(begin(l), end(l));
    for (string s : l) {
        cout << s << " ";
    }
