/*
��ά����ָ��
int a[3][4]={{1,2,3,4},{2,3,4,5}}  //3��4�����鸳ֵ
����ʡ�Ե�һά��
int b[][2][3]={1,2,3,4,5,6,7,8,9,10,11,12}  //2��2��3�����鸳ֵ 
int c[][4]={{1},{1},{1}}  //�Ե�0�и�ֵ
���������������׵�ַ����������Ԫ�ص�ַ����������+ƫ������ʾ
a+i=&a[i],a[i]=*(a+i)
int a[3][4],*p=a;
����p=a=a+0=a[0],a[0]��������,&a[0]���е�ַ 
a[0]+1=a[0][1],a[0][1]��Ԫ��
e.g.int a[3][4];
    (a+1)+2=&(a[1][2]);  //��ʾa[1][2]��ַ 
    *a=a[0]=&a[0][0];  //��ʾa[0][0]��ַ
    *(*(a+1)+2)=a[1][2];  //��ʾa[1][2]ֵ
���ɣ�
&a[i][j]=a[i]+j=*(a+i)+j  //��ʾ��ַ
*(a[i]+j)=*(*(a+i)+j)=a[i][j]  //��ʾ��ֵַ 
���õ�ַ��ӡ���� 
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
a[i][j]=*(p+(i*4+j)); //ƫ��i*4+j�ֽ��ڴ�
e.g.��ӡ���� 
	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23},*p;
	for(p=a[0];p<a[0]+12;p++){  //��������a��a[0][0],p��ָ��,���ܴ�Ŷ�ά����a��Ԫ��ֵa[0][0],ֻ�ܴ����������ַa[0] 
	if((p-a[0])%4==0) printf("\n");  //��4��Ԫ�غ���
	printf("%4d",*p);  //�����ӡԪ�� 
	}
	return 0;
ָ���������ָ��
int a[3][4],(*p)[4];p=a;  //pָ��4��Ԫ�ص�һά����
p+i=a[i],(p+i)+j=&(a[i][j]),*(*(p+i)+j)=a[i][j];  //�ֱ����a[i]������ַ,a[i][j]��ַ,a[i][j]ֵ 
e.g.��ӡ���� 
    int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23},(*p)[4];p=a;
    for(int i=0;i<3;i++){
	    for(int j=0;j<4;j++){
	        printf("%4d",*(*p+j));  //*p=a[0],*p+j=&(a[0]+j)=&a[0][j]
	        }
	p++;  //*p��a[0]�ֱ�ָ��&a[1],&a[2]
	printf("\n");
	}
	return 0;
�ַ���ָ��
�洢�ַ�����ע�����һλ��"\0"���� 
�����ַ�����洢�ַ����������ַ����׵�ַ���浽�ַ�ָ������� 
e.g.char a[10];  //����һ������a�����9���ַ���ɵ��ַ���,Ҳ����ȱ�� 
e.g.char str[10]={'f','u','c','k','!','\0'};  //��ʾ"fuck!\0" 
e.g.char ch[10]={"nigger!!"};  //��ʾ"nigger!!\0" 
�ַ��������scanf("%c",&str);printf("%c",&str);
�ַ����������scanf("%s",str);printf("%s",str);
scanf�����ַ������ո�س�������Ϊ\0,������ڵ�һ��\0ֹͣ
��ά�ַ�����
char a[3][4]
���ԶԵ���Ԫ�ػ�ȡ����Ԫ�أ�Ҳ���Զ�һ�л�ȡһ���ַ���
e.g.char week[7][10]={"monday","tuesday","wednesday","thrusday","friday","saturday","sunday"};
    for(int i=0;i<7;i++){
	    for(int j=0;j<10;j++){
	        printf("%c",week[i][j]);
	        }
	printf("\n");
	}
	return 0;
Ҳ����д�� 
    char week[7][10]={"monday","tuesday","wednesday","thrusday","friday","saturday","sunday"};
    for(int i=0;i<7;i++){
	        printf("%s",week[i]);
	printf("\n");
	}
	return 0;
�ַ�ָ�����ַ����׵�ַ
e.g.char *str1; str1="i love china" <==> char *str1="i love china";
    char str2[14];str2="i love china"  //����!�ַ��������ǳ���,�б����ܱ��޸ĵĵ�ַ,ֻ�ܶ�����Ԫ���޸ĵ�ַ 
    char str2[14]="i love china"  //����ǶԵ�,���ַ����������ַ�������
����ָ����������ַȷ������ŵĵ�ֵַ���
e.g.char *str1; scanf("%s",str1);  //����!ָ�벢δ��ʼ��,�����ַ���
    char *srt1,str2[10]; str1=str2; scanf("%s",str1);  //�������,ָ���ʼ��,ָ���ַ�����
e.g.char *str1="i love china"; str1=str1+7; printf("%s",str1);  //��ȷ,ָ�����䶯�����ַ���������ƶ�
    char str2[10]={"i love china"}; str2=str2+7; printf("%s",str2);  //����!���������� 
e.g.char str[]="this is a string",*string=str; //�����ַ������ָ�����鲢��ʼ�� 
    cout<<str<<endl; cout<<string<<endl;  //�����ַ�������ַ�ָ���ӡ�ַ��� 
	string+=8;  //ָ�������8λ 
    while(*string){
    	putchar(string[0]);  //��ӡ8λ�����������,putchar��������� 
    	string++;
	}
	return 0;
�ַ���������
gets()����gets(string);
�����ַ���ֱ�����뻻�з���������\0����
e.g.char str1[10]; gets(str1);  
    char *srt1,str2[10]; str1=str2; gets(str1);
puts()����puts(string);
�����ַΪstring�ַ�����\0��\n����
e.g.char str1[10],s2[20]="hello\nworld"; gets(str1);  puts
strcpy(string1,string2)��string2���Ƶ�string1��,string1�ڴ����string2,string1�ַ�ָ����ַ�����,string2Ҳ�������ַ���
e.g.char a[6]="china",b[]="FZ"; strcpy(a,b);
    strcpy(b,"10")
strcmp(string1,string2)��string1,string2�����ұȽ�,��һ����һ��ascll��ֵ��λ�þ����˴�С,����һ��Ϊ0,ǰ�ߴ�Ϊ1,���ߴ�Ϊ-1 
e.g.int a,b,c;
    a=strcmp("abc","abc");
    b=strcmp("abc","abebc");
    c=strcmp("abc0","abc");
    printf("%d,%d,%d\n",a,b,c);
strcat(string1,string2)����Ϊstring1string2,Ҫ��string1�����Ѹ�ֵ�����㹻��ռ䴢����������
e.g.char s1[12]="china",s2[8]="fujian",*s3;
    strcat(s1,s2);  //���Ӻ�s1Ϊ"chinafujian",s2����
	strcat(s3,s2);  //����!û�г�ʼ��
strlen(string)���μ�����\0ǰ�����ֵ
e.g.int a,b;
char *s0="ABC 123\n";
a=strlen(s0);
c=strlen("abc0");
printf("%d,%d\n",a,c);
strlwr(string)���ַ�����д��ĸת��Сд��ĸ
strupr(string)���ַ���Сд��ĸת�ɴ�д��ĸ
e.g.�����ַ�ָ������ַ�������
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
