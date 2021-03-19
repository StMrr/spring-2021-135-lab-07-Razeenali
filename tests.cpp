#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Remove Leading Cases"){
    CHECK(removeLeadingSpaces("       int main(){   }     ")== "int main(){   }     ");
    CHECK(removeLeadingSpaces("Hello World!")== "Hello World!");
    CHECK(removeLeadingSpaces("               for(int i = 0; i < num; i--){  }")== "for(int i = 0; i < num; i--){  }");
    CHECK(removeLeadingSpaces("while(i > num)   {   }       ")== "while(i > num)   {   }       ");
}

TEST_CASE("counting characters"){
    CHECK(countChar("applebox in an applestore in Pen", 'p')==4);
    CHECK(countChar("while{}{}{",'{')== 3);
    CHECK(countChar(".............", '.')==13);
}
