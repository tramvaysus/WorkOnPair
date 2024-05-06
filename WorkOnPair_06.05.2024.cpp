#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

//using::std::cout;
//using::std::endl;
//
//template <typename T>
//
//class SmartPointer 
//{
//public:
//
//    SmartPointer(T* _ptr)
//    {
//        this->ptr = _ptr;
//        cout << "Constructor" << endl;
//    }
//
//
//    ~SmartPointer()
//    {
//        delete ptr;
//        cout << "Destructor" << endl;
//    }
//
//    T& operator *()
//    {
//        return *ptr;
//    }
//private:
//    T* ptr;
//};

//int main()
//{
//    int* num = new int(5);
//
//    std::unique_ptr <int> num1(num);
//    std::unique_ptr <int> num2(num);
//    std::unique_ptr <int> num3(num);
//    cout << *num1 << endl << *num2 << endl << *num3 << endl;
//}


void function(std::string text, std::vector <int> arr, int(*some_func)(std::string), std::string(*some_func_1)(std::vector<int>)) 
{
    std::cout << "Результат первой функции: " << some_func(text) << std::endl << "Результат второй функции: " << some_func_1(arr) << std::endl;
}

int main()
{
    setlocale(0, "");
    std::string text = "hello";
    std::vector <int> arr{ 4,88,27,12 };

    

    auto func_0 = [](std::string _text)
    {
        int res = 0;
        /*for (int i = 0; i < _text.length(); i++)
        {
            res += _text[i];
        }*/
        for (auto i : _text)
        {
            res += i;
        }
        return res;
    };

    auto func_1 = [](std::vector <int> _arr)
    {
        int temp;
        std::string result;
        std::sort(_arr.begin(), _arr.end());

        /*for (int i = 0; i < 4 - 1; i++) {
            for (int j = 0; j < 4 - i - 1; j++) {
                if (_arr[j] > _arr[j + 1]) {
                    temp = _arr[j];
                    _arr[j] = _arr[j + 1];
                    _arr[j + 1] = temp;
                }
            }
        }*/

        for (int i = 0; i < 4; i++)
        {
            result += std::to_string(_arr[i]);
            result += " ";
        }

        return result;
    };

    function(text, arr, func_0, func_1);

    return 0;
}
