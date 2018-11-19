#include <iostream>

using namespace std;
class A{

int a,b,c;

public:
    void show()
    {
        cin>>a>>b>>c;
        cout<<a<<b<<c;
    }

};
int main()
{
     A ob;
    ob.show();
    cout << "Hello world!" << endl;
    return 0;
}
