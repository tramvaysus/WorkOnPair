#pragma once

namespace test
{
	void check (std::string expx, std::string expy,std::string resx, std::string resy)
	{
		if (expx.length() == resx.length())
		{
			for (int i = 0; i < expx.length(); ++i)
			{
				if (expx[i] != resx[i])
				{
					std::cout << "Символы в строке X не равны" << std::endl;
					break;
				}
				
			}
			std::cout << "Все символы в строке X равны! " << resx << " = " << expx << std::endl;
		}
		else
		{
			std::cout << "Строка X не равна по длинне." << std::endl;
		}
		
		if (expy.length() == resy.length())
		{
			for (int i = 0; i < expy.length(); ++i)
			{
				if (expy[i] != resy[i])
				{
					std::cout << "Символы в строке Y не равны" << std::endl;
					break;
				}
				
			}
			std::cout << "Все символы в строке Y равны! " << resy << " = " << expy << std::endl;
		}
		else
		{
			std::cout << "Строка Y не равна по длинне." << std::endl;
		}


	}
}
