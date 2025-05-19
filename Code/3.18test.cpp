/*类
将代码和数据封装到类中,声明并使用
抽象对象的共性,得到抽象的概念，将客观事物看作具有属性和行为的对象
e.g.计算面积
class RectangleArea{  //将行为和属性封装到类RectangleArea内 
	public;  //修饰符,充当外部接口 
	    void SetData(float L,float W);
	    float ComputeArea();
	    viod OutputArea();  //这三行是行为 
	private;  //修饰符,隐藏数据 
	    float length,width,area;  //这行是属性 
};
对象之间利用消息交互,从类的基础上抽象出新类,新类具有上一类全部属性
不同的代码对于相同的消息有不同的响应,这叫多态
c++允许单继承和多继承,类是封装工具,对象是数据封装的实现
编译时的多态通过函数重载和运算符重载实现,运行时的多态通过虚函数实现
C++编写由函数加上类组成,只有类没有函数构造程序库,只有函数没有类仅含主函数和游离函数
#include<文件名> 用于C++提供的库函数
#include"文件名" 用于自行开发模块
e.g.#include<cmath>  //==#include<math.h>
using namespace std;  //利用命名空间防止命名冲突,所有标识符都在std命名空间中 
int main(){}  //主函数,可设置返回值,也可以不用返回值void main(){}
标准输入流cin>>变量1>>变量2>>...>>变量n>>endl;  //默认利用空格分割,endl表示本行结束
输出流cout<<表达式1<<表达式2>>...<<表达式n<<endl;  //将运算后的结果放置于输出流中 
函数返回值void只能用语句调用
函数原型体现函数声明风格,仅有函数名与函数参数个数类型,进行类型检查和函数匹配
e.g.int sum(int x,int y);   //函数形参数大于实参数,利用函数声明默认值从左往右补足实参
有默认值的参数放在形参列表最右端 
内联函数和重裁函数
内联函数解决程序运行效率问题 
e.g.inline int sum(int x,int y){return x+y};
有while、switch和大于5行的函数不能使用内联函数 
重载函数对类似函数起一个共同名称
e.g.void a(int x,int y=0); void a(int x); a(3);  //错误！两个函数都可以调用
e.g.int a(int,int); double a(int); a(3);  //错误！两个函数都可以调用,与返回值类型无关 
伪随机数值发生函数cstdlib,其他数值函数cmath
字符函数ctype
new和delete动态内存分配释放
c++定义结构变量不需要struct,但在定义结构时需要 
*/
#include<iostream>
using namespace std;
class RectangleArea{
	public: 
	    void SetData(float L,float W);
	    float ComputeArea();
	    void OutputArea();  //这三行是行为 
	private:
	    float length,width,area;  //这是属性 
}; 
int main(){
	float RectangleArea;
}
