#include <iostream>
#include <vector>
#include <algorithm>

class Sum
{
public:
    int operator()(int x, int y) const
    {
        return x + y;
    }
};

class Square
{
public:
    int operator()(int height, int width) const
    {
        return height * width;
    }
};

class Print
{
public:
    void operator()(std::string text) const
    {
        std::cout << text << std::endl;
    }
};

class CreateVec
{
public:
    void operator()(int num) const
    {
        std::vector<int>arr;
        for (int i = 1; i <= num; i++)
        {
            int randome = rand() % 100;
            arr.push_back(randome);
        }
        for (int i = 0; i < arr.size(); i++)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

void sort()
{
    std::vector<int>arr;
    for (int i = 0; i <= 5; i++)
    {
        int num = rand()%100;
        arr.push_back(num);
    }
    
    std::sort(begin(arr), end(arr));
    
    for (int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << "\nМин: " << *std::min_element(begin(arr), end(arr)) << std::endl;
    std::cout << "Макс: " << *std::max_element(begin(arr), end(arr)) << std::endl;
}

void find_num()
{
    std::vector<int>arr;
    for (int i = 0; i <= 5; i++)
    {
        int num = rand() % 100;
        arr.push_back(num);
    }

    auto num{ std::find(begin(arr), end(arr), 4) };
        if (end(arr) == num)
        {
            std::cout << "В массиве не найдено число" << std::endl;
        }
        else
        {
            std::cout << "Число найдено в массиве под индексом " << (num - begin(arr)) << std::endl;
         }
}

bool is_negative(int n)
{
    if (n < 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


void remove()
{
    std::vector<int> arr{ -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5 };

    auto iterator{ std::remove_if(begin(arr), end(arr), is_negative) };

    arr.erase(iterator, end(arr));
    
    for (int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    setlocale(0, "");
    srand(time(0));
    Sum sum;
    std::cout << sum(5, 4) << std::endl;

    Square square;
    std::cout << square(13, 10) << std::endl;

    Print print;
    print("text");

    CreateVec createvec;
    createvec(5);

    sort();
    find_num();
    remove();
}
