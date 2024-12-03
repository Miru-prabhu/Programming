#include <iostream>

class Work
{
    private:

        int a,b,c;

    public:

        Work(int p, int q)
        {
            a = p;
            b = q;

            int sum = a+b;
            std::cout << "Answer :" << sum;
        }

        Work(int m , int n,int l)
        {
            a = m;
            b = n;
            c = l;

            int product = a*b*c;

            std::cout << "\nAnswer : " << product;
        }

        ~Work()
        {
            std::cout << "\n end";
        }
};

int main()
{
   

    int num1,num2,num3;
    std::cout << "number 1 /:";
    std::cin >> num1;
    std::cout << "number 2 :";
    std::cin >> num2;
    std::cout << "number 3 :";
    std::cin >> num3;

    Work w(num1,num2);
    Work k(num1,num2,num3);
   

    return 0;
}