#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#define PI 3.1415926535897932384626433832795//31 digit
using namespace std;
int main() {
	int c,d,e,f;
	double a,b,g;
	string flag;
	#ifdef _WIN32
	system("COLOR 94");
	#endif
	cout<<"\\\\@@*********************************************@@//\n";
	cout<<"  \\@*********************************************@/\n";
	cout<<"                   ţ������ͨ������                  \n";
	cout<<"@@*************************************************@@\n";
	cout<<"                      0���˳�                        \n";
	cout<<"                      1���ӷ�                        \n";
	cout<<"                      2������                        \n";
	cout<<"                      3���˷�                        \n";
	cout<<"                    4����������                      \n";
	cout<<"                    5��С������                      \n";
	cout<<"                    6�������ֵ                      \n";
	cout<<"((%&@#$!**************************************!$#@&%))\n";
	cout<<"                  7������������                    \n";
	cout<<"                      8������                        \n";
	cout<<"                    9���������                      \n";
	cout<<"                   10��Բ�������                    \n";
	cout<<"                     11��ƽ��                        \n";
	cout<<"                 12��Բ�����������                  \n";
	cout<<"                 13��Բ׶���������                  \n";
	cout<<"                    14��ƽ����                       \n";
	cout<<"  /@*************************************************@\\\n";
	cout<<"                     15������                        \n";
	cout<<"//@@*************************************************@@\\\\\n";
	cout<<"Hi������WCR��2.1�����ˣ�"<<endl;
	cout<<"https://github.com/ds1302zs/jsq/"<<endl;
	cout<<"�������ţ�"<<endl;
	while(cin>>flag) {
		if (flag=="0") {
			cout<<"Good Bye!\n";
			system("pause");
			break;
		} else if (flag!="0" && flag!="1" && flag!="2" && flag!="3" && flag!="4" && flag!="5" && flag!="6" && flag!="7" && flag!="8" && flag!="9" && flag!="10" && flag!="11" && flag!="12" && flag!="13" && flag!="14" && flag!="15") {
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
			cout<<a<<"*"<<b<<"�Ľ����"<<a*b;
		}
		if (flag=="4") {
			cout<<"������������������:";
			cin>>c>>d;
			cout<<c<<"/"<<d<<"�Ľ����"<<c/d<<"��������"<<c%d;
		}
		if (flag=="5") {
			cout<<"��������������:";
			cin>>a>>b;
			cout<<a<<"/"<<b<<"�Ľ����"<<a/b;
		}
		if (flag=="6") {
			cout<<"������һ����";
			cin>>a;
			cout<<"����ֵ��"<<abs(a);
		}
		if (flag=="7") {
			cout<<"������ס�������ƽ���ף��ͽ�Ԫ/ƽ���ף�:";
			cin>>a>>b;
			cout<<"��������׷��ܽ����"<<a*b<<"Ԫ";
		}
		if (flag=="8") {
			cout<<"������������:";
			cin>>c;
			cout<<c<<"��������"<<c*c*c;
		}
		if (flag=="9") {
			cout<<"�����볤���:";
			cin>>c>>d>>e;
			cout<<"�����"<<c*d*e;
		}
		if (flag=="10") {
			cout<<"������ֱ��";
			cin>>a;
			b=(a/2)*(a/2);
			cout<<"�����"<<PI*b;
		}
		if (flag=="11") {
			cout<<"������ƽ����:";
			cin>>c;
			cout<<c<<"��ƽ����"<<c*c;
		}
		if (flag=="12") {
			cout<<"�������������ߣ����ڵ�����������10�Ź��ܡ���Բ������㣩";
			cin>>a>>b;
			cout<<"�����"<<a*b;
		}
		if (flag=="13") {
			cout<<"�������������ߣ����ڵ�����������10�Ź��ܡ���Բ������㣩";
			cin>>a>>b;
			cout<<"�����"<<a*b/3;
		}
		if (flag=="14") {
			cout<<"������Ҫ��ƽ����������";
			cin>>a;
			cout<<a<<"��ƽ������"<<sqrt(a);
		}
		if (flag=="15") {
			cout<<"Author: WCR"<<endl;
			cout<<"Version 1.5";
		}
		cout<<"\n�������ţ�";
	}
	return 0;
}
