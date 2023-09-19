#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char input[81];
  char str[81];
  char str2[81];

  for (int i = 0; i < 81; i++){
    input[i] = '\0';
    str[i] = '\0';
    str2[i] = '\0';
  }
  cin.get(input, 81);
  cin.get();
  int inputLength = strlen(input) - 1;
  int strCount = 0;
  int str2Count = 0;

  for (int i = 0; i < inputLength + 1; i++){
    if(isalpha(input[i]) || isdigit(input[i])){
      str[strCount] = tolower(input[i]);
      strCount++;
    }
  }
  
  for (int i = inputLength; i > -1; i--){
    if(isalpha(str[i]) || isdigit(str[i])){
      str2[str2Count] = str[i];
      str2Count++;
    }
  }
  str2[str2Count] = '\0';
  str[strCount] = '\0';

  if(strcmp(str, str2) == 0){
    cout << "Palindrome" << endl;
  }
  else {
    cout << "Not a Palindrome" << endl;
  }
  cout << str << endl;
  cout << str2 << endl;
  
  
  return 0;
}
