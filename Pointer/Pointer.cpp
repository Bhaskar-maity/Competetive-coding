#include <iostream>
using namespace std;


void update(int *a,int *b) {
    // Complete this function   
    int a1,b1; 
    a1=*a;
    b1=*b;
    *a=a1+b1;
    *b=(a1-b1)>0?(a1-b1):(b1-a1);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin>>a>>b;
    //scanf("%d %d", &a, &b);
    update(pa, pb);
    cout<<a<<endl<<b;
    //printf("%d\n%d", a, b);

    return 0;
}

