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
	char a[6]={0};//ԭ����
	int c[4]={0,0,0,0};//���� 
	printf("1.��ţ��   40Ԫ/һ��\n\n2.���м�   50Ԫ/һֻ\n\n3.��Ѽ     60Ԫ/һֻ\n\n");
	printf("\n��Ҫʲô������������,��û�пո�û�£�");
	cin.get(a,6);
	int cd=strlen(a),ls;
	for(int i = 0;i<cd;i++){
		if(a[i] == ' ') continue;
		if(a[i] == '1'){
			cout<<"��ţ��,��Ҫ�����̣����������֣�\n";
			cin>>c[0];
		}else if(a[i] == '2'){
			cout<<"���м�,��Ҫ����ֻ�����������֣�\n";
			cin>>c[1];
		}else if(a[i] == '3'){
			cout<<"��Ѽ,��Ҫ��ֻ�����������֣�\n";
			cin>>c[2];
		}
	}
	printf("��Ҫ��ţ��%d��,���м�%dֻ,��Ѽ%dֻ\n\n�ܼۣ�%dԪ\n\n",c[0],c[1],c[2],zj(c[0],c[1],c[2]));
	system("pause");
	return 0;
}
