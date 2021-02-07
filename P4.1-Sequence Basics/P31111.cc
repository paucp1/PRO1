#include <iostream>
using namespace std;

int main () {
   char n;
   int c = 0;
   bool trobat = false;
   
   while (cin >> n and not trobat) {
       if (n == '(') ++c;
       else if (n == ')') --c;
       if (c < 0) trobat = true;
   }
   
   if (c == 0) cout << "si" << endl;
   else cout << "no" << endl;
}
