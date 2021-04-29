#include <iostream>

using namespace std;

template <typename T>
int search (T key,T arr[],int len){
	for(int i=0;i<len;i++){
		if(arr[i]==key){
			return i;
		}
	}	
	return -1;
}

int a1[]={12,123,34,55,67,89};
cout << search<int>(34,a1,4);
char a2[]={'a','s','b','d'};
cout << search<char>('b',a2,1);

template<typename T>
void swap(T &a,T &b){
	T temp;
	temp = a;
	a = b;
	b =  temp;
}

swap<float>(1,2,3,1);
swap<char>('a','b');

swap<Point>(p1,p2);
