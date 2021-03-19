#include <iostream>
#include <cctype>
#include "funcs.h"
using namespace std;

// add functions here

string removeLeadingSpaces(string line){
  string s;
  int i = 0;
  while(isspace(line[i])){
    i++;
  }
  for(int j = i; j < line.length(); j++){
    s += line[j];
  }
  return s;
} 

int countChar(string line, char c){
  int count = 0;
  for(char x: line){
    if(x == c){
      count++;
  }
  }
  return count;
}

string getTab(int num){
  string tab = "";
  if(num == 0){
    return tab;
  }
  for(int i = 0; i < num; i++){
    tab += "\t";
  }
  return tab;
}
