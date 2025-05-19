#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int cmp(const void *a,const void *b){
	const char **strA=(const char **)a;
    const char **strB=(const char **)b;
    size_t lenA=strlen(*strA);
    size_t lenB=strlen(*strB);
    if(lenA!=lenB){
        return lenA-lenB;  
    }
	else{ 
        return strcmp(*strA, *strB);  
    }
}
int main(){
	int nums;
	const char *strings[]={"enter","number","size","begin","cat","case","program","certain","a"};
	nums=sizeof(strings)/sizeof(strings[0]);
    qsort(strings,nums,sizeof(string),cmp);
	for(nums=0;nums<10;nums++){
        cout<<strings[nums]<<endl;
    }
	return 0;
}
