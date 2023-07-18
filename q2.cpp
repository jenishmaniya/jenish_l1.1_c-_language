#include<iostream>
using namespace std;
class cars{
	public:
	int id;
	char name[50];
	char color[50];
	char model[50];
	int release;
};
int main(){
	cars c1,c2,c3,c4;
	
	cout << "Enter the detail of car 1:" << endl;
	cout << "Enter the id:";
	cin >> c1.id;
	cout << "Enter the company name:";
	cin >> c1.name;
	cout << "Enter the color:";
	cin >> c1.color;
	cout << "Enter the modle:";
	cin >> c1.model;
	cout << "Enter the release year:";
	cin >> c1.release;
	
	cout << "Enter the detail of car 2:" << endl;
	cout << "Enter the id:";
	cin >> c2.id;
	cout << "Enter the company name:";
	cin >> c2.name;
	cout << "Enter the color:";
	cin >> c2.color;
	cout << "Enter the modle:";
	cin >> c2.model;
	cout << "Enter the release year:";
	cin >> c2.release;
	
	cout << "Enter the detail of car 3:" << endl;
	cout << "Enter the id:";
	cin >> c3.id;
	cout << "Enter the company name:";
	cin >> c3.name;
	cout << "Enter the color:";
	cin >> c3.color;
	cout << "Enter the modle:";
	cin >> c3.model;
	cout << "Enter the release year:";
	cin >> c3.release;
	
	cout << "Enter the detail of car 4:" << endl;
	cout << "Enter the id:";
	cin >> c4.id;
	cout << "Enter the company name:";
	cin >> c4.name;
	cout << "Enter the color:";
	cin >> c4.color;
	cout << "Enter the modle:";
	cin >> c4.model;
	cout << "Enter the release year:";
	cin >> c4.release;
	
	
	return 0;
}
