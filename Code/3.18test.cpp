/*��
����������ݷ�װ������,������ʹ��
�������Ĺ���,�õ�����ĸ�����͹����￴���������Ժ���Ϊ�Ķ���
e.g.�������
class RectangleArea{  //����Ϊ�����Է�װ����RectangleArea�� 
	public;  //���η�,�䵱�ⲿ�ӿ� 
	    void SetData(float L,float W);
	    float ComputeArea();
	    viod OutputArea();  //����������Ϊ 
	private;  //���η�,�������� 
	    float length,width,area;  //���������� 
};
����֮��������Ϣ����,����Ļ����ϳ��������,���������һ��ȫ������
��ͬ�Ĵ��������ͬ����Ϣ�в�ͬ����Ӧ,��ж�̬
c++�����̳кͶ�̳�,���Ƿ�װ����,���������ݷ�װ��ʵ��
����ʱ�Ķ�̬ͨ���������غ����������ʵ��,����ʱ�Ķ�̬ͨ���麯��ʵ��
C++��д�ɺ������������,ֻ����û�к�����������,ֻ�к���û������������������뺯��
#include<�ļ���> ����C++�ṩ�Ŀ⺯��
#include"�ļ���" �������п���ģ��
e.g.#include<cmath>  //==#include<math.h>
using namespace std;  //���������ռ��ֹ������ͻ,���б�ʶ������std�����ռ��� 
int main(){}  //������,�����÷���ֵ,Ҳ���Բ��÷���ֵvoid main(){}
��׼������cin>>����1>>����2>>...>>����n>>endl;  //Ĭ�����ÿո�ָ�,endl��ʾ���н���
�����cout<<���ʽ1<<���ʽ2>>...<<���ʽn<<endl;  //�������Ľ��������������� 
��������ֵvoidֻ����������
����ԭ�����ֺ����������,���к������뺯��������������,�������ͼ��ͺ���ƥ��
e.g.int sum(int x,int y);   //�����β�������ʵ����,���ú�������Ĭ��ֵ�������Ҳ���ʵ��
��Ĭ��ֵ�Ĳ��������β��б����Ҷ� 
�����������زú���
�������������������Ч������ 
e.g.inline int sum(int x,int y){return x+y};
��while��switch�ʹ���5�еĺ�������ʹ���������� 
���غ��������ƺ�����һ����ͬ����
e.g.void a(int x,int y=0); void a(int x); a(3);  //�����������������Ե���
e.g.int a(int,int); double a(int); a(3);  //�����������������Ե���,�뷵��ֵ�����޹� 
α�����ֵ��������cstdlib,������ֵ����cmath
�ַ�����ctype
new��delete��̬�ڴ�����ͷ�
c++����ṹ��������Ҫstruct,���ڶ���ṹʱ��Ҫ 
*/
#include<iostream>
using namespace std;
class RectangleArea{
	public: 
	    void SetData(float L,float W);
	    float ComputeArea();
	    void OutputArea();  //����������Ϊ 
	private:
	    float length,width,area;  //�������� 
}; 
int main(){
	float RectangleArea;
}
