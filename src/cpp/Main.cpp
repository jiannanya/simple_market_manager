#include<iostream>
#include<string>
#include "../hpp/Smarket.h"
using namespace std;

int main(){
    int n,i;
    string any="\n请选择要进行的操作(1：增加商品/2：售出商品/3:查询商品/4:显示超市中有效商品/5:退出系统）\n";
    Smarket one;
    one.showgoods();
        do{
            cout<<any;
            cin.clear();
            cin.sync();
            cin>>n;
            try{
                if(n==1)one.addgoods();
                else if(n==2)one.salegoods();
                else if(n==3)one.searchgoods();
                else if(n==4)one.showgoods();
                else if(n==5)break;
                else throw n;
            }
            catch(string){
                cout<<"\n商品种类不对头，请确认\n";
            }
            catch(int){
                cout<<"\n选择操作不对头，请确认\n";
            }
            }while(true);
        cout<<"已退出系统\n";
    return 0;
}