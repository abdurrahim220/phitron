#include <bits/stdc++.h>
using namespace std;

namespace rahim{
    int age = 25;

    void hello(){
        cout << "Hello from rahim namespace" << endl;
    }
}
namespace rafik{
    int age2 = 28;

    void hello2(){
        cout << "Hello from rafik namespace" << endl;
    }
}

using namespace rahim;
using namespace rafik;

int main()
{
    cout << age << endl;
    cout << age2 << endl;
    hello();
    hello2();

return 0;
}