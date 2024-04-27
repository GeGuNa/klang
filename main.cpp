#include <iostream>
#include <string>
#include <map>



//using string = std::string;   
   
using namespace std;

int main(){
   

map<string,int> bz;

//bz["bz"] = 1252;
bz.insert({"bz", 1252});
auto c1 = bz.find("bz");


cout << c1->first << endl;
 
//std::map<string,int> s_trings;   

//s_trings['a'] = 1252;
//s_trings.insert('a':1252);

//auto qz = s_trings.find('a');




//std::cout << qz->first << std::endl;
//std::cout << qz->second << std::endl;


   return 0;
}
