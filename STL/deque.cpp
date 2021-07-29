#include <iostream>
#include <deque>



using namespace std;



int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    cout<<"Print first Index element -> "<<d.at(1)<<endl;
    cout<<"Front "<<d.front()<<endl;
    cout<<"Back "<<d.back()<<endl;
    cout<<"Empty or not "<<d.empty()<<endl;
    for (int i:d){
        cout<<i<<" "<<"\n";
    }cout<<endl;
    cout<<d.size()<<endl;
    cout<<*d.begin()<<endl;
    cout<<*d.end()<<endl;
    cout<<"Before Erase"<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase "<<d.size()<<endl;
    for(int i:d){
        cout<<i;
    }cout<<endl;
    


    return 0;

}