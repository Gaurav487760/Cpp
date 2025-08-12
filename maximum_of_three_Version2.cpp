#include <iostream.h>
int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    int max_num = a;
    if (b > max_num)
        max_num = b;
    if (c > max_num)
        max_num = c;
    cout << "Maximum number is: " << max_num << endl;

    return 0;
}