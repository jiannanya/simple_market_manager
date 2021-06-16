#include<iostream>
#include<string>
#include "../hpp/Goods.h"
using namespace std;

class Dailygoods:public Goods{
public:
    Dailygoods(string na="00",int nu=0):Goods(na,nu){}
    virtual void showme(){cout<<"商品名称："<<goodsname<<"\n商品数量:"<<goodsnum<<endl;}
    string getname()const{return goodsname;}
    int getnum()const{return goodsnum;}
    void setnum(int nu){goodsnum=nu;}
    friend istream& operator>>(istream&,Dailygoods&);
    ~Dailygoods(){}
};
istream& operator>>(istream&in,Dailygoods&d){
    in>>d.goodsname>>d.goodsnum;
    if(!in)cout<<"输入为空,请重新输入，或选择其他操作"<<endl;
    return in;
}