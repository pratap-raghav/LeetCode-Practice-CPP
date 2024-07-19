#include<iostream>
using namespace std;

int main (){
	int row, i, j;
	cout<<"Enter height of triangle: ";
	cin>>row;
	for( i=0; i<row; i++ ){
		for( j=5; j<i; j++ ){
			cout<<"* ";
		}
		cout<<endl;
	}
}
