#include <iostream>
#include <string>
#include <map>



//using string = std::string;   
   
using namespace std;




enum TokenType {
    VAR,
    OBJECT,
    IDENTIFIER,
    NUMBER,
    STRING,
    OPERATOR,
    DELIMITER,
    WHITESPACE
};

struct Token {
    TokenType type;
    std::string value;
};





int main() {

typedef  unsigned long long int ULONG64;
typedef  long long int LONG64;

LONG64 z1 = 15211;
cout << z1 << endl;
   
map<string, string> str_vars;

map<string, ULONG64> uint64_vars;
map<string, LONG64> int64_vars;

map<string, unsigned int> uint32_vars;
map<string, int> int32_vars;

map<string, unsigned short> uint16_vars;
map<string, short> int16_vars;


map<string, float> float_vars;
map<string, double> double_vars;

map<string, char> char_vars;


map<string, string> functions;
functions["name_1"] = "main";

map<string,int> bz;

//bz["bz"] = 1252;
bz.insert({"bz", 1252});
auto c1 = bz.find("bz");


cout << c1->first << endl;
 
//std::map<string,int> s_trings;   

//s_trings['a'] = 1252;

//auto qz = s_trings.find('a');


cout << " void main() {  int a = 15; int b = 25; } " << endl;

//std::cout << qz->first << std::endl;
//std::cout << qz->second << std::endl;


   return 0;
}
