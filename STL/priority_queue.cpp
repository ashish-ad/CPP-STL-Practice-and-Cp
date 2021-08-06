#include <iostream>
#include <queue>

using namespace std;

int main(){
    //max queue
    priority_queue<int> maxi;

    //min-heap
    priority_queue<int, vector<int>,greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(0);
    maxi.push(4);
    maxi.push(7);
    int n = maxi.size();
    for (int i=0; i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();

    }cout<<endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(7);
    mini.push(9);
    mini.push(10);
    mini.push(13);
    mini.push(89);

    int m = mini.size();
    for (int i = 0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();

    }cout<<endl;

    cout<<"Is the Queue empty: ?? -> "<<mini.empty()<<endl;







}