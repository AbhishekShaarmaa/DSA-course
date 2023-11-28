// C++ program to demonstrate the
// boilerplate code
#include <iostream>
using namespace std;

int knapSack()



int main()
{
    int profit[] = {60, 100, 120};
    int weight[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(profit) / sizeof(profit[0]);
    cout << knapSack(W, weight, profit, n);
    return 0;
}