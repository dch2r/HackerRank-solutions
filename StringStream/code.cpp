#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    // Complete this function
    vector<int> v;  //creating vector
    stringstream ssm(str);
    
    int a; //variable to extract int values from stringstream
    char comma;
    
    while(ssm){
        if(ssm.peek()!= ','){
            if(ssm>>a){
                v.push_back(a);
            }
            }else{
                ssm>>comma;
            }
        }
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
