#include <iostream>
using namespace std;

class Test{
    private:
    int a;
    public:
    Test(){
        cout<<"called!!";
    }
    Test(int a , int b){
        this->a = a;
    }
    void print(){
        cout<<this->a<<endl;
    }
};

int main() {
    Test test(10 , 20);
    test.print();
    getchar();
    return 0;
}