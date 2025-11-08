// #include<iostream>
// using namespace std;
// int main(){
//     int x[5]={10,20,30,40,50};
//     cout<<x[2];
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x[5]={10,20,30,40,50};
//     cout<<x[5];
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int x[]={10,20,30,40,50};
//     cout<<x[4];
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     [x]={10,20,30,40,50};   // wrong syntax
//     cout<<x[5];
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x=5;
//     int a[x]={10,20,30,40,50};
//     cout<<x[5];                 // out of bound
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int x=5;
//     int a[x]={10,20,30,40,50,60};   // extra element will be ignored
//     cout<<x;                 // print size of array
//     return 0;
// }


// #include<iostream>
// // using namespace std;
// // int main(){
// //     int x=5;
// //     int a[x+1]={10,20,30,40,50,60};     // correct way to add extra element
// //     cout<<a[5];                 // print 60
// //     return 0;
// // }


// #include<iostream>
// using namespace std;
// int main(){
//     int x=5;
//     int a[x];
//     a[x]={1,2,3,4,5} ;              // wrong syntax
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int x=5;
//     int a[x]= ; // wrong syntax
//     cout<<x[5];                 // out of bound
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int x=5;
//     int a[x]= ; // wrong syntax
//     cout<<[5];                 // out of bound
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int x=5;
    int a[x]= ; // wrong syntax
    cout<<[5];                 // out of bound
    return 0;
}