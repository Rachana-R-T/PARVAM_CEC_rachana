#include<iostream>
using namespace std;

class Atria{
    public:
    void show();
};

void Atria::show(){
    cout<<"Amazing Atria class"<<endl;
}

int main(){
    Atria d;
    d.show();
    return 0;
}