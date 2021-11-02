#include <bits/stdc++.h>

using namespace std;

void function1(char symbol){
    for (int i = 0; i < 200; i++)
    {
        cout<< symbol;
    }
    
}
void function2(){
    for (int i = 0; i < 200; i++)
    {
        cout<<"-";
    }
    
}

int main()
{
    thread worker1(function, 'o');
    thread worker2(function2);

    system("pause>null");
}