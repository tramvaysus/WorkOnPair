#include <iostream>
#include <string>

int main()
{
    int res = 0;
    int num = 129956;
    std::string a = std::to_string(num);
    for (int i = 0; i < 6; i++)
    {
        res += a[i] - 48;
    }
    std::cout << res;
}


//================2===============

int main() 
{
    int side1 = 34;
    int side2 = 17;
    int side3 = 98;

    if (triangleCheck(side1, side2, side3)) 
    {
        std::cout << "Треугольник со сторонами " << side1 << ", " << side2 << " и " << side3 << " может существовать." << std::endl;
    }
    else 
    {
        std::cout << "Треугольник со сторонами " << side1 << ", " << side2 << " и " << side3 << " не может существовать." << std::endl;
    }

    return 0;
}
