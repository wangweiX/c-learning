#include <iostream>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string _name, int _age) {
        setName(_name);
        setAge(_age);
    }

    void setName(string _name) {
        name = _name;
    }

    string getName() {
        return name;
    }

    void setAge(int _age) {
        age = _age;
    }

    int getAge() {
        return age;
    }

    void sayHello() {
        cout << "Hello every body, I am " << getName() << " and my age is " << getAge() << endl;
    }
};


int main() {
    Person person("wangwei", 26);
    person.sayHello();

    Person person1{"wangwei", 26};
    person1.sayHello();

    Person person2 = {"wangwei", 26};
    person2.sayHello();

    return 0;
}


