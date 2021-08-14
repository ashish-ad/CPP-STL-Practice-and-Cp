/*
A. PizzaForces
time limit per test
2 seconds
memory limit per test
256 megabytes
input
standard input
output
standard output

PizzaForces is Petya's favorite pizzeria. PizzaForces makes and sells pizzas of three sizes: small pizzas consist of 6
slices, medium ones consist of 8 slices, and large pizzas consist of 10 slices each. Baking them takes 15, 20 and 25

minutes, respectively.

Petya's birthday is today, and n of his friends will come, so he decided to make an order from his favorite pizzeria. Petya wants to order so much pizza that each of his friends gets at least one slice of pizza. The cooking time of the order is the total baking time of all the pizzas in the order.

Your task is to determine the minimum number of minutes that is needed to make pizzas containing at least n

slices in total. For example:

    if 12 friends come to Petya's birthday, he has to order pizzas containing at least 12 slices in total. He can order two small pizzas, containing exactly 12 slices, and the time to bake them is 30
minutes;
if 15 friends come to Petya's birthday, he has to order pizzas containing at least 15 slices in total. He can order a small pizza and a large pizza, containing 16 slices, and the time to bake them is 40
minutes;
if 300 friends come to Petya's birthday, he has to order pizzas containing at least 300 slices in total. He can order 15 small pizzas, 10 medium pizzas and 13 large pizzas, in total they contain 15⋅6+10⋅8+13⋅10=300 slices, and the total time to bake them is 15⋅15+10⋅20+13⋅25=750
minutes;
if only one friend comes to Petya's birthday, he can order a small pizza, and the time to bake it is 15

    minutes. 

Input

The first line contains a single integer t
(1≤t≤104) — the number of testcases.

Each testcase consists of a single line that contains a single integer n
(1≤n≤1016) — the number of Petya's friends.
Output

For each testcase, print one integer — the minimum number of minutes that is needed to bake pizzas containing at least n

slices in total.
Example

Input

6
12
15
300
1
9999999999999999
3

Output

30
40
750
15
25000000000000000
15



*/


#include <iostream>
#include <vector>

using namespace std;

vector<long long int> pizzaforces(vector<long long int>&t){
    
    return t;
}

int main(){
    // vector<long long int> input={6,12,15,300,1,9999999999999999,3};
    int t;
    cin>>t;
    for (int i ){

    }

    pizzaforces(input);
}