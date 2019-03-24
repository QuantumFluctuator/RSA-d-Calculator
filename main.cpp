#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    int inverse(int, int);
    int e, m, result;
    
    cout << "Enter value for e: ";
    cin >> e;
    cout << "Enter value for the totient: ";
    cin >> m;
    
    result = inverse(e, m);
    
    (result == -1) ? cout << "Invalid" : cout << to_string(result);
    cout << "\n";
    
    cin.get();
    cin.get();
    return 0;
}

int inverse(int a, int m) {
    a = a % m;
    for (int x(1); x < m; x++) {
        if ((a * x) % m == 1) {
            return x;
        }
    }
    return -1;
}
