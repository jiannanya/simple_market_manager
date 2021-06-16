#include<iostream>
#include<string>
#include "../hpp/Goods.h"
#include "../hpp/Dailygoods.h"
#include "../hpp/Food.h"
#include "../hpp/Eappliance.h"

using namespace std;

class Smarket{
public:
    Smarket(){}
    void addgoods();
    void salegoods();
    void searchgoods();
    void showgoods();
private:
    Dailygoods day[100];
    Food food[100];
    Eappliance eapp[100];
};
void Smarket::addgoods(){
    int nu,i,so;
    string na;
    cout<<"\n请选择增加商品种类(1:d-goods/2:food/3:e-appliance)\n";
    cin>>so;
    cout<<"\n请输入增加商品名称\n";
    cin>>na;
        if(so==1){
            for(i=0;i<100;i++){
                if(day[i].getnum()==0){
                        cout<<"\n请再次输入商品名称和增加数量\n";
                        cin>>day[i];
                        break;
                }
            }
            cout<<"\n增加后商品信息如下：\n";
            day[i].showme();
        }
        else if(so==2){
            for(i=0;i<100;i++){
                if(food[i].getnum()==0){
                        cout<<"\n请再次输入商品名称、增加数量和商品保质期\n";
                        cin>>food[i];
                        break;
                }
            }
            cout<<"\n增加后商品信息如下：\n";
            food[i].showme();
        }
        else if(so==3){
            for(i=0;i<100;i++){
                if(eapp[i].getnum()==0){
                        cout<<"\n请再次输入商品名称、增加数量和商品颜色\n";
                        cin>>eapp[i];
                        break;
                }
            }
            cout<<"\n增加后商品信息如下：\n";
            eapp[i].showme();

        }
        else throw na;
        cout<<"\n增加操作完毕！\n";
}
void Smarket::salegoods(){
    int nu,i,so;
    string na;
    cout<<"请选择售出商品种类(1:d-goods/2:food/3:e-appliance)\n";
    cin>>so;
    cout<<"请输入售出商品名称\n";
    cin>>na;
    cout<<"请输入售出商品数量\n";
    cin>>nu;
    if(so==1){
        for(i==0;day[i].getname()!=na;i++){
            if(i==99&&day[99].getname()!=na){
                so=-1;
                break;
            }
        }
        if(day[i].getnum()>=nu&so!=-1){
            day[i].setnum(nu=day[i].getnum()-nu);
            cout<<"\n售出后商品信息如下：\n";
            day[i].showme();
        }
        else cout<<"\n商品数量不足，请及时增加商品\n";
    }
    else if(so==2){
        for(i=0;food[i].getname()!=na;i++){
            if(i==99&&food[99].getname()!=na){
                so=-1;
                break;
            }
        }
        if(food[i].getnum()>=nu&so!=-1){
            food[i].setnum(nu=food[i].getnum()-nu);
            cout<<"\n售出后商品信息如下：\n";
            food[i].showme();
        }
        else cout<<"\n商品数量不足，请及时增加商品\n";
    }
    else if(so==3){
        for(i=0;eapp[i].getname()!=na;i++){
            if(i==99&&eapp[99].getname()!=na){
                so=-1;
                break;
            }
        }
        if(eapp[i].getnum()>=nu&so!=-1){
            eapp[i].setnum(nu=eapp[i].getnum()-nu);
            cout<<"\n售出后商品信息如下：\n";
            eapp[i].showme();
        }
        else cout<<"\n商品数量不足，请及时增加商品\n";
    }
    else throw na;
    cout<<"\n售出操作完毕！\n";
}
void Smarket::searchgoods(){
    int nu=0,i,so;
    cout<<"请选择查询商品种类(1:d-goods/2:food/3:e-appliance)\n";
    cin>>so;
    if(so==1){
        for(i=0;i<100;i++){
            if(day[i].getnum()==0)continue;
            else {day[i].showme();nu=1;}
        }
    }
    else if(so==2){
        for(i=0;i<100;i++){
            if(food[i].getnum()==0)continue;
            else {food[i].showme();nu=1;}
        }
    }
    else if(so==3){
        for(i=0;i<100;i++){
            if(eapp[i].getnum()==0)continue;
            else {eapp[i].showme();nu=1;}
        }
    }
    else throw so;
    cout<<"\n查询操作完毕\n";
}
void Smarket::showgoods(){
    int i;
    for(i=0;i<26;i++)cout<<"-";
    cout<<"\n         简单超市\n";
    for(i=0;i<100;i++){
        if(day[i].getnum()==0)continue;
        else day[i].showme();
    }
    for(i=0;i<100;i++){
        if(food[i].getnum()==0)continue;
        else food[i].showme();
    }
    for(i=0;i<100;i++){
        if(eapp[i].getnum()==0)continue;
        else eapp[i].showme();
    }
    for(i=0;i<26;i++)cout<<"-";
}