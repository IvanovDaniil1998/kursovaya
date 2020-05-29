#pragma once

#include <string>

using namespace std;

class GUIDE{
private:
    string name;
	string publishing_house; // ������������
	int year;
	int num_pages;
	bool illustrations;
	bool city_map;
	string binding; // �������
	string format;
	string author;
	int quantity; // ���������� � ������� �����
	string vendor_code; // �������
public:
    void set_name(string temp);
	void set_publishing_house(string temp);
	void set_year(int temp);
	void set_num_pages(int temp);
	void set_illustrations(bool temp);
	void set_city_map(bool temp);
	void set_binding(string temp);
	void set_format(string temp);
	void set_author(string temp);
	void set_quantity(int temp);
	void set_vendor_code(string temp); // �������

	string get_name();
	string get_publishing_house();
	int get_year();
	int get_num_pages();
	bool get_illustrations();
	bool get_city_map();
	string get_binding();
	string get_format();
	string get_author();
	int get_quantity();
	string get_vendor_code();

	void purchased(int order);
};
