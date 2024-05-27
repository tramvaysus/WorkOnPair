#include <iostream>
#include <bitset> 
#include <string> 
#include <vector>
#include <cmath>

//class TransferToBinary
//{
//public:
//	static std::string int_in_binary(int num)
//	{
//		std::bitset<8> bin_int(num);
//		std::cout << std::bitset<8>(num) << std::endl;
//		return std::bitset<8>(num).to_string();
//	}
//};
//
//class TransferToInt
//{
//public:
//	static void binary_in_int(std::string num)
//	{
//		int result = 0;
//		int j = 0;
//		for (int i = 7; i >= 0; i--)
//		{
//			if (num[j] == '1')
//			{
//				result += (1 * pow(2, i));
//			}
//			else if (num[j] == '0')
//			{
//				result += 0;
//			}
//			j++;
//		}
//
//		std::cout << result << std::endl;
//	}
//};

class WordTransferToBinary
{
public:
	static std::string word_in_binary(std::string text)
	{		
		std::string res;
		for (int i = 0; i < text.length(); i++)
		{
			std::bitset<8> bin_word(text[i]);
			res += bin_word.to_string();
		}
		std::cout << res;
		return res;
	}
};

class BinaryTransferToWord
{
public:
	static void binary_in_word(std::string text)
	{
		int result = 0;
		std::vector<int> arr;
		for (int l = 0; l < text.length(); l++)
		{
			int i = 7;
			if (text[l] == '1')
			{
				result += (1 * pow(2, i));
			}
			else if (text[l] == '0')
			{
				result += 0;
			}
			else if (text[l] == ' ')
			{
				std::cout << result;
				arr.push_back(result);
				result = 0;
				i = 7;
			}
			i--;
		}
	}
};

int main()
{
	BinaryTransferToWord::binary_in_word(WordTransferToBinary::word_in_binary("hello"));
	//TransferToInt::binary_in_int(TransferToBinary::int_in_binary());
}
