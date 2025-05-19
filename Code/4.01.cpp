#include<iostream>
using namespace std;
class Box{
	public:
	void Volume(){
		volume = length * width * height;
		}
	Box():length(1.0),width(1.0),height(1.0){
    	cout<<"Defult Box"<<endl;
		Volume();
    	}
    Box(double l,double w,double h):length(l),width(w),height(h){
    	cout<<"Box"<<endl;
		Volume();
    	}
    Box(const Box& other){
    	length=other.length/2;
    	width=other.width/2;
	    height=other.height/2;
	    Volume();
    	}
	void disp_vol() const {
	    cout<<"Volume of the box is:"<<volume<<endl;
	    };
	private:
		double volume,length,width,height;
};

int main(){
	Box box1(6,8,10),box2,box3(box1);
	box1.disp_vol();
	box2.disp_vol();
	box3.disp_vol();
	return 0;
}

/*#include<iostream>
#include<vector>
using namespace std;
class Student{
	public:
	Student(float s):score(s){
        total+=score;
        count++;
    }
	void scoreTotalCount(float s){
        score=s;
		total+=score;
    }
	static float sum(){
		return total;
	}
	static float average(){
		if(count==0){
			return 0;
		}
		return total/count;
	}
	private:
		float score;
		static int count;
		static float total;
};

float Student::total=0.0;
int Student::count=0;

int main(){
	vector<Student> students;
	int num;
	cin>>num;
	float inputscore;
	for(int i=0;i<num;i++){
		cin>>inputscore;
		students.push_back(Student(inputscore));
	}
	float totals,averages;
	totals=Student::sum();
	averages=Student::average();
	cout<<"Total score is:"<<totals<<endl;
	cout<<"Average score is:"<<averages<<endl;
	return 0;
}

用友元函数计算两点的距离
#include <iostream>
#include <cmath>
using namespace std;
class Point{
    public:
    Point(double xi, double yi){X=xi; Y=yi;}   
    friend double length(Point &a,Point &b);   
    private:
    int X, Y;
};
double length(Point &a,Point &b){
    double dx=a.X-b.X;
    double dy=a.Y-b.Y;
    return sqrt(dx*dx+dy*dy);;
}

int main(){
    Point p1(3, 5),p2(4, 6);
    double d=length(p1, p2);  
    cout<<"The distance is "<<d<<endl;
    return 0;
}
*/
