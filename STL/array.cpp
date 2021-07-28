#include <iostream>
#include <array>

using namespace std;


int main(){
    int basic_arr[8] = {1,2,3,4,5,6,7,8};

    //Declearation of STL array.
    array<int,4> a = {3,8,9,2};

    int size = a.size();

    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }


//This is to check what the  the element a the place of index 2
    cout<<'\n'<<a.at(3)<<endl;


//This is for checking the first element of the array
    cout<<'\n'<<a.front()<<endl;



//This is for checking the last element of array
    cout<<'\n'<<a.back()<<endl;

    

//This is for checking where the array is empty or not and returns value of either 0 or 1 accordingly False and True.
    cout<<'\n'<<a.empty()<<endl;


}