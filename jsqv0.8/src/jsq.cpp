#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main(){
	int c,d,e,f; 
	double a,b,g;
	long double flag;
	system("COLOR 94");
	cout<<"\\\\@@*********************************************@@//\n";
	cout<<"  \\@*********************************************@/\n";
	cout<<"                    牛人牌计算器                     \n";
	cout<<"@@*************************************************@@\n";
	cout<<"                      0：退出                        \n";
	cout<<"                      1：加法                        \n";
	cout<<"                      2：减法                        \n";
	cout<<"                      3：乘法                        \n";
	cout<<"                    4：整数除法                      \n";
	cout<<"                    5：小数除法                      \n";
	cout<<"                    6：求绝对值                      \n";
	cout<<"((%&@#$!**************************************!$#@&%))\n";  
	cout<<"                  7：购房金额计算                    \n";
	cout<<"                      8：平方                        \n";
	cout<<"                    9：体积计算                      \n";
	cout<<"                   10：圆面积计算                    \n";
	cout<<"                     11：立方                        \n";
	cout<<"                 12：圆柱体体积计算                  \n";
	cout<<"                13：正五边形面积计算                 \n";
	cout<<"                 14：圆锥体体积计算                  \n";
	cout<<"                    15：平方根                       \n";//Alpha Test 
	cout<<"  /@*************************************************@\\\n";
	cout<<"//@@*************************************************@@\\\\\n";
	cout<<"请输入编号：";
	while(cin>>flag){
		if (flag==0){
			cout<<"Good Bye!\n";
			system("pause");
			break;
		} else if (flag>=16){
			cout<<"0x0000002b calc.exe 严重崩溃，请重试"; //Hahahahahahah!
		} 
		if (flag==1){
			cout<<"请输入两个加数:";
			cin>>a>>b;
			cout<<a<<"+"<<b<<"的结果是"<<a+b;
		}
		if (flag==2){
			cout<<"请输入两个减数:";
			cin>>a>>b;
			cout<<a<<"-"<<b<<"的结果是"<<a-b;
		}
		if (flag==3){
			cout<<"请输入两个乘数:";
			cin>>a>>b;
			cout<<a<<"*"<<b<<"的结果是"<<a*b;
		} 
		if (flag==4){
			cout<<"请输入两个整数除数:";
			cin>>c>>d;
			cout<<c<<"/"<<d<<"的结果是"<<c/d<<"，余数是"<<c%d;
		}
		if (flag==5){
			cout<<"请输入两个除数:";
			cin>>a>>b;
			cout<<a<<"/"<<b<<"的结果是"<<a/b;
		}
		if (flag==6){
			cout<<"请输入一个数";
			cin>>a; 
			cout<<"绝对值是"<<abs(a);
		}
		if (flag==7){
			cout<<"请输入住房面积（平方米）和金额（元/平方米）:";
			cin>>c>>d;
			cout<<"您买的这套房总金额是"<<c*d<<"元";
		} 
		if (flag==8){
			cout<<"请输入立方根:";
			cin>>c;
			cout<<c<<"的立方是"<<c*c*c;
		}
		if (flag==9){
			cout<<"请输入长宽高:";
			cin>>c>>d>>e;
			cout<<"体积是"<<c*d*e;
		}
		if (flag==10){
			cout<<"请输入直径";
			cin>>a;
			b=(a/2)*(a/2);
			cout<<"面积是"<<3.14*b;
		} 
		if (flag==11){
			cout<<"请输入平方根:";
			cin>>c;
			cout<<c<<"的平方是"<<c*c;
		}
		if (flag==12){
			cout<<"请输入底面积及高（关于底面积，请参阅10号功能——圆面积计算";
			cin>>a>>b;
			cout<<"体积是"<<a*b; 
		} 
		if (flag==13){
			cout<<"请输入多边形的边数及边长：";
			cin>>f>>b;
			g=b*b;
			a=1.72*g;
			cout<<"边长为"<<b<<"的"<<"正"<<f<<"边形面积是"<<a; 
		}
		if (flag==14){
			cout<<"请输入底面积及高（关于底面积，请参阅10号功能——圆面积计算";
			cin>>a>>b;
			cout<<"体积是"<<a*b/3; 
		}
		if (flag==15){
			cout<<"请输入要求平方根的数字";
			cin>>a;
			cout<<a<<"的平方根是"<<sqrt(a);
		}
		cout<<"\n请输入编号：";
	} 
	return 0;
} 
