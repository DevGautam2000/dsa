#include "io/io.h"

class Solution{
public:

 string getPhoneNumber(string s) {

 	//* TC: O(n), SC: O(n)
     string ans = "";


    unordered_map<string, string> book = {
        {"one","1" },
        {"two","2" },
        {"three" ,"3"},
        {"four" ,"4"},
        {"five" ,"5"},
        {"six" ,"6"},
        {"seven" ,"7"},
        {"eight" ,"8"},
        {"nine" ,"9"},
        {"zero" , "0"},
        {"double","2"},
        {"triple","3"}
    };


    vector<string> words; 
    istringstream iss(s);
    string word;
    while(iss >> word)
        words.push_back(word);

  	//check condition
  	for(int i=0; i<words.size(); i++){
  	  		auto w = words[i];
  	
  	  		if(w == "double" or w == "triple"){
  	  			i++;
  	  		
  	  			for(int j=0; j<stoi(book[w]); j++)
  	  				ans += book[words[i]];
  	  			
  	  		}
  	  		else ans += book[w];

  	}
    

    return ans;
}  

} sol;

int main(){
    io();
    string pn  =  "five one zero six triple eight double nine triple six double four double zero";
    string pn = "nine nine nine nine triple nine double nine double nine";
    cout << " Solution: " << sol.getPhoneNumber(pn)  << endl;

    return 0;
}

