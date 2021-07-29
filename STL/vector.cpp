#include <iostream>
#include <vector>


using namespace std;


int main(){
    vector<int> v;
    
    //Capacity of an element signifies that sapce assigned to vector
    cout<<"Capacity --> "<<v.capacity()<<endl;

    v.push_back(1);//push_back() is used to add element to the vector
    cout<<"Capacity --> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity --> "<<v.capacity()<<endl;


    v.push_back(3);
    cout<<"Capacity --> "<<v.capacity()<<endl;
    cout<<"Size -> "<<v.size()<<endl;//Here the size represents the total number of elements present in side the vector

    cout<<"Element at index 2 is "<<v.at(2)<<endl;

    cout<<"Front element-> "<<v.front()<<endl;
    cout<<"Back element-> "<<v.back()<<endl;

    cout<<"Before pop "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();

    cout<<"After pop"<<endl;
    for (int i:v){
        cout<<i<<" ";
    }cout<<endl;


    //clearning the size of vector
    cout<<"Before clearing size and capacity of vector "<<v.size()<< " and "<<v.capacity()<<endl;
    
    v.clear();
    cout<<"After clearing the size and capacity of vector "<< v.size()<<" and "<<v.capacity()<< endl;

    //Size dosen't changes after clearning the vector
    cout<<endl;
    return 0;

}