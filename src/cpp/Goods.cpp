#include<iostream>
#include<string>
using namespace std;
class Goods{
public:
    Goods(){}
    Goods(string na,int nu):goodsname(na),goodsnum(nu){}
    virtual void showme()=0;
    ~Goods(){}
protected:
    string goodsname;
    int goodsnum;
};