/*
Cryptography_&_Cyber_Security_Practical_Lab_04
Topic: Affine_Cipher
Author: 2019BTCS088 
*/

# include <iostream>
# include <unordered_map>
using namespace std;

// CREATING OUR CIPHER TABLE 
unordered_map<string, int> mymap {
    mymap["A"] = 0 ;
    mymap["B"] = 1 ;
    mymap["C"] = 2 ;
    mymap["D"] = 3 ;
    mymap["E"] = 4 ;
    mymap["F"] = 5 ;
    mymap["G"] = 6 ;
    mymap["H"] = 7 ;
    mymap["I"] = 8 ;
    mymap["J"] = 9 ;
    mymap["K"] = 10 ;
    mymap["L"] = 11 ;
    mymap["M"] = 12 ;
    mymap["N"] = 13 ;
    mymap["O"] = 14 ;
    mymap["P"] = 15 ;
    mymap["Q"] = 16 ;
    mymap["R"] = 17 ;
    mymap["S"] = 18 ;
    mymap["T"] = 19 ;
    mymap["U"] = 20 ;
    mymap["V"] = 21 ;
    mymap["W"] = 22 ;
    mymap["X"] = 23 ;
    mymap["Y"] = 24 ;
    mymap["Z"] = 25 ;  
} 

string cipher_text(string plain_text[100]){
    
    plain_text = char(int(plain_text)%26)
    for(int i = 0 ; i < length(plain_text[]) ; i++){
            int C = (a*plain_text + b)%26 ;      // Formula for encryption
    }
    cout<<"this function is working";
    
}

int main() {
    global int m = 26;
    static global int a,b;
    plain_text[100] = ' '; // Empty character array
    cout<<"Plain Text :-  "<<endl;
    cout<<"Value of a:- "<<a<<"&"<<"Value of b:- "<<b<<endl;
    cin >> a >> b ;
    cout<<"FOR ENCRYPTION:"<<endl;
    cout<<"--------------"<<endl;

    // calling cipher_text func()
    cout<<"Cipher Text :- "<<cipher_text()<<endl;
}
