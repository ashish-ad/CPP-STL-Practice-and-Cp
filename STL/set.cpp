
//In set every element is uniquiely inserted means 5 will not there in set two times and the element in set will arranged in order of acsending
// This makes the set little bit slower than that of unordered set

//the time complexity of insert operation in set is O(logn) as said by babbar bhaiya that it is according to binary search tree.
#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> s;
    s.insert(5);//time complexity of the insert operation is O(n)
    s.insert(1);
    s.insert(8);
    s.insert(9);
    s.insert(6);
    s.insert(3);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);

    for (int i:s){
        cout<<i<<endl;
    }cout<<endl;
    s.erase(s.begin());

    cout<<endl;
    for (int i:s){
        cout<<i<<endl;
    }cout<<endl;

}