#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int x{10};
    int y{20};

    cout << x + y << endl;
    cout << --y << endl;
    cout << ++x << endl;

    x += 2;
    x -= 2;
    y /= 2;
    y *= 2;

    int r{x % 2};

    cout << x << endl;
    cout << y << endl;
    cout << r << endl;

    cout << sqrt(64) << endl;
    cout << round(2.6) << endl;
    cout << log(2) << endl;

    // cout << min(5, 10) << endl;
    // cout << max(5, 10) << endl;

    return 0;
}

// |============|======================================================================|
// | Function   |	Description                                                        |
// |------------+----------------------------------------------------------------------|
// | abs(x)     |	Returns the absolute value of x                                    |
// | acos(x)    |	Returns the arccosine of x, in radians                             |
// | asin(x)    |	Returns the arcsine of x, in radians                               |
// | atan(x)    |	Returns the arctangent of x, in radians                            |
// | cbrt(x)    |	Returns the cube root of x                                         |
// | ceil(x)    |	Returns the value of x rounded up to its nearest integer           |
// | cos(x)     |	Returns the cosine of x, in radians                                |
// | cosh(x)    |	Returns the hyperbolic cosine of x, in radians                     |
// | exp(x)     |	Returns the value of Ex                                            |
// | expm1(x)   |	Returns ex -1                                                      |
// | fabs(x)    |	Returns the absolute value of a floating x                         |
// | fdim(x, y) |	Returns the positive difference between x and y                    |
// | floor(x)   |	Returns the value of x rounded down to its nearest integer         |
// | hypot(x,y) |	Returns sqrt(x2 +y2) without intermediate overflow or underflow    |
// | fma(x,y,z) |	Returns x*y+z without losing precision                             |
// | fmax(x,y)  |	Returns the highest value of a floating x and y                    |
// | fmin(x,y)  |	Returns the lowest value of a floating x and y                     |
// | fmod(x,y)  |	Returns the floating point remainder of x/y                        |
// | pow(x,y)   |	Returns the value of x to the power of y                           |
// | sin(x)     |	Returns the sine of x (x is in radians)                            |
// | sinh(x)    |	Returns the hyperbolic sine of a double value                      |
// | tan(x)     |	Returns the tangent of an angle                                    |
// | tanh(x)    |	Returns the hyperbolic tangent of a double value                   |
// |============|======================================================================|