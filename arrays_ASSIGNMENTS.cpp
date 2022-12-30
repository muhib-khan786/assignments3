//MUHIB KHAN
//BSCS(D)
//ASSIGNMENT 4
#include <iostream>
using namespace std;
int main(){
int sum=0;
int x[10];
for(int i=0;i<=9;i++){
cin>>x[i];
}

for(int i=0;i<=9;i++){
if(i==3){
	continue;
}
else if(i==5){
	continue;
}

sum=sum+x[i];
}
cout<<"Sum of no Without Index 3 and 5="<<sum;

	return 0;
}
