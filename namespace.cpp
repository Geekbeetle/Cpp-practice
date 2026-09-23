#include <iostream>
namespace frst{
    int x=0;
}
namespace scnd{
    int x=1;
}
int main(){
    int x=3;
    std::cout << x<< "\n";
    std::cout << frst::x << std::endl;
    std::cout << scnd::x << std::endl;

    using namespace frst;
    std::cout<< x<<"\n";
    return 0;
}