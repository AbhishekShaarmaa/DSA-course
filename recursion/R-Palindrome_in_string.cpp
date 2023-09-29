#include <iostream>
using namespace std;

bool palindrome(string str, int i, int j)
{

  if (str[i] == str[j])
  {
    cout << str[i] << endl;
    cout << str[j] << endl;
    // i++;
    // j--;
    palindrome(str, ++i, --j);

    return true;
  }
  else
  {
    return false;
  }
}
int main()
{
  //    declaring string
  string name = "hello";
  bool ans = palindrome(name, 0, name.length() - 1);
  cout << ans;

  return 0;
}