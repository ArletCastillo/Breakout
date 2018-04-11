#pragma once
class input_manager
{
public:
	/*Constructors*/
	input_manager();
	~input_manager();


	/*Functions*/
	bool get_key_w();
	bool get_key_a();
	bool get_key_d();


	void set_key_w(bool);
	void set_key_a(bool);
	void set_key_d(bool);

private:
	/*Members*/
	bool mKeyW;
	bool mKeyA;
	bool mKeyD;
};

