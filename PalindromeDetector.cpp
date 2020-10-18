#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

//#define pass (void)0

void reverse(string s)
{ int x = (s.size())-1;
  int l = 0;
  for( ; ; )
  {if (s[l] != s[x]){cout<< "The word isn't the same backward. \n"; break;}
  else if (l>=x){cout<<"The word is the Same backward. \n"; break;}
  else if (s[l] == s[x]){l++; x--;}}}

int main()
{  string word;
   cout << "Enter a word please to know if it's the same backward of not. (Note: Type Q to quit.) \n";
   while(1){
   cin >> word;
   if(word == "Q") {break;}
   reverse(word);}
   system("pause");
    return 0;}
