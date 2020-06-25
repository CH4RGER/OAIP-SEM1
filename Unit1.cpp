//---------------------------------------------------------------------------
#include <math.h>
#include <iostream.h>
#include <vcl.h>
#include <conio.h>
#include <iomanip>
#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
double a, b, x, h, r, s, y, f;
        int n, k, u, m;
        cout << "a, b, n, h" << endl;
        cin >> a >> b >> n >> h;
        for(x = a; x<=b; x+=h) {


                s=0;
                for(k = 0; k<=n; k++)
                {
                u=1;
                for (m=1; m<=k; m++)
                u*=m;
                s+=((2*k)+1)*pow(x,(2*k))/u;
                }
        y=(1+2*pow(x,2))*exp(pow(x,2));



        r=fabs(y-s);
        cout << setw(15) << ("x=") << x
             << setw(15) << ("Y(x)=") << y
             << setw(15) << ("S(x)=") << s
             << setw(15) << ("|Y(x)-S(x)|") << r << endl;
        }
        getch();

        return 0;
}
//---------------------------------------------------------------------------
 