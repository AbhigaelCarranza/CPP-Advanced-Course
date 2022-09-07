#include <iostream>

using namespace std;

class Op_Test{
    private:
        int age=0;
        int weight=0;
    public:
        Op_Test(int age,int weight);
        Op_Test();
        int getAge();
        int getWeight();
        friend ostream& operator<<(ostream& p,const Op_Test& dt);
        Op_Test operator +(Op_Test& other);
};

int main()
{
    Op_Test test1(25,80);
    Op_Test test2(18,75);
    Op_Test test3;
    cout<<test1<<endl;
    cout<<test2<<endl;
    test3=test2+test1;
    cout<<test3 <<endl;
    return 0;
}

Op_Test::Op_Test(int age,int weight)
{
    this->age=age;
    this->weight=weight;
}
Op_Test::Op_Test(){}
int Op_Test:: getAge()
{
    return age;
}

int Op_Test::getWeight()
{
    return weight;
}

ostream& operator<<(ostream& p,const Op_Test& dt)
{
    p << "The Age is: "<< dt.age << "\nThe Weight is: "<<dt.weight
   <<endl<<"----------------------------------------------------------";
    return p;
}

Op_Test Op_Test:: operator +(Op_Test& other)
{
    Op_Test new_other;
    new_other.age=(this->age + other.age);
    new_other.weight=(this->weight + other.weight);
    return new_other;
}