#include <iostream>
using namespace std;

void reachhome (int src , int dest ){
    if(src==dest)
    {
        cout<<"reched home"<<endl;
        return;
    }

    src++;

    reachhome (src,dest);

}
int main()
{
    int src;
    int dest;
    cout<< "src"<< endl;
    cin>> src >> dest ;

    cout<<endl;

    reachhome(src,dest);


return 0;
}