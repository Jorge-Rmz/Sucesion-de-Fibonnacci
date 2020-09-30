#include<iostream>
using namespace std;

int serie_fibonacci(int x);
int main(){
	int numDeSucecion, x;
	do{
	 	x = 0;
		cout<<"Inserte el numero de elementos que desea de la serie de fibonacci"<<endl;
		cin>>numDeSucecion;
		if(numDeSucecion < 0){
			cout<<"Inserte un numero positivo."<<endl;
			x = 1;
		}else{	
			for(int i = 0; i <=numDeSucecion; i++){
				if(i == numDeSucecion){
					cout<<serie_fibonacci(i);
				}else{
					cout<<serie_fibonacci(i)<< ", "; 
				}
			}		
		}
	}while(x == 1);
}

int serie_fibonacci(int n){	
	if(n == 0){
		return 0;
	}
	if(n == 1 ){
        return 1;
	}
	if(n > 1){
        return serie_fibonacci(n - 1) + serie_fibonacci(n - 2);
    }
}
