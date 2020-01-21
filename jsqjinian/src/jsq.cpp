#include <iostream>
#include <cstdio>
#include <cmath>
#include <windows.h>
#include <cstdlib>
using namespace std;
double cheng(double a,double b){
	a=log10(a);
	b=log10(b);
	return pow(10,a+b);
} 
double chu(double a,double b){
	a=log10(a);
	b=log10(b);
	return pow(10,a-b);
} 
double cif(double a,double b){
	a=log10(a);
	return pow(10,a*b);
} 
double kaif(double a,double b){
	a=log10(a);
	return pow(10,a/b);
} 
int main() {
	int c,d,e,f;
	double a,b,g;
	string flag;
	string qy="引\a言\a：\a\n\a自\a古\a以\a来\a，\a人\a们\a一\a直\a靠\a手\a算\a和\a心\a算\a进\a行\a计\a算\a，\a但\a自\a苏\a格\a兰\a数\a学\a家\a约\a翰\a·\a纳\a皮\a尔\a发\a现\a对\a数\a开\a始\a，\a人\a类\a便\a步\a入\a自\a动\a化\a时\a代\a。\a\n\a原\a来\a，\a1\a和\a0\a，\a真\a和\a假\a，\a黑\a与\a白\a，\a光\a与\a暗\a，\a泾\a渭\a分\a明\a。\a今\a天\a，\a量\a子\a之\a钟\a敲\a响\a，\a真\a真\a假\a假\a，\a假\a假\a真\a真\a，\a黑\a白\a不\a再\a分\a明\a。\a\n\a初\a心\a不\a变\a，\a向\a伟\a人\a们\a致\a敬\a！\a\n\ah\at\at\ap\as\a:\a/\a/\aw\aw\aw\a.\aj\ai\aa\an\as\ah\au\a.\ac\ao\am\a/\an\ab\a/\a2\a8\a0\a0\a9\a6\a3\a6\a";
	for(int i=0;i<qy.size();i++){
		cout<<qy[i];
		Sleep(100);
	}
	#ifdef _WIN32
	system("cls");
	#else
	system("clear");
	#endif
	cout<<"\\\\@@*********************************************@@//    \n";
	cout<<"  \\@*********************************************@/       \n";
	cout<<"                牛人牌高速对数计算器                       \n";
	cout<<"@@*************************************************@@      \n";
	cout<<"                      0：退出                              \n";
	cout<<"                      1：加法                              \n";
	cout<<"                      2：减法                              \n";
	cout<<"                      3：乘法                              \n";
	cout<<"                      4：除法                              \n";
	cout<<"((%&@#$!**************************************!$#@&%))     \n";
    cout<<"                      5：次方                              \n";
	cout<<"                      6：开方                              \n";  
	cout<<"  /@*************************************************@\\   \n";
	cout<<"                      7：关于                              \n";
	cout<<"//@@*************************************************@@\\\\\n";
	cout<<"Hi！我是WCR，2.1版来了！"<<endl;
	cout<<"https://github.com/ds1302zs/jsq/"<<endl;
	cout<<"请输入编号："<<endl;
	while(cin>>flag) {
		if (flag=="0") {
			cout<<"Good Bye!\n";
			system("pause");
			break;
		} else if (flag!="0" && flag!="1" && flag!="2" && flag!="3" && flag!="4" && flag!="5" && flag!="6" && flag!="7") {
			cout<<"0x0000002B calc.exe Serious error, Please try again.";
		}
		if (flag=="1") {
			cout<<"请输入两个加数:";
			cin>>a>>b;
			cout<<a<<"+"<<b<<"的结果是"<<a+b;
		}
		if (flag=="2") {
			cout<<"请输入两个减数:";
			cin>>a>>b;
			cout<<a<<"-"<<b<<"的结果是"<<a-b;
		}
		if (flag=="3") {
			cout<<"请输入两个乘数:";
			cin>>a>>b;
			cout<<a<<"*"<<b<<"的结果是"<<cheng(a,b);
		}
		if (flag=="4") {
			cout<<"请输入两个除数:";
			cin>>a>>b;
			cout<<a<<"/"<<b<<"的结果是"<<chu(a,b);
		}
		if (flag=="5") {
			cout<<"请输入基数和指数：";
			cin>>a>>b;
			cout<<"结果是"<<cif(a,b);
	    }
	    if (flag=="6") {
			cout<<"请输入基数和次数：";
			cin>>a>>b;
			cout<<"结果是"<<kaif(a,b);
	    }
	    if (flag=="7") {
			cout<<"牛人牌高速对数计算器----特别纪念版\nPowered By WCR.";
	    }
		cout<<"\n请输入编号：";
	}
	return 0;
}
