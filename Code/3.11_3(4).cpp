#include<iostream>
#include<cstring>
using namespace std;
string encrypt(const string &input){  
    string key="4962873";
    string output;
    for (size_t i=0,j=0;i<input.length();++i){  
        char c=input[i]; 
        int idx=c-' ';  
        idx=(idx+(key[j%key.length()]-'0'))%95;   
        c=idx+' ';
        if(c<' ')c+=95;
        output+=c;
        ++j;
    }
    return output;
} 
string decrypt(const string&input){
    string key="4962873";
    string output;
    for (size_t i=0,j=0;i<input.length();++i){
        char c=input[i];
        int idx=c-' ';
        idx=(idx-(key[j%key.length()]-'0'+95)%95+95)%95;
        c=idx+' '; 
        if(c<' ')c+=95;
        output+=c;  
        ++j;
    }
    return output;  
}  
  
int main(){
    string input;
    cin>>input;
    string encrypted=encrypt(input);
    string decrypted=decrypt(encrypted);
    cout<<"After encrypte:"<<encrypted<<endl;
    cout<<"After decrypte:"<<decrypted<<endl;
    return 0;  
}
