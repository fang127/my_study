#include "Data.h"

void read(std::string &s, Data &d)
{
    std::string check{", /"};
    // 查找逗号、空格或斜杠的位置并替换为空格
    std::string::size_type pos = 0;
    while ((pos = s.find_first_of(check, pos)) != std::string::npos)
    {
        s.replace(pos, 1, " ");
        pos++; // 移动到下一个位置，避免无限循环
    }

    std::istringstream iss(s);
    std::string month_str;
    std::string day_str;
    std::string year_str;

    if (iss >> month_str >> day_str >> year_str)
    {
        // 首先尝试将month_str转换为数字
        try
        {
            d.month = std::stoi(month_str);
            d.day = std::stoi(day_str);
            d.year = std::stoi(year_str);
        }
        catch (std::invalid_argument &err)
        {
            // 如果转换失败，尝试匹配月份名称
            bool found = false;
            for (size_t i = 0; i < d.str.size(); ++i)
            {
                if (month_str.find(d.str[i]) == 0) // 检查月份名称是否匹配
                {
                    d.month = i + 1; // 月份从1开始
                    d.day = std::stoi(day_str);
                    d.year = std::stoi(year_str);
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                throw std::invalid_argument("Invalid date format: " + s);
            }
        }
    }
    else
    {
        throw std::invalid_argument("Invalid date format: " + s);
    }
}