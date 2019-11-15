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
	cout<<"                   牛人牌科学计算器                      \n";
	cout<<"@@*************************************************@@    \n";
	cout<<"                      0：退出                            \n";
	cout<<"                      1：绝对值                          \n";
	cout<<"                      2：反余弦                          \n";
	cout<<"                      3：反正弦                          \n";
	cout<<"                      4：反正切                          \n";
	cout<<"                     5：e的x次方                         \n";
	cout<<"                       6：余弦                           \n";
	cout<<"((%&@#$!**************************************!$#@&%))   \n";
	cout<<"                       7：正弦                           \n";
	cout<<"                       8：正切                           \n";
	cout<<"                9：求不小于x的最小整数                   \n";
	cout<<"                  10：求x的双曲余弦值                    \n";
	cout<<"                 11：求浮点数x的绝对值                   \n";
	cout<<"                   12：计算x/y的余数                     \n";
	cout<<"              13：把浮点数x分解成尾数和指数              \n";
	cout<<"                 14：log函数，e为底对数                  \n";
	cout<<"               15：把浮点数分为整数和小数                \n";
	cout<<"                   16：计算x的y次幂                      \n";
	cout<<"                  17：求x的双曲正弦值                    \n";
	cout<<"                       18：开方                          \n";
	cout<<"                  19：求x的双曲正切值                    \n";
	cout<<"                   20：y/x 的反正切                      \n";
	cout<<"               21：log10函数，10为底对数                 \n";
	cout<<"  /@*************************************************@\  \n";
	cout<<"                     22：关于                            \n";
	cout<<"//@@*************************************************@@\\\n";
	cout<<"Hi！我是WCR，1.1版来了！"<<endl;
	cout<<"请输入编号："<<endl;
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
			cout<<"请输入求绝对值的数:";
			cin>>a;
			cout<<a<<"的绝对值是"<<abs(a);
		}
		if (flag=="2") {
			cout<<"请输入求反余弦的数:";
			cin>>x;
			cout<<x<<"的绝对值是"<<acos(x)*180/PI;
		}
		if (flag=="3") {
			cout<<"请输入求反正弦的数:";
			cin>>x;
			cout<<x<<"的绝对值是"<<asin(x)*180/PI;
		}
		if (flag=="4") {
			cout<<"请输入求反正切的数:";
			cin>>x;
			cout<<x<<"的绝对值是"<<atan(x)*180/PI;
		}
		if (flag=="5") {
			cout<<"求e的x次方，请输入x:";
			cin>>x;
			cout<<x<<"的绝对值是"<<exp(x);
		}
		if (flag=="6") {
			cout<<"请输入求余弦的数:";
			cin>>x;
			cout<<x<<"的绝对值是"<<cos(x*PI/180.0);
		}
		if (flag=="7") {
			cout<<"请输入求正弦的数:";
			cin>>x;
			cout<<x<<"的绝对值是"<<sin(x*PI/180.0);
		}
		if (flag=="8") {
			cout<<"请输入求正切的数:";
			cin>>x;
			cout<<x<<"的绝对值是"<<tan(x*PI/180.0);
		}
		if (flag=="9") {
			cout<<"求不小于x的最小整数，请输入x:";
			cin>>x;
			cout<<x<<"的绝对值是"<<ceil(x);
		}
		if (flag=="10") {
			cout<<"请输入求双曲余弦值的数:";
			cin>>x;
			cout<<x<<"的绝对值是"<<cosh(x*PI/180.0);
		}
		if (flag=="11") {
			cout<<"请输入求绝对值的浮点数:";
			cin>>x;
			cout<<x<<"的绝对值是"<<fabs(x);
		}
		if (flag=="12") {
			cout<<"计算x/y的余数，请输入x和y:";
			cin>>x>>y;
			cout<<x<<"/"<<y<<"的余数是"<<fmod(x,y);
		}
		if (flag=="13") {
			cout<<"把浮点数x分解成尾数和指数，请输入x:";
			cin>>x;
			fp=frexp(x,&intp);
			cout<<x<<"的尾数是"<<fp<<"，指数是 2*"<<intp;
		}
		if (flag=="14") {
			cout<<"log函数,以e为底，请输入一个数来求对数:";
			cin>>x;
			cout<<x<<"的log函数,以e为底数的话得数是"<<log(x);
		}
		if (flag=="15") {
			cout<<"请输入一个数，把数分为整数和小数:";
			cin>>x;
			cout<<x<<"的整数部分是";
			fp=modf(x,&in);
			cout<<intp<<"，小数部分是"<<fp;
		}
		if (flag=="16") {
			cout<<"计算x的y次幂，请输入x和y:";
			cin>>x>>y;
			cout<<x<<"的"<<y<<"次方是"<<pow(x,y);
		}
		if (flag=="17") {
			cout<<"请输入求双曲正弦值的数:";
			cin>>x;
			cout<<x<<"的绝对值是"<<sinh(x*PI/180.0);
		}
		if (flag=="18") {
			cout<<"请输入要开方的数:";
			cin>>x;
			cout<<x<<"的绝对值是"<<sqrt(x);
		}
		if (flag=="19") {
			cout<<"请输入求双曲正切值的数:";
			cin>>x;
			cout<<x<<"的绝对值是"<<tanh(x*PI/180.0);
		}
		if (flag=="20") {
			cout<<"求y/x 的反正切，请输入y和x:";
			cin>>x>>y;
			cout<<x<<"的绝对值是"<<atan2(x,y)*180/PI;
		}
		if (flag=="21") {
			cout<<"log函数,以10为底，请输入一个数来求对数:";
			cin>>x; 
			cout<<x<<"的绝对值是"<<log10(x);
		}
		if (flag=="22") {
			cout<<"Author: WCR"<<endl;
			cout<<"Version 1.1";
		}
		cout<<"\n请输入编号：";
	}
	return 0;
}
