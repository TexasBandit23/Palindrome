#include <iostream>
#include <cstring>

using namespace std;

int main()
//initialize all arrays to hold 81 characters (need space for 80 and null character)
{
  char input[81];
  char str[81];
  char str2[81];

  //go through all arrays and set all characters to null character to clear memory
  for (int i = 0; i < 81; i++){
    input[i] = '\0';
    str[i] = '\0';
    str2[i] = '\0';
  }

  //gets up to 81 characters from input and puts them in an array
  cin.get(input, 81);
  cin.get();
  int inputLength = strlen(input) - 1;
  int strCount = 0;
  int str2Count = 0;

  //iterate through input array, convert to lowercase and remove punctuation and add to new array
  for (int i = 0; i < inputLength + 1; i++){
    if(isalpha(input[i]) || isdigit(input[i])){
      str[strCount] = tolower(input[i]);
      strCount++;
    }
  }

  //iterate backwards through array with no punctuation and add elements to new array 
  for (int i = inputLength; i > -1; i--){
    if(isalpha(str[i]) || isdigit(str[i])){
      str2[str2Count] = str[i];
      str2Count++;
    }
  }
  //add null character to both arrays
  str2[str2Count] = '\0';
  str[strCount] = '\0';

  //when compared, if the value is 0 they are the same, if the value is not 0, they are different
  if(strcmp(str, str2) == 0){
    cout << "Palindrome" << endl;
  }
  else {
    cout << "Not a Palindrome" << endl;
  }
  
  
  return 0;
}
