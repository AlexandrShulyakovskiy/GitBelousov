#include <iostream>

using namespace std;

class Gazonokosarka {
private:
	double shurunaTravu;
	double dvugyn;
	string model;
	double bak;
public:
	Gazonokosarka() {}
	Gazonokosarka(double sh, double d, string m, double b) {
		shurunaTravu = sh;
		dvugyn = d;
		model = m;
		bak = b;
	}
	void setShurunaTravu(double sh) {
		shurunaTravu = sh;
	}
	double getShurunaTravu() const {
		return shurunaTravu;
	}
	void setDvugyn(double d) {
		dvugyn = d;
	}
	double getDvugyn() const {
		return dvugyn;
	}
	void setModel(string m) {
		model = m;
	}
	string getModel() const {
		return model;
	}
	void setBak(double b) {
		bak = b;
	}
	double getBak() const {
		return bak;
	}
	~Gazonokosarka() {}
};
int main()
{
	Gazonokosarka g(1, 1, "dsda", 4);
	cout << Gazonokosarka g(1, 1, "dsda", 4) << endl;
	getchar();
	return 0;
}