class Solution {
public:
    std::string countAndSay(int n) 
    {
        std::string previous_string = "";
        std::string now_string = "";
        for (int i = 1; i <= n; i++) 
        {
            if (i == 1) 
            {
                previous_string = "1";
                continue;
            }
            else 
            {
                int count = 1;
                for (int j = 0; j < previous_string.size(); j++) 
                {
                    if (j != previous_string.size() - 1 && previous_string[j] == previous_string[j + 1]) 
                    {
                        count++;
                    }
                    else 
                    {
                        now_string += std::to_string(count) + previous_string[j];
                        count = 1;
                    }
                }
            }
            previous_string = now_string;
            now_string = "";
        }
        return previous_string;
    }
};

class Solution_2 {
public:
    std::string countAndSay(std::string num)
    {
        std::string string = num;
        std::string new_string = "";
        for (int i = 1; i <= num.size(); i++)
        {
            if (i == 1)
            {
                string = "1";
                continue;
            }
            else
            {
                int count = 1;
                for (int j = 0; j < string.size(); j++)
                {
                    if (j != string.size() - 1 && string[j] == string[j + 1])
                    {
                        count++;
                    }
                    else
                    {
                        new_string += std::to_string(count) + string[j];
                        count = 1;
                    }
                    return new_string;
                }
            }
        }

    }
};

int main()
{
    setlocale(0, "");
    srand(time(0));
    
    /*Solution solution; 
    std::cout << solution.countAndSay(21);*/

    Solution_2 solution2;
    std::cout << solution2.countAndSay("113");
}
