#include <iostream>
using namespace std;
class Person{       //base class
    private:
    string name;
    public:
    Person(string n){
        name=n;
    }
    string getName(){
        return name;
    }
};
class Student:public Person{    //child1
    private:
    int marks;
    public:
    Student(string n,int m):Person(n){
        marks=m;
    }
    int getMarks(){
        return marks;
    }
};
class graduateStudent:public Student{       //child2
    private:
    string researchTopic;
    public:
    graduateStudent(string n,int m,string topic):Student(n,m){
        researchTopic=topic;
    }
    void display(){
        cout<<"Name :"<<getName()<<endl;
        cout<<"Research Topic :"<<researchTopic<<endl;
        cout<<"Marks :"<<getMarks()<<endl;
    }
};
int main(){
    graduateStudent S1("Ali",95,"Traffic Monitor");
    S1.display();
}