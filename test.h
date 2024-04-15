#pragma once

namespace test
{
	void print_error(int result, int expected)
	{
		std::cout << "Ожидалось:\t" << result << std::endl;
		std::cout << "Получено:\t" << expected << std::endl;
	}

	bool check_not_equal(int result, int expected)
	{
		return result != expected;
	}

	bool check_equal_elements(std::vector<int> result_vec, std::vector <int> expected_vec)
	{
		for (int i = 0; i < expected_vec.size(); i++)
		{
			if (check_not_equal(result_vec[i], expected_vec[i]))
				{
				print_error(expected_vec[i], result_vec[i]);
				return false;
				}
		}
		return true;
	}

	void test_some_func(std::vector<int>(*create_vec)(int))
	{
		int amount = 6;
		std::vector<int> expect_vec = { 1,2,4,8,16,22 };

		std::vector<int> result_vec = create_vec(amount);

		std::cout << "1) Проверка кол-во элементов : ---- " << std::endl;
		if (check_not_equal(result_vec.size(), amount))
		{
			std::cout << "---- Несоответствие кол-ва элементов вектора " << std::endl;
			print_error(amount, result_vec.size());
			return;
		}
		else
		{
			std::cout << " ---- Верное кол-во элементов " << std::endl;
		}

		std::cout << "2) Проверка соответствия элементов : ---- " << std::endl;
		if (!check_equal_elements(result_vec, expect_vec))
		{
			std::cout << "---- Несоответствие элементов по индексу " << std::endl;
			return;
		}
		else
		{
			std::cout << " ---- Все элементы содержат ожидаемые значения " << std::endl;
		}

		std::cout << "Функция работает корректно!\n";
	}
}
