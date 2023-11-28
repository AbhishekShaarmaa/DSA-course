#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
//creation of hash map
unordered_map<string , int>m;
// inserting values in hash map
m["first"] = 1;
m["second"] = 2;
m["third"] = 3;
m["fourth"] = 4;
cout<<m["first"]<<endl;

for(const auto &pair :m)
{
    cout<<"key : "<<pair.first<<"  || value : "<<pair.second<<endl;
}
}