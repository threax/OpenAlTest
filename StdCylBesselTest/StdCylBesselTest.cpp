#include <iostream>

using std::cyl_bessel_i;

int main()
{
    //Everything is fine until this function is called. Once this is linked the executable/library will not be able to load at all.
    auto result = cyl_bessel_i(0, 1);

    //This can be used as a sanity check. The hardcoded result version will run on the steam deck without issues.
    //auto result = 1337;

    std::cout << "Result " << result << "\n";
    system("pause");
}
