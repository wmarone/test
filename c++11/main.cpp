#include <chrono>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
//    typedef std::chrono::high_resolution_clock Time;
//    typedef std::chrono::milliseconds ms;
//    typedef std::chrono::duration<float> fsec;
//    auto t0 = Time::now();
//    auto t1 = Time::now();
//    fsec fs = t1 - t0;
//    ms d = std::chrono::duration_cast<ms>(fs);
//    std::cout << fs.count() << "s\n";
//    std::cout << d.count() << "ms\n";

    ::chrono::high_resolution_clock::time_point start = ::chrono::high_resolution_clock::now();

    cout << "starting... ";

    while (1)
    {
        ::chrono::high_resolution_clock::time_point end = ::chrono::high_resolution_clock::now();
        if (chrono::duration_cast<chrono::milliseconds>(end - start).count() >= 10000)
            break;
    }

    cout << "done." << endl;

    return 0;
}
