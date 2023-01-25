#include <iostream>

using namespace std;

// struct total
// {
//     int harga;
//     string nanya;
// };
auto hasil();

int main()
{

    auto hasill = hasil();

    cout << hasill.harga;
    cout << hasill.nanya;
    return 0;
}

auto hasil()
{

    struct car
    {
        int harga;
        string nanya;
    };

    int harga = 100;
    string nanya = "affh iyhh";

    return car{harga, nanya};
}