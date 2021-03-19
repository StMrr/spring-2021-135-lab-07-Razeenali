#include <iostream>
#include <cctype>
#include <vector>
#include <string>
#include "funcs.h"
using namespace std;

int main()
{
 string line, indented;
  vector<string> task_b;
  int mcount = 0;
  cout << "Remved Leading Spaces: " << endl;
  while(getline(cin,line)){
    cout << removeLeadingSpaces(line) << endl;
    mcount = mcount -  countChar(removeLeadingSpaces(line),'}');
    indented = getTab(mcount)+ removeLeadingSpaces(line);
    task_b.push_back(indented);
    mcount = mcount + countChar(removeLeadingSpaces(line), '{'); 
  }
  cout << "-------------------------------------------------------" << endl;
  cout << "Counting Char and adding Indentations: " << endl;
  for(int i=0;i < task_b.size();i++){
      cout << task_b[i] << endl;
    }
  return 0;
}
