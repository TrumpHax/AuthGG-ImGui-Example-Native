#include "utils.hpp"

std::string utils::wstring_to_string(const std::wstring& ws) {
	const std::string s(ws.begin(), ws.end());
	return s;
}

std::wstring utils::string_to_wstring(const std::string& s) {
	const std::wstring ws(s.begin(), s.end());
	return ws;
}
