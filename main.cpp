#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <cstring>
#include <cctype>

//#include <print>

//using string = std::string;   
   
using namespace std;


typedef long long int int64;



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



void changeFile(string fileName, string data){
   
   
   
   
    ofstream myStream;
    //myStream.open(fileName.c_str(), fstream::in | fstream::out);     
    myStream.open(fileName);     

    myStream << data;


    myStream.close();
}









void  rplc1(char* b){
   

int length = strlen(b);

char str[length];

strncpy(str, b, length-1); 
str[length-1] = '\0'; 

cout << str << endl; 
   
   
}



char punct(const char *a, int len) {
    for (int i = 0; i < len; i++) {
        if (ispunct(a[i]))
            { 
               return i; 
            }
    }
    return -1;
}




void ParsingVar(string& a, int64& startingPoint){
 

//auto aaz = a.substr() 
  
  
cout << startingPoint << " ___2" << endl;
  
  
cout << "address  " << &startingPoint << endl;



}





int main(int argc, char**argv) {


/*
const char *bz1 = "abce1 @";
int z1sizeof1 = strlen(bz1);

int lchpuna = punct(bz1, z1sizeof1);


cout << lchpuna << endl;

return 1;
*/
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







////////////////



fstream fl;

 int ifmatch=0;


if (argc<3) {
  
  
  
string flnm1qz =  "k.cpp";  


string res = ""
"#include <iostream> \n"
"#include <string> \n"
"using namespace std;\n"
"int main(){\n"
"cout << \"Hello\" << endl;\n"     
"return 0;\n"
"}\n";


changeFile("./"+flnm1qz+"", res);


string aa_1 = "g++ -o ./prog.o "+flnm1qz+"   && ./prog.o  ";

//const char* cmnd1= "g++ -o ./prog.o flnm1qz && ./prog.o";


  
  
   
   
   cout << "uups" << endl;
   
   
   cout << "result" << endl;
   system(aa_1.c_str());
  
  
  
 
string a_z1 = R"(

var s = 15;
var k = z 15;
string a = "qqq";
string c = "qqq";
f32 dd = 15.3;
f64 aaa = 331;
Var zzz = 15;
)";  
  
    

cout << " ---------- \n"; 





int64 cntqofprs1 = 0;


cout << &cntqofprs1 << endl;

for(auto x : a_z1) {
   
  switch (x) {
     /*case 'a':  
     
     
     
     cout << "1111" << endl; 
     
     
     break;
     */
     case 'v': case 'V':
      
       //ParsingVar(a_z1, cntqofprs1);
     
    
     
     
     cout << "111" << endl; 
      
       break;

     
     case 'z':
         cout << "2222222" << endl;
     break;
   
   
   
   //for default values 
     default: 
      cout << "333333" << endl;
 
     
     //cout << "" << endl;
  
  } 
   
   //cout << x << endl;
   
   cntqofprs1++;
}   
   
   
   
   exit(0);
   return 0;
   
   
} else {
   
 

   
for (int i = 1; i < argc; ++i) {


if (strcmp(argv[i], "-c") == 0 || strcmp(argv[i], "--compile") == 0) {

   ifmatch=1;

string prfl1 = argv[i+1];


 ifstream fileq(prfl1);
 
 
    if (/*!fileq*/ fileq.fail())
    {  
        cout << "File opening failed\n";
        return 0;
    } 
  





   cout << " oh yeah" << endl;
   
   
   

} else if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {

   cout << " Help" << endl;

ifmatch=1;


} else if (strcmp(argv[i], "-v") == 0 || strcmp(argv[i], "--version") == 0) {
   cout << "version 0.0001\n";
}   else {
   //ifmatch=0;

}
   
}


}

if (ifmatch == 0){
   cout << "zzz nothing you got here "<< endl;
}

      //cout << "zzz" << endl;
      //cout << argv[1] << endl;
      //cout << argv[2] << endl;

//fl.







int a = 15;


switch(a) {


case 1:
   cout << " 0 " << endl;
break;

case 3:
   cout << " 3 " << endl;
break;  
  
default:
   //cout << " xz " << endl;
break;   
   
}









//char zzz = new char[15];
//std::print("hehe");

//delete[] zzz;

///////////////////


   return 0;
}
