#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int v[] = { 'a', 'c', 'k', 'd', 'e', 'f', 'h' };
  
    // Finding the maximum value between the first and the
    // fourth element
  
    int* i1;
    i1 = std::max_element(v, v + 4);
  
    cout << char(*i1) << "\n";
    return 0;
}