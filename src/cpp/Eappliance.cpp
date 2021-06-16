#include<iostream>
#include<string>
#include "../hpp/Goods.h"
using namespace std;

class Eappliance:public Goods{
public:
    Eappliance(string na="00",string co="00",int nu=0):Goods(na,nu),goodscolor(co){}
    virtual void showme(){cout<<"商品名称："<<goodsname<<"\n商品数量:"<<goodsnum<<"\n商品颜色:"<<goodscolor<<endl;}
    string getname()const{return goodsname;}
    int getnum()const{return goodsnum;}
    void setnum(int nu){goodsnum=nu;}
    friend istream& operator>>(istream&,Eappliance&);
    ~Eappliance(){}
private:
    string goodscolor;
};
istream& operator>>(istream&in,Eappliance&e){
    in>>e.goodsname>>e.goodsnum>>e.goodscolor;
    if(!in)cout<<"输入为空,请重新输入，或选择其他操作"<<endl;
    return in;
}