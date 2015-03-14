#include <iostream>

using namespace std;
string nbsp = " ";
string boolExp = "";
string RaisedToOne(string s0[2], string s1[2]){
string toReturn = "";
    if(s0[0] == s1[0]){
        toReturn = toReturn + s0[0] +nbsp;
    }
    if(s0[1] == s1[1]){
        toReturn = toReturn + s0[1]+nbsp;
    }
    return toReturn;
}
string RaisedToTwo(string s0[2], string s1[2],string s2[2], string s3[2]){
string toReturn = "";
    if((s0[0] == s1[0]) && (s1[0] == s2[0]) && (s2[0] == s3[0])){
        toReturn = toReturn + s0[0]+nbsp;
    }
    if((s0[1] == s1[1]) && (s1[1] == s2[1]) && (s2[1] == s3[1])){
        toReturn = toReturn + s0[1]+nbsp;
    }
    return toReturn;
}
int main()
{
    string result = "";
    int i0,i1,i2,i3;
      cout << "Enter 1 or 0 for i0: " <<endl;
    cin >> i0;
      cout << "Enter 1 or 0 for i1: " <<endl;
    cin >> i1;
      cout << "Enter 1 or 0 for i2: " <<endl;
    cin >> i2;
      cout << "Enter 1 or 0 for i3: " <<endl;
    cin >> i3;

    if((i0 == 1) && (i1 == 1) && (i2 == 2) && (i3 == 1)){
     boolExp = "A^B^ + A^B + AB^ + AB";
     string in0[2] = {"A^","B^"};
     string in1[2] = {"A^","B"};
     string in2[2] = {"A","B^"};
     string in3[2] = {"A","B"};
     string outTo0 = RaisedToTwo(in0,in1,in2,in3);
     if(outTo0 != ""){
        result = result +  " + " + outTo0;
     }else{
        result =  outTo0;
     }
    }else{

    if((i0 == 1) && (i1 == 1)){
     if(boolExp != ""){
        boolExp = boolExp + " + " + " A^B^ + A^B";

     }else{
        boolExp = "A^B^ + A^B";
     }
     string in0[2] = {"A^","B^"};
     string in1[2] = {"A^","B"};
     string outTo1 = RaisedToOne(in0,in1);
     if(result != ""){
        result = result +  " + " + outTo1;
     }else{
        result =  outTo1;
     }
    }

    if((i2 == 1) && (i3 == 1)){
    if(boolExp != ""){
        boolExp = boolExp + " + " + " AB^ + AB";
     }else{
        boolExp = "AB^ + AB";
     }
     string in0[2] = {"A","B^"};
     string in1[2] = {"A","B"};
     string outTo2 = RaisedToOne(in0,in1);
     if(result != ""){
        result = result +  " + " + outTo2;
     }else{
        result =  outTo2;
     }
    }
   //columns
    if((i0 == 1) && (i2 == 1)){
    if(boolExp != ""){
        boolExp = boolExp + " + " + " A^B^ + AB^";
     }else{
        boolExp = "A^B^ + AB^";
     }
     string in0[2] = {"A^","B^"};
     string in1[2] = {"A","B^"};
     string outTo3 = RaisedToOne(in0,in1);
     if(result != ""){
        result = result +  " + " + outTo3;
     }else{
        result =  outTo3;
     }
    }
    if((i0 == 1) && (i2 == 1)){
    if(boolExp != ""){
        boolExp = boolExp + " + " + " A^B + AB";
     }else{
        boolExp = "A^B + AB";
     }
     string in0[2] = {"A^","B"};
     string in1[2] = {"A","B"};
     string outTo4 = RaisedToOne(in0,in1);
     if(result != ""){
        result = result +  " + " + outTo4;
     }else{
        result =  outTo4;
     }
    }
    }
    cout << "Bool expression => " + boolExp<<endl;
    cout << "Simplified to => " + result<<endl;

    return 0;
}
