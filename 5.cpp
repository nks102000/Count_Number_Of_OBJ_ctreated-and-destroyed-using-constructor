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
};
int test::i;
int main(){
    test t,t1,t2;
    return 0;
}