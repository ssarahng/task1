#include <iostream>

using namespace std;

int main() {
	
       int n=1;
    while (n<4){
        int j=2;
        j=j+n;
        n++;
        
        int i=10;
        while(i>4){
            i=i-j;
            j++;
            cout << i << " " ;

        }
    }



}

