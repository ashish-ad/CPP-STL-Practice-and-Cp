#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue <string> q;

    q.push("love");
    q.push("Ashish");
    q.push("Pradhan");

    cout<<"First element -> "<<q.front()<<endl;
    cout<<"Size of the queue "<<q.size()<<endl;
    q.pop();
    cout<<"First element after using pop() -> "<<q.front()<<endl;
    cout<<"Size after pop "<<q.size()<<endl;
    cout<<"Is empty or not "<<q.empty()<<endl;



}
