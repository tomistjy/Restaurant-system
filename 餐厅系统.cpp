#include<iostream>
#include<cstdio>
#include<cmath>
#include<ctime>
#include<cstring>
#include<windows.h>
using namespace std;

int zj(int a,int b,int c){
	return a*40+b*50+c*60;
}

int main(){
	char a[6]={0};//原输入
	int c[4]={0,0,0,0};//分量 
	printf("1.炒牛肉   40元/一盘\n\n2.白切鸡   50元/一只\n\n3.烤鸭     60元/一只\n\n");
	printf("\n你要什么？（输入数字,有没有空格都没事）");
	cin.get(a,6);
	int cd=strlen(a),ls;
	for(int i = 0;i<cd;i++){
		if(a[i] == ' ') continue;
		if(a[i] == '1'){
			cout<<"炒牛肉,你要多少盘？（输入数字）\n";
			cin>>c[0];
		}else if(a[i] == '2'){
			cout<<"白切鸡,你要多少只？（输入数字）\n";
			cin>>c[1];
		}else if(a[i] == '3'){
			cout<<"烤鸭,你要多只？（输入数字）\n";
			cin>>c[2];
		}
	}
	printf("你要炒牛肉%d盘,白切鸡%d只,烤鸭%d只\n\n总价：%d元\n\n",c[0],c[1],c[2],zj(c[0],c[1],c[2]));
	system("pause");
	return 0;
}
