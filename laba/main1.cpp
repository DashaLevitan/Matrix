#include "Matrix.h"

int main()
{
    Matrix a(3,3);
    cin >> a;
    //cout << a << endl;
    //Matrix b(3,1);
    //cin >> b;
    //cout << b << endl;
    //cout << a+b << endl;
    //cout << a-b << endl;
    //cout << a*b << endl;
    //cout << 5*a << endl;
    //cout << a.Adamar(b);
    //cout << a.Trace() << endl;
    //cout << a.Scalar(b) << endl;
    //cout << a.MaximumRate() << endl;
    //cout << a.FrobeniusNorm() << endl;
    //cout << a.Transpose() << endl;
    //cout << a.Angle(b) << endl;
    //cout << a.Rank() << endl;
    //cout << a.Det() << endl;
    //cout << a.Inverse() << endl;
    a.ToBinFile();
    cout << a.FromBinFile() << endl;
    //a.ToFile();
    //cout << a.FromFile() << endl;
    return 0;
}
