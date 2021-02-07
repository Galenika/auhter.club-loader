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
	void log(std::string key, std::string message, std::string tag = "[LOG]");

private:
	std::string public_token = "your public key"; // ��� ��������� �����, ������� �� ������ � ������� (https://auther.club/profile/), ����� "�������� ��������� �����"
	std::string private_token = "your private key"; // ��� ��������� �����, ������� �� ������ � ������� (https://auther.club/profile/), ����� "�������� ��������� �����"
	std::string auther = "https://auther.club/v1"; // �� ������
};

