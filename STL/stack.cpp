#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack <string> s;
    
    s.push("love");
    s.push("babbar");
    s.push("kumar");
    
    
    cout<<"Top Element of the stack "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element of the stack "<<s.top()<<endl;
    //for checking wheather the dataset is empty or not
    cout<<"The stack is empty or not "<<s.empty()<<endl;
}