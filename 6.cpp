#include<iostream>
using namespace std;
class test{
    static int i;
    public:
        test(){
            i++;
            cout<<"Object Number "<<i<<" is created"<<endl;
        }
        ~test(){
            cout<<"Object Number "<<i<<" is Destroyed"<<endl;
            i--;
        }
        static void show(){
            cout<<"Currently object number "<<i<<"is in use "<<endl;
        }
};
int test::i;
int main(){
    test t,t1,t2;
    t.show();
    t1.show();
    t2.show();
    return 0;
}