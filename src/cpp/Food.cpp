#include<iostream>
#include<string>
#include "../hpp/Goods.h"
using namespace std;

class Food:public Goods{
public:
    Food(string na="00",int nu=0,string da="00"):Goods(na,nu),goodsdate(da){}
    virtual void showme(){cout<<"商品名称："<<goodsname<<"\n商品数量:"<<goodsnum<<"\n商品保质期:"<<goodsdate<<endl;}
    string getname()const{return goodsname;}
    int getnum()const{return goodsnum;}
    void setnum(int nu){goodsnum=nu;}
    friend istream& operator>>(istream&,Food&);
    ~Food(){}
private:
    string goodsdate;
};
istream& operator>>(istream&in,Food&f){
    in>>f.goodsname>>f.goodsnum>>f.goodsdate;
    if(!in)cout<<"输入为空,请重新输入，或选择其他操作"<<endl;
    return in;
}