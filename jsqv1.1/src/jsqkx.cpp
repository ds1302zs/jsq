#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#define PI 3.1415926535897932384626433832795
using namespace std;
int main() {
	int a;
	double x,y,fp,in;
	int intp; 
	string flag;
	system("COLOR 94");
	cout<<"\\\\@@*********************************************@@//  \n";
	cout<<"  \\@*********************************************@//    \n";
	cout<<"                   ţ���ƿ�ѧ������                      \n";
	cout<<"@@*************************************************@@    \n";
	cout<<"                      0���˳�                            \n";
	cout<<"                      1������ֵ                          \n";
	cout<<"                      2��������                          \n";
	cout<<"                      3��������                          \n";
	cout<<"                      4��������                          \n";
	cout<<"                     5��e��x�η�                         \n";
	cout<<"                       6������                           \n";
	cout<<"((%&@#$!**************************************!$#@&%))   \n";
	cout<<"                       7������                           \n";
	cout<<"                       8������                           \n";
	cout<<"                9����С��x����С����                   \n";
	cout<<"                  10����x��˫������ֵ                    \n";
	cout<<"                 11���󸡵���x�ľ���ֵ                   \n";
	cout<<"                   12������x/y������                     \n";
	cout<<"              13���Ѹ�����x�ֽ��β����ָ��              \n";
	cout<<"                 14��log������eΪ�׶���                  \n";
	cout<<"               15���Ѹ�������Ϊ������С��                \n";
	cout<<"                   16������x��y����                      \n";
	cout<<"                  17����x��˫������ֵ                    \n";
	cout<<"                       18������                          \n";
	cout<<"                  19����x��˫������ֵ                    \n";
	cout<<"                   20��y/x �ķ�����                      \n";
	cout<<"               21��log10������10Ϊ�׶���                 \n";
	cout<<"  /@*************************************************@\  \n";
	cout<<"                     22������                            \n";
	cout<<"//@@*************************************************@@\\\n";
	cout<<"Hi������WCR��1.1�����ˣ�"<<endl;
	cout<<"�������ţ�"<<endl;
	cout<<"https://github.com/ds1302zs/jsqv1.1/"<<endl;
	while(cin>>flag) {
		if (flag=="0") {
			cout<<"Good Bye!\n";
			system("pause");
			break;
		} else if (flag!="0" && flag!="1" && flag!="2" && flag!="3" && flag!="4" && flag!="5" && flag!="6" && flag!="7" && flag!="8" && flag!="9" && flag!="10" && flag!="11" && flag!="12" && flag!="13" && flag!="14" && flag!="15") {
			cout<<"0x0000002B calc.exe Serious error, Please try again.";
		}
		if (flag=="1") {
			cout<<"�����������ֵ����:";
			cin>>a;
			cout<<a<<"�ľ���ֵ��"<<abs(a);
		}
		if (flag=="2") {
			cout<<"�����������ҵ���:";
			cin>>x;
			cout<<x<<"�ľ���ֵ��"<<acos(x)*180/PI;
		}
		if (flag=="3") {
			cout<<"�����������ҵ���:";
			cin>>x;
			cout<<x<<"�ľ���ֵ��"<<asin(x)*180/PI;
		}
		if (flag=="4") {
			cout<<"�����������е���:";
			cin>>x;
			cout<<x<<"�ľ���ֵ��"<<atan(x)*180/PI;
		}
		if (flag=="5") {
			cout<<"��e��x�η���������x:";
			cin>>x;
			cout<<x<<"�ľ���ֵ��"<<exp(x);
		}
		if (flag=="6") {
			cout<<"�����������ҵ���:";
			cin>>x;
			cout<<x<<"�ľ���ֵ��"<<cos(x*PI/180.0);
		}
		if (flag=="7") {
			cout<<"�����������ҵ���:";
			cin>>x;
			cout<<x<<"�ľ���ֵ��"<<sin(x*PI/180.0);
		}
		if (flag=="8") {
			cout<<"�����������е���:";
			cin>>x;
			cout<<x<<"�ľ���ֵ��"<<tan(x*PI/180.0);
		}
		if (flag=="9") {
			cout<<"��С��x����С������������x:";
			cin>>x;
			cout<<x<<"�ľ���ֵ��"<<ceil(x);
		}
		if (flag=="10") {
			cout<<"��������˫������ֵ����:";
			cin>>x;
			cout<<x<<"�ľ���ֵ��"<<cosh(x*PI/180.0);
		}
		if (flag=="11") {
			cout<<"�����������ֵ�ĸ�����:";
			cin>>x;
			cout<<x<<"�ľ���ֵ��"<<fabs(x);
		}
		if (flag=="12") {
			cout<<"����x/y��������������x��y:";
			cin>>x>>y;
			cout<<x<<"/"<<y<<"��������"<<fmod(x,y);
		}
		if (flag=="13") {
			cout<<"�Ѹ�����x�ֽ��β����ָ����������x:";
			cin>>x;
			fp=frexp(x,&intp);
			cout<<x<<"��β����"<<fp<<"��ָ���� 2*"<<intp;
		}
		if (flag=="14") {
			cout<<"log����,��eΪ�ף�������һ�����������:";
			cin>>x;
			cout<<x<<"��log����,��eΪ�����Ļ�������"<<log(x);
		}
		if (flag=="15") {
			cout<<"������һ������������Ϊ������С��:";
			cin>>x;
			cout<<x<<"������������";
			fp=modf(x,&in);
			cout<<intp<<"��С��������"<<fp;
		}
		if (flag=="16") {
			cout<<"����x��y���ݣ�������x��y:";
			cin>>x>>y;
			cout<<x<<"��"<<y<<"�η���"<<pow(x,y);
		}
		if (flag=="17") {
			cout<<"��������˫������ֵ����:";
			cin>>x;
			cout<<x<<"�ľ���ֵ��"<<sinh(x*PI/180.0);
		}
		if (flag=="18") {
			cout<<"������Ҫ��������:";
			cin>>x;
			cout<<x<<"�ľ���ֵ��"<<sqrt(x);
		}
		if (flag=="19") {
			cout<<"��������˫������ֵ����:";
			cin>>x;
			cout<<x<<"�ľ���ֵ��"<<tanh(x*PI/180.0);
		}
		if (flag=="20") {
			cout<<"��y/x �ķ����У�������y��x:";
			cin>>x>>y;
			cout<<x<<"�ľ���ֵ��"<<atan2(x,y)*180/PI;
		}
		if (flag=="21") {
			cout<<"log����,��10Ϊ�ף�������һ�����������:";
			cin>>x; 
			cout<<x<<"�ľ���ֵ��"<<log10(x);
		}
		if (flag=="22") {
			cout<<"Author: WCR"<<endl;
			cout<<"Version 1.1";
		}
		cout<<"\n�������ţ�";
	}
	return 0;
}
