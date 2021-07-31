#include <iostream>
#include <list>


using namespace std;


int main(){
    list<string> l;
    l.push_back("Hello how is the world the time");
    l.push_front("This ths time for awesome preparation");
    l.push_back("This the world of time that changes from one domain to other very quickly");
    int n=1;
    for (string i : l){
        cout<<n <<". "<<i<<" "<< endl;
        n++;
    }cout << endl;
    l.erase(l.begin());
    cout <<"After erase "<<endl;
    for(string i:l){
        cout<<n<<". "<<i<<" "<<endl;
        }
    cout<<"size of the list"<<l.size()<<endl;
    

}
