#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namesapce std;

int pcur_id = 0;
int scur_id = 0;

class Person{
public:
	Person(){}
	virtual void getdata(){}
	virtual void putdata(){}
public:
	int age;
	string name;
};

class Professor : public Person {
public:
	Professor(){}
	void getdata() {
		cin >> this->name >> this->age >> this->publications;
	}
	void putdata() {
		cout << name << " "  << age << " " << publications << " " << ++pcur_id << endl;
	}

private:
	int publications;
};

class Student : public Person {
public:
    Student(){}
	void getdata() {
		cin >> this->name >> this->age;
		for (int i=0; i<6; i++) {
			cin >> marks[i];
		}
	}
	void putdata() {
		int sum = 0;
		for (int i=0; i<6; i++) {
			sum += marks[i];
		}
		cout << name << " " << age << " " << sum << " " << ++scur_id << endl;
	}

private:
	int marks[6];
};

int main(int argc, char *argv[])
{
	int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
}