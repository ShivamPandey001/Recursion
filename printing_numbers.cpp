#include <iostream>
using namespace std;
void print(int n)
{
    if(n<1)
        return;
    print(n-1);
    cout<<n<<" ";
}
int main() {
    cout<<"Enter The Number";
    print(7);
}


// For Decreasing Print

#include <iostream>
using namespace std;
void print(int n)
{
    if(n<1)
        return;
   
    cout<<n<<" ";
     print(n-1);
}
int main() {
    cout<<"Enter The Number";
    print(7);
}
