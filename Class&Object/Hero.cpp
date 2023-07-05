#include <bits/stdc++.h>
using namespace std;

class Hero{
    int health;
    char level;

    public:
    Hero(){
        cout<<"Constructor called"<<endl;
    }
    Hero(int k){
        cout<<k<<endl;
    }

    void getdata(){
        cout<<"health : "<<health<<endl;
        cout<<"level : "<<level<<endl;
    }
    void setdata(int h, int l){
        health = h;
        level = l;
    }
};


int main(){
    Hero h1;
    // cout<<"Size : "<<sizeof(h1)<<endl;
    // cout<<"health : "<<h1.health<<endl;
    // cout<<"level : "<<h1.level<<endl;
    h1.setdata(12,'B');
    h1.getdata();

    // Hero *h2 = new Hero;
    // h2->setdata(14,'C');
    // h2->getdata();
    Hero h2(2);
    return 0;
}