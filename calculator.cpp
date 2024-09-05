#include <iostream>
using namespace std;
const double pie = 3.141592653;
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
double pow(double a, double b)
{
    double product = 1;
    for (int i = 0; i < b; i++)
    {
        product = a * product;
    }
    return product;
}

double logarithm(double y)
{
    double sum = 0;
    double add = 0;
    double log;

    double x = y - 1;
    double i = x + 1;

    while (i > 2)
    {
        sum = sum + 1;
        i = i / 2;
    }

    for (int j = 0; j < 15; j++)
    {
        double g = pow((-1), j);

        double k = pow(i - 1, j + 1);
        double z = g * (k / (j + 1));
        add = add + z;
    }

    log = add + sum * 0.6931471805599;
    return log;
}
double degree(double a)
{
    double radian = a * pie / 180;

    return radian;
}
double sin(double x)
{
    double sum = 0;

    double y = degree(x);
    if (x == 90)
    {
        sum = 1;
    }
    else
    {
        for (int j = 1; j < 15; j++)
        {
            double k = pow(-1, j - 1);
            double m = pow(y, 2 * j - 1);
            double z = k * m / (factorial(2 * j - 1));
            sum = sum + z;
        }
        sum = sum;
    }

    return sum;
}
double cos(double x)
{
    double sum = 0;

    double y = degree(x);
    if (x == 0)
    {
        sum = 1;
    }
    else
    {
        for (int j = 1; j < 15; j++)
        {
            double k = pow(-1, j - 1);
            double m = pow(y, 2 * (j - 1));
            double z = k * m / (factorial(2 * (j - 1)));
            sum = sum + z;
        }
        sum = sum;
    }

    return sum;
}
double tan(double x)
{
    double z = sin(x) / cos(x);
    return z;
}
double cot(double x)
{
    double z = 1 / tan(x);
    return z;
}
double sec(double x)
{
    double z = 1 / cos(x);
    return z;
}
double cosec(double x)
{
    double z = 1 / sin(x);
    return z;
}
double sqrt (double number) {
    double guess = number / 2.0;  // Initial guess
    double epsilon = 0.00001;     // Accuracy of result
    
    // Iterate until the guess is close enough to the actual square root
    while ((guess * guess - number) > epsilon || (number - guess * guess) > epsilon) {
        guess = (guess + number / guess) / 2.0;
    }
    
    return guess;
}

int main()

{int options ;
      cout<<"Press 1 to use arithmetic operators"<<endl;
    cout<<"Press 2 to use trigonometric function"<<endl;
    cout<<"Press 3 to use logarithmic function"<<endl;
    cout<<"Press 4 to use exponential function"<<endl;
    cout<<"Press 5 to get square root of a number"<<endl;
    cout<<"Press 6 to get the roots of a quadratic equation"<<endl;
    cin>>options;
    switch (options)
    
    case 1:
     {
           int operations;
        cout<<"Press 1 for Addition"<<endl;
        cout<<"Press 2 for Subtraction"<<endl;
        cout<<"Press 3 for Division"<<endl;
        cout<<"Press 4 for Multiplication"<<endl;
        cin>>operations;
        switch (operations)
        {
            case 1 :  
            cout<<"Enter the first number"<<endl;
            double z;
            cin>>z;
            cout<<"Enter the second number"<<endl;
            double i;
            cin>>i;
            cout<<"The Sum of two number is "<<z+i<<endl;
            break;
            case 2 :
            cout<<"Enter the first number"<<endl;
            double p;
            cin>>p;
            cout<<"Enter the second number"<<endl;
            double q;
            cin>>q;
            cout<<"The subtraction of two number is "<<p-q<<endl;
            break;
            case 3 :
            cout<<"Enter the first number"<<endl;
            double f1;
            cin>>f1;
            cout<<"Enter the second number"<<endl;
            double f2;
            cin>>f2;
            cout<<"The answer is  "<<f1/f2<<endl;
            break;
            case 4 :
            cout<<"Enter the first number"<<endl;
            double t;
            cin>>t;
            cout<<"Enter the second number"<<endl;
            double u;
            cin>>u;
            cout<<"The product of two number is "<<t*u<<endl;
            break;
        default:
            cout<<"Invalid option";
            
        }

        break;
           case 2 :
        int trigonFunc;
        cout<<"Press 1 for Sin"<<endl;
        cout<<"Press 2 for Cos"<<endl;
        cout<<"Press 3 for Cosec"<<endl;
        cout<<"Press 4 for Sec"<<endl;
        cout<<"Press 5 for Tan"<<endl;
        
        cout<<"Press 6 for Cot"<<endl;
        cin>>trigonFunc;
        switch (trigonFunc)
        {
             case 1:
            cout<<"Type the angle in degree "<<endl;
            double sinAngle;
            cin>>sinAngle;
            cout<<cos(sinAngle);
            break;
            
             case 2:
            cout<<"Type the angle in degree "<<endl;
            double cosAngle;
            cin>>cosAngle;
            cout<<sin(cosAngle);
            break;
            
            case 3:
            cout<<"Type the angle in degree "<<endl;
            double cosecAngle;
            cin>>cosecAngle;
            cout<<cosec(cosecAngle);
            break;
            
            case 4:
            cout<<"Type the angle in degree "<<endl;
            double secAngle;
            cin>>secAngle;
            cout<<sec(secAngle);
            break; 

            case 5:
            cout<<"Type the angle in degree "<<endl;
            double tanAngle;
            cin>>tanAngle;
            cout<<tan(tanAngle);
            break; 
            
            case 6:
            cout<<"Type the angle in degree "<<endl;
            double cotAngle;
            cin>>cotAngle;
            cout<<cot(cotAngle);
            break;
                  default:
            cout<<"Invalid option";
            break;
        }
        break;





    case 3:



    double v;
    double u;

    cout << "what is the base of logarithm" << endl;

    cin >> v;

    cout << "what is the argument of logarithm" << endl;

    cin >> u;

    cout << "the log of the function is " << logarithm(u) / logarithm(v);



  
  break;

  case 4:
  double e;
double f;
cout<<"enter the base of exponent"<<endl;
cin>>e;
cout<<"enter the power of exponent"<<endl;
cin>>f;
cout<<pow(e,f);
 

 break;

 case 5:
 double y;
 cout<<"enter the number for which u have to find square root "<<endl;
 cin>> y;
 cout<<sqrt(y);
 break;


case 6:
double a;
double b;
double c;



cout<<"enter the values in format ax^2 +bx+c"<<endl;
cout<<"enter the value of a "<<endl;
cin>>a;
cout<<"enter the value of b "<<endl;
cin>>b;
cout<<"enter the value of c"<<endl;
cin>>c;
double k=b*b-4*(a*c);
if (0<k)
{
 double z=(-b+sqrt(k))/(2*a);
  double r=(-b-sqrt(k))/(2*a);

  cout<<"the roots of equation are"<<endl;
  cout<<z<<endl;
  cout<<r<<endl;
}
else if (0==k)
{double z=(-b+sqrt(k))/(2*a);
 cout<<"the roots of equation is"<<endl;
  cout<<z<<endl;}
else {cout<<"roots are not real"<<endl;}




       
    }
    
   

    return 0;
}
