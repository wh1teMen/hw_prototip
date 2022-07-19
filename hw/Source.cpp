#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
class Picture {
public:
	virtual string get_picture_home()const = 0;
	virtual string get_picture_cat()const = 0;
	virtual string get_picture_car()const = 0;
	virtual Picture* clone()const = 0;
};

class Mini_picture :public Picture {
public:
	Mini_picture(){}
	string get_picture_home()const override {
		ifstream fs;
		fs.open("home.txt", ios::in);
		string str;
		if (fs.is_open()) {
			while (getline(fs,str)) {
				cout << str << endl;
			}
		}
		else
			cout << "ERORR";
		fs.close();
		this->picture == str;
			
		return picture;
	}
	string get_picture_cat()const override {
		ifstream fs;
		fs.open("cat.txt", ios::in);
		string str;
		if (fs.is_open()) {
			while (getline(fs, str)) {
				cout << str << endl;
			}
		}
		else
			cout << "ERORR";
		fs.close();
		this->picture == str;

		return picture;
	}
	string get_picture_car()const override {
		ifstream fs;
		fs.open("car.txt", ios::in);
		string str;
		if (fs.is_open()) {
			while (getline(fs, str)) {
				cout << str << endl;
			}
		}
		else
			cout << "ERORR";
		fs.close();
		this-> picture == str;

		return picture;
	}
	Mini_picture* clone()const {
		return new Mini_picture(*this);
	}
private:
	string picture;
	Mini_picture(const Mini_picture& donor) {
		this->picture = donor.picture;
	}
};
int main() {
	system("chcp 1251>nul");
	Mini_picture*picture_donor = new Mini_picture();
	Mini_picture* picture_clone = picture_donor->clone();
	int num;
	cout <<"Выберите, что вы хотите клонировать?: \n";
	cout << "1-Дом\n2-Кошка\n3-Машина\n";
	cin >> num;
	switch (num){
	case 1:cout << picture_donor->get_picture_home() << endl;
		cout << picture_clone->get_picture_home() << endl;
		break;
	case 2:cout << picture_donor->get_picture_cat() << endl;
		cout << picture_clone->get_picture_cat() << endl;
		break;
	case 3:cout << picture_donor->get_picture_car() << endl;
		cout << picture_clone->get_picture_car() << endl;
		break;
	default: cout << "Ошибка ввода"<<endl;
	}

	

	return 0;
}