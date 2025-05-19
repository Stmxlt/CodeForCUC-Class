/*
二维数组指针
int a[3][4]={{1,2,3,4},{2,3,4,5}}  //3行4列数组赋值
可以省略第一维度
int b[][2][3]={1,2,3,4,5,6,7,8,9,10,11,12}  //2行2列3竖数组赋值 
int c[][4]={{1},{1},{1}}  //对第0列赋值
数组名代表数组首地址，查找任意元素地址，用数组名+偏移量表示
a+i=&a[i],a[i]=*(a+i)
int a[3][4],*p=a;
则有p=a=a+0=a[0],a[0]是行向量,&a[0]是行地址 
a[0]+1=a[0][1],a[0][1]是元素
e.g.int a[3][4];
    (a+1)+2=&(a[1][2]);  //表示a[1][2]地址 
    *a=a[0]=&a[0][0];  //表示a[0][0]地址
    *(*(a+1)+2)=a[1][2];  //表示a[1][2]值
归纳：
&a[i][j]=a[i]+j=*(a+i)+j  //表示地址
*(a[i]+j)=*(*(a+i)+j)=a[i][j]  //表示地址值 
利用地址打印数组 
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int i,j;
	for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
	printf("a[%d][%d]=%d",i,j,*(a[i]+j));  
	printf("\n");
	}
	}
	return 0;
int a[3][4],*p=&a[0][0];
a[i][j]=*(p+(i*4+j)); //偏移i*4+j字节内存
e.g.打印数表 
	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23},*p;
	for(p=a[0];p<a[0]+12;p++){  //不可以用a或a[0][0],p是指针,不能存放二维数组a或元素值a[0][0],只能存放行向量地址a[0] 
	if((p-a[0])%4==0) printf("\n");  //第4个元素后换行
	printf("%4d",*p);  //逐个打印元素 
	}
	return 0;
指向行数组的指针
int a[3][4],(*p)[4];p=a;  //p指向4个元素的一维数组
p+i=a[i],(p+i)+j=&(a[i][j]),*(*(p+i)+j)=a[i][j];  //分别代表a[i]向量地址,a[i][j]地址,a[i][j]值 
e.g.打印数表 
    int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23},(*p)[4];p=a;
    for(int i=0;i<3;i++){
	    for(int j=0;j<4;j++){
	        printf("%4d",*(*p+j));  //*p=a[0],*p+j=&(a[0]+j)=&a[0][j]
	        }
	p++;  //*p由a[0]分别指向&a[1],&a[2]
	printf("\n");
	}
	return 0;
字符串指针
存储字符串中注意最后一位用"\0"代替 
利用字符数组存储字符串，或用字符串首地址保存到字符指针变量中 
e.g.char a[10];  //产生一个名字a的最多9个字符组成的字符串,也可以缺少 
e.g.char str[10]={'f','u','c','k','!','\0'};  //表示"fuck!\0" 
e.g.char ch[10]={"nigger!!"};  //表示"nigger!!\0" 
字符输入输出scanf("%c",&str);printf("%c",&str);
字符串输入输出scanf("%s",str);printf("%s",str);
scanf输入字符串将空格回车跳格都作为\0,输出会在第一个\0停止
二维字符数组
char a[3][4]
可以对单个元素获取单个元素，也可以对一行获取一个字符串
e.g.char week[7][10]={"monday","tuesday","wednesday","thrusday","friday","saturday","sunday"};
    for(int i=0;i<7;i++){
	    for(int j=0;j<10;j++){
	        printf("%c",week[i][j]);
	        }
	printf("\n");
	}
	return 0;
也可以写成 
    char week[7][10]={"monday","tuesday","wednesday","thrusday","friday","saturday","sunday"};
    for(int i=0;i<7;i++){
	        printf("%s",week[i]);
	printf("\n");
	}
	return 0;
字符指针存放字符串首地址
e.g.char *str1; str1="i love china" <==> char *str1="i love china";
    char str2[14];str2="i love china"  //错误!字符数组名是常量,有本身不能被修改的地址,只能对数组元素修改地址 
    char str2[14]="i love china"  //这个是对的,将字符串拷贝到字符数组里
定义指针变量本身地址确定，存放的地址值随机
e.g.char *str1; scanf("%s",str1);  //错误!指针并未初始化,储存地址随机
    char *srt1,str2[10]; str1=str2; scanf("%s",str1);  //这个可以,指针初始化,指向字符数组
e.g.char *str1="i love china"; str1=str1+7; printf("%s",str1);  //正确,指针名变动代表字符数组向后移动
    char str2[10]={"i love china"}; str2=str2+7; printf("%s",str2);  //错误!数组名不变 
e.g.char str[]="this is a string",*string=str; //定义字符数组和指针数组并初始化 
    cout<<str<<endl; cout<<string<<endl;  //利用字符数组和字符指针打印字符串 
	string+=8;  //指针向后移8位 
    while(*string){
    	putchar(string[0]);  //打印8位后的数组内容,putchar即输出函数 
    	string++;
	}
	return 0;
字符串处理函数
gets()函数gets(string);
输入字符串直到读入换行符并将其用\0代替
e.g.char str1[10]; gets(str1);  
    char *srt1,str2[10]; str1=str2; gets(str1);
puts()函数puts(string);
输出地址为string字符串将\0用\n代替
e.g.char str1[10],s2[20]="hello\nworld"; gets(str1);  puts
strcpy(string1,string2)将string2复制到string1内,string1内存大于string2,string1字符指针或字符数组,string2也可以是字符串
e.g.char a[6]="china",b[]="FZ"; strcpy(a,b);
    strcpy(b,"10")
strcmp(string1,string2)将string1,string2从左到右比较,第一个不一样ascll码值的位置决定了大小,两者一样为0,前者大为1,后者大为-1 
e.g.int a,b,c;
    a=strcmp("abc","abc");
    b=strcmp("abc","abebc");
    c=strcmp("abc0","abc");
    printf("%d,%d,%d\n",a,b,c);
strcat(string1,string2)链接为string1string2,要求string1必须已赋值并由足够大空间储存两个数组
e.g.char s1[12]="china",s2[8]="fujian",*s3;
    strcat(s1,s2);  //连接后s1为"chinafujian",s2不变
	strcat(s3,s2);  //错误!没有初始化
strlen(string)依次计数至\0前输出数值
e.g.int a,b;
char *s0="ABC 123\n";
a=strlen(s0);
c=strlen("abc0");
printf("%d,%d\n",a,c);
strlwr(string)将字符串大写字母转成小写字母
strupr(string)将字符串小写字母转成大写字母
e.g.利用字符指针进行字符串复制
	char str1[]="this is a string",str2[20],*from=str1,*to=str2;
    while(*from){
    	*to=*from; to++; from++;
	}
	*to='\0';
	puts(str1);
	puts(str2);
	return 0; 
*/
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char str1[]="this is a string",str2[20],*from=str1,*to=str2;
    while(*from){
    	*to=*from; to++; from++;
	}
	*to='\0';
	puts(str1);
	puts(str2);
	return 0;
}
