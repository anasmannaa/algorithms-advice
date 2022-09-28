
#include <iostream>
#include <cstdlib>

using namespace std;

int randomNumber(int from, int to) {
    int randNum = rand() % (to - from + 1) + from;
    return randNum;
}

int main()
{
    srand((unsigned)time(NULL));

    cout << randomNumber(13, 17);
    return 0;
}
