#include <iostream>
using namespace std;

class Data
{
    private:
    int n;
    float avg;

    public :
    int x(int p, float q)
    {
        n=p;
        avg = q;
    }

    void display()
    {
        cout <<  "roll number : "<<n << endl;
        cout << "average : "<< avg <<endl;
    }
};

int main()
{
    int a;
    float b;

    cout << "Enter your roll number : ";
    cin >> a;
    cout << "enter your average :";
    cin >> b;

    Data x(a,b);

    Data display();

    return 0;

}