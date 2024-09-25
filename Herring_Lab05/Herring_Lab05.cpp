#include <iostream>
#include <vector>
#include <string>

using namespace std;


char cypher(char letter, vector<char> cypher) {
    int current = (int)letter;
    int temp;
    if (current >= 65 && current <= 90) {
        return cypher[current - 65];
    }else if (current >= 97 && current <= 122) {
        temp = current - 32;
        current = temp - 65;
        letter = cypher[current];
        current = ((int)letter) + 32;
        return (char)current;
        
        
    }else {
        return letter;
    }
}
int main()
{
    vector<char> stringVector{ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };
    string(text);
    cout << "Input text to cypher: ";
    getline(cin, text);
    int i = 0;
    while (i < (text.length())) {
        text.at(i) = cypher(text.at(i), stringVector);
        i++;
    }
    cout << "Encoded Message: " << text;
}

