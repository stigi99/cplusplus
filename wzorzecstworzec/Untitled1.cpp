#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <fstream>

using namespace std;

int main()
{
  string s, p;
  int i;



  // generujemy ³añcuch

    ifstream lancuch("lancuch.txt");
    lancuch>> s;
    lancuch.close();

  // generujemy wzorzec
    ifstream wzorzec("wzorzec.txt");
    wzorzec>> p;
    wzorzec.close();

  // wypisujemy wzorzec

  cout << p << endl;

  // wypisujemy ³añcuch

  cout << s << endl;

  // szukamy wzorca w ³añcuchu

  for(i = 0; i < s.length(); i++)
    cout << (p == s.substr(i, 2) ? "^": " ");

  cout << endl << endl;
  return 0;
}
