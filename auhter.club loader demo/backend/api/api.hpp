#pragma once
// main includes
#include <Windows.h>
#include <string>

// project includes
#include "../curl/include/curl/curl.h"
#include "../json/json.hpp"
#include "../hwid/hwid.hpp"
#include "writers.hpp"

// json
using json = nlohmann::json;

class c_api
{
public:
	bool auth(std::string key);
	void log(std::string key, std::string message);

private:
	std::string public_token = "8tmr9uI603OLUwfKBjbxsAk1hzElqCdY"; // ��� ��������� �����, ������� �� ������ � ������� (https://auther.club/profile/), ����� "�������� ��������� �����"
	std::string private_token = "PxsU04Zo2e0zNquLhQkGQT74Fa6HMTIm"; // ��� ��������� �����, ������� �� ������ � ������� (https://auther.club/profile/), ����� "�������� ��������� �����"
	std::string auther = "https://auther.club/v1"; // �� ������
};

