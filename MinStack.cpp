#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    typedef pair<int,int> pii;

    stack<pii> minStack;

    int n;
    while (cin >> n) {
        if (n == -1)
            break;
        int new_min = minStack.empty() ? n : min(n, minStack.top().second);
        minStack.push({n, new_min});
    }

    cout << "Min # = " << minStack.top().second << "\n";
    return 0;
}