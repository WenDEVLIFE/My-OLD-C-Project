#include <iostream>

using namespace std;

int main() {
  
    string word_array[] = {"burger","cheese","hotdogs","Macaroni"};
  
    for (string s : word_array) {
        cout << s << " ";
    }
  
    return 0;
}