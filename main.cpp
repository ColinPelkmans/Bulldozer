#include <iostream>
#include "node.h"
#include "bull.h"

using namespace std;

void print(Node *node)
{
}

int main()
{
    Bull Bull1(1234, 800, "Bull1");
    Bull Bull2(1345, 801, "Bull2");
    Bull Bull3(1456, 802, "Bull3");

    cout << Bull1.to_string() << endl;
    cout << Bull2.to_string() << endl;
    cout << Bull3.to_string() << endl;

    Node start(0);
    Node second(1);
    Node last(2);

    second.set_next(&last);
    start.set_next(&second);

    print(&start);

    return 0;

    cout <<
}
