#include <iostream>
#include "string"
using namespace std;

int main(){

  string word;
  int i = 1;
  while (free){

    cin >> word;
    if (word == "HELLO"){
    cout << "Case " << i <<": ENGLISH" << endl;
    i++;
  }
    else if (word == "HOLA"){
      cout << "Case " << i << ": SPANISH" << endl;
      i++;
 }
    else if (word == "HALLO"){
      cout << "Case " << i <<": GERMAN" << endl;
      i++;
 }
    else if (word == "BONJOUR"){
      cout << "Case " << i <<": FRENCH" << endl;
      i++;
 }
    else if (word == "CIAO"){
      cout << "Case " << i <<": ITALIAN" << endl;
      i++;
 }
    else if (word == "ZDRAVSTVUJTE"){
    cout << "Case " << i <<": RUSSIAN" << endl;
    i++;
 }
    else if (word == "#"){
      break;
    }
  else {
    cout <<"Case " << i << ": UNKNOWN" << endl;
    i++;
  };


}


}
