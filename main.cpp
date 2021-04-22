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
  bool restart = false;
  cout << "Remved Leading Spaces: " << endl;
  while(getline(cin,line)){
    cout << removeLeadingSpaces(line) << endl;
    mcount = mcount -  countChar(removeLeadingSpaces(line),'}');
    indented = getTab(mcount)+ removeLeadingSpaces(line);
    if(restart){ // gets rid of the extra tab now that it isn't needed for the other lines.
      mcount--;
      restart = false;
    }
    task_b.push_back(indented);
    mcount = mcount + countChar(removeLeadingSpaces(line), '{');
    if(countChar(removeLeadingSpaces(line), '(')+countChar(removeLeadingSpaces(line), ')') == 2){
      if(countChar(removeLeadingSpaces(line), '{') == 0){ //loops without brackets still have two parenthises
        //no matter what, allows me to check for a line with a pair of them but no bracket afterward
        mcount++;
        restart = true; //set as a way to trigger getting rid of the extra tab that gets added
      }
    }
  }
  cout << "-------------------------------------------------------" << endl;
  cout << "Counting Char and adding Indentations: " << endl;
  for(int i=0;i < task_b.size();i++){
      cout << task_b[i] << endl;
    }
  return 0;
}
