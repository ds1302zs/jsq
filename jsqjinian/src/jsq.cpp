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
	string qy="��\a��\a��\a\n\a��\a��\a��\a��\a��\a��\a��\aһ\aֱ\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\aѧ\a��\aԼ\a��\a��\a��\aƤ\a��\a��\a��\a��\a��\a��\aʼ\a��\a��\a��\a��\a��\a��\a��\a��\a��\aʱ\a��\a��\a\n\aԭ\a��\a��\a1\a��\a0\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\aμ\a��\a��\a��\a��\a��\a��\a��\a��\a֮\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\a��\a\n\a��\a��\a��\a��\a��\a��\aΰ\a��\a��\a��\a��\a��\a\n\ah\at\at\ap\as\a:\a/\a/\aw\aw\aw\a.\aj\ai\aa\an\as\ah\au\a.\ac\ao\am\a/\an\ab\a/\a2\a8\a0\a0\a9\a6\a3\a6\a";
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
	cout<<"                ţ���Ƹ��ٶ���������                       \n";
	cout<<"@@*************************************************@@      \n";
	cout<<"                      0���˳�                              \n";
	cout<<"                      1���ӷ�                              \n";
	cout<<"                      2������                              \n";
	cout<<"                      3���˷�                              \n";
	cout<<"                      4������                              \n";
	cout<<"((%&@#$!**************************************!$#@&%))     \n";
    cout<<"                      5���η�                              \n";
	cout<<"                      6������                              \n";  
	cout<<"  /@*************************************************@\\   \n";
	cout<<"                      7������                              \n";
	cout<<"//@@*************************************************@@\\\\\n";
	cout<<"Hi������WCR��2.1�����ˣ�"<<endl;
	cout<<"https://github.com/ds1302zs/jsq/"<<endl;
	cout<<"�������ţ�"<<endl;
	while(cin>>flag) {
		if (flag=="0") {
			cout<<"Good Bye!\n";
			system("pause");
			break;
		} else if (flag!="0" && flag!="1" && flag!="2" && flag!="3" && flag!="4" && flag!="5" && flag!="6" && flag!="7") {
			cout<<"0x0000002B calc.exe Serious error, Please try again.";
		}
		if (flag=="1") {
			cout<<"��������������:";
			cin>>a>>b;
			cout<<a<<"+"<<b<<"�Ľ����"<<a+b;
		}
		if (flag=="2") {
			cout<<"��������������:";
			cin>>a>>b;
			cout<<a<<"-"<<b<<"�Ľ����"<<a-b;
		}
		if (flag=="3") {
			cout<<"��������������:";
			cin>>a>>b;
			cout<<a<<"*"<<b<<"�Ľ����"<<cheng(a,b);
		}
		if (flag=="4") {
			cout<<"��������������:";
			cin>>a>>b;
			cout<<a<<"/"<<b<<"�Ľ����"<<chu(a,b);
		}
		if (flag=="5") {
			cout<<"�����������ָ����";
			cin>>a>>b;
			cout<<"�����"<<cif(a,b);
	    }
	    if (flag=="6") {
			cout<<"����������ʹ�����";
			cin>>a>>b;
			cout<<"�����"<<kaif(a,b);
	    }
	    if (flag=="7") {
			cout<<"ţ���Ƹ��ٶ���������----�ر�����\nPowered By WCR.";
	    }
		cout<<"\n�������ţ�";
	}
	return 0;
}
