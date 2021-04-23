#include <iostream>

void print()
{
    int a = 0;
    int b = 10;
    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
            std::cout << i << "\n";
    }

}

int main()
{
    int a = 0;
    const int b = 10;
    for (int i = a; i <= b; i++) 
    {
        if (i % 2 == 0)
        std::cout << i << "\n";
    }
    
    print();
   
}

