/*
A
BB
CCC



#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	char a=65;
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<char(i+a-1);
			j++;
		}
		cout<<endl;
		i++;
	}
}

*/


/*
A
BC
DEF
GHIJ

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	char a=65;
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<char(a);
			a++;
			j++;
		}
		cout<<endl;
		i++;
	}
}

*/

//   *
//  **
// ***
//****




//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	while(i<=n){
//		int j=1;
//		while(j<=n-i+1){
//			cout<<"*";
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
//}      

/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=0;
	int s=n-i+1;
	while(s){
		cout<<" ";
		s--;
	}
	int j=1;
	while(j<=i){
		cout<<"*";
		j++;
	}
	cout<<endl;
	i++;
}
*/



//Bitwise Operator
/*
#include<iostream>
using namespace std;
int main(){
	int a=4;
	int b=6;
	cout<<a<<1;
//	cout<<"a|b "<<a|b<<endl;
//	cout<<"a^b "<<a^b<<endl;
//	cout<<"a~b "<<a~b;
	
} 

*/

//#include<iostream>
//using namespace std;
//int main(){
////	int a=10;
////	cout<<(a>>1)<<endl;
////	cout<<(a<<2);
////	cout<<a++; //10
////	cout<<++a;//12
//	
//	int i=7;
//	cout<<(++i)<<endl; //8
//	//i=8
//	cout<<(i++)<<endl;//8
//	//i=9
//	cout<<(i--)<<endl;//9
//	//i=8
//	cout<<(--i);//7
//	
//}




//          FOR LOOP
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the value of n";
	cin>>n;
	cout<<"1 to n : ";
	for(int i=1; i<=n; i++){
		cout<<i<<endl;
		
	}
}
*/
/*
//Sum of n numbers
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	int sum=0;
	for(int i=1; i<=n; i++){
		sum = sum +i;
		
	}
	cout<<"Sum is :"<<sum;
}

*/

/*  Fibbonacci series 
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a=0;
	int b=1;
	
	cout<<a<<" "<<b<<" ";
	for(int i=1; i<=n; i++){
		int next_fibbo = a+b;
		cout<<next_fibbo<<" ";
		a=b;
		b=next_fibbo;
	}
	
}

*/

/*  1 4 9 16 25 ......
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	for(int i=1; i<=n; i++){
		cout<<i*i<<" ";
	}
	}

*/













































