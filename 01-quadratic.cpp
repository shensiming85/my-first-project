#include <cmath>
#include <iostream>
using namespace std;

int main() {
    // WRITE YOUR CODE HERE. DO NOT CHANGE THE TEMPLATE
    cout << "Enter a, b, c: ";
    double a,b,c,r1,r2,dis;
    cin >> a >> b >> c;

    dis = b*b - 4*a*c;
    r1 = (-b + pow(dis,0.5))/(2*a);
    r2 = (-b - pow(dis,0.5))/(2*a);
    
    if (dis < 0)
    {
         cout << "The equation has no real roots" << endl;/* code */
    }else if (dis == 0)
    {
        cout << "The root is " << r1 << endl;/* code */
    }else if (dis > 0)
    {
       cout << "The roots are " << r1 << " and " << r2 << endl; /* code */
    }
    

    return 0;
}