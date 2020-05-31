#include <iostream>
#include <string>
#include <locale>
#include <codecvt>
#include <fstream>
#include <iomanip>

class utils {
public:
    static std::string wstring_to_string(const std::wstring& ws);

	static std::wstring string_to_wstring(const std::string& s);
};
