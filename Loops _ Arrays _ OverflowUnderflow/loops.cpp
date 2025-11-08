// #include<iostream>

// using namespace std;

// int main()
// {
// int i;
// for (i = 0, i++; i <= 20; i = 0, i += 3){
//  cout << i;
// }
   


// return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int i;
//     for (i = 0; i <= 2; i = 0, i += 3)
//         cout << i;
//     return 0;
// }





// for (i = 0, i = 2; i <= 2; i += 3)
//     cout << i;


// for (int i = 0; i < 5; )
//     cout << i++;

// #include <iostream>
// using namespace std;
// int main() {
// int i = 0;
// for (; i < 3; )   //1  2    3
//     cout << ++i;
// return 0;   
// }



// #include <iostream>
// using namespace std;
//  int main() {
// for (int i = 10; i > 0; i -= 3)
//     cout << i << " ";
// return 0;
// }

// #include <iostream>
// using namespace std;
//  int main() {
// for (int i = 0, j = 5; i < j; i++, j--)
//     cout << i + j << " ";


//     return 0;
// 
//}

// #include <iostream>
// using namespace std;
//  int main() {
// int i;
// for (i = 0, i++; i < 5; i += 2)
//     cout << i;


//     return 0;
// }





// #include <iostream>
// using namespace std;
//  int main() {
// for (int i = 0, j = 10; i < j; i += 2, j -= 3)
//     cout << i << "," << j << " | ";
//  }


// #include <iostream>
// using namespace std;
//  int main() {
//     for (int i = 0; i < 5, i != 3; i++)
//     cout << i;


//     return 0;
// }

// ?????????????????????????????????????????????????????????????????????????
// #include <iostream>
// using namespace std;
//     int main() {
//       int i;
// for (i = 0; i = 3; i++)
//     cout << i;
//     return 0;
//     }



// #include <iostream>
// using namespace std;

// int main() {
//     int i;
//     for (i = 0; i = 3; i <= 2) 
//         cout << i;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int i;
// for (i = 0; i = 2; (i <= 2), (i += 3))
// cout << i;
//     return 0;
// }   



// #include <iostream>
// using namespace std;
// int main() {
//     int i;
// for (i = 0; i = 0; (i <= 2), (i += 3))
// cout << i;
//     return 0;
// }  

// #include <iostream>
// using namespace std;
// int main() {
//     int i;
// for (i = 0;  (i <= 2), (i += 3))
// cout << i;
//     return 0;
// }  





// #include <iostream>
// using namespace std;
// int main() {
//     int i;
//     for (i = 0; (i <= 2), (i += 3))
//         cout << i;
//     return 0;
// }

// ???????????????????????????????????ERRRRORORORORORO??????????????????
// #include <iostream>
// using namespace std;
// int main() {
//     int i;
//     for (i = 0; (i <= 2), (i += 3);)
//         cout << i;
//     return 0;
// }



// int x = (5, 10);
// cout << x;


// int a = 2;
// int b = (a += 3, a * 2);
// cout << b;


// ⚠️ But be careful:

// In the condition section, like this:

// for (i = 0; (i <= 2), (i += 3); )


// → The comma operator makes the loop depend only on the second part (i += 3),
// so i <= 2 becomes useless (just evaluated, not checked).
// That’s what caused your infinite loop earlier.




// #include <iostream>
// using namespace std;    int main() {
// int i = 0;
// for (; (i <= 5), (i += 2), (i < 10); )
//     cout << i << " ";
// }

// #include<iostream>
// using namespace std;
// int main(){
// for (int i = 0; i == 0; i++)

//     cout << "FAST";
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i = 0;
//     for ( ; i < 3; )
//     cout << ++i;

//     return 0;
// }


// #include <iostream>
// using namespace std;
//  int main() {
//     int i = 5;
//     for ( ; ; )
//     cout << i++;


//     return 0;
//  }



// #include <iostream>
// using namespace std;
//  int main() {
//     int i = 5;
//     for (i=0 ;i<=5 ; )
//     cout << i++;


//     return 0;
//  }


// #include <iostream>
// using namespace std;
// int main() {
//  for (int i = 1; i <= 5; )
//     cout << i++;
//     return 0;
// }


// #include <iostream>
// using namespace std;    
// int main() {
// for (int i = 0; i <= 10; i = 0, i += 4)
//     cout << i;

//     return 0;
// }

// #include <iostream>
// using namespace std;
//     int main() {

// for (int i = 0; i <= 10; i = 0, i += 4)
//     cout << i;


//         return 0;
//     }


// #include <iostream>
// using namespace std;
// int main() {
// for (int i = 0; i <= 10; i += 2, i = 0)
//     cout << i;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
// for (int i = 0; i++; i <= 5 )
//     cout << i;


//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
// for (int i = 0; i++, i <= 5; )
//     cout << i;


//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {    
// for (int i = 1; i <= 3; i++) {
//     for (int j = i; j <= 3; j++)
//         cout << i << j << " ";
// }

// }

// #include <iostream>
// using namespace std;
// int main() {

// int i = 0;
// for (i = i + 1; i <= 3; i = 0, i += 2)
//     cout << i;

// }


//     #include<iostream>
//     using namespace std;
//     int main()
// {
// int i = 2, j = 2;
// while (i + 1 ? --i : j++)
// {
// cout << " " << i;
// }
// }








/////////////////////////Sir Adil Dry Runs//////////////////////
// #include <iostream>
// using namespace std;
// int main() {
// int i ;



// for (i = 0, i++; i <= 2; i = 0, i += 3)
// cout << i;
// return 0;
// }




// #include <iostream>
// using namespace std;
// int main()
// {
// int choice = 5;
// switch (choice) {
// default:
// cout << "\nI am in Default";
// case 1:
// cout << "\nI am in case 1";
// break;
// case 2:
// cout << "\nI am in case 2";
// break;
// case 3:
// cout << "\nI am in case 3";
// break;
// }
// return 0;
// }


// #include <iostream>
// using namespace std;

// int main()
// {
// float num1 = 1.1;
// double num2 = 1.1;
// if (num1 == num2)
// cout << "Stanford";
// else
// cout << "Islamabad";
// return 0;
// }


// #include <iostream>
// using namespace std;

// int main()
// {
// float num1 = 1.1;
// float num2 = 1.1;
// if (num1 == num2)
// cout << "Stanford";
// else
// cout << "Islamabad";
// return 0;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
 
// int y = 0;
// switch (y) {
// break;
// case 0: y = y + 5;
// case 1: y = y / 2;
// case 2: y = y * 3;
// case 3: y = y + 10;
// break;
// default: y = y % 3;
// }
// cout << y << endl;
// return 0;
// }





// #include <iostream>
// using namespace std; 
// int main()
// {
// int i = 5, j = 3, k = 4;
// if (i % j + i < k) {
// cout << (k > i < j);
// }
// else {
// cout << (i < j == j < k);
// }
// return 0;
// }




//  #include <iostream>
//     using namespace std;
//     int main()
//     {
        
// int i = 3, j = 3, k = 3;
// if (--i - 7 && j++ < ++k)
// cout << ++i;
// else
// cout << i << j << k;
// return 0;

//         return 0;
//     }


// #include <iostream>
// using namespace std; 
// int main() 
// {
// int n = 5;
// while (n >= 0)
// {
// cout << --n * n++ << endl;
// n--;
// }
// while (n > 0)
// cout << (n /= 2) << endl;
// return 0;   }



// #include <iostream>
// using namespace std;         
// int main()
// {
// int i, j, m, answer;
// m = 0;
// j = 3;
// while (m < 3) {
// for (i = 0; i < j; i++) {
// answer = i * m;
// cout << answer;
// }
// m = m + 1;
// cout << endl;
// }
// return 0;
// }


// #include <iostream>
// using namespace std;     
// int main()
// {
// int i = 2, j = 2;
// while (i + 1 ? --i : j++)
// cout << " " << i;

// }



// #include <iostream>
// using namespace std;
// int main()
// {
// int y = 10;
// if (y++ > 9 && y++ != 11 && y++ > 11)
// cout << y;
// else
// cout << y;

// }




//  #include <iostream>
// using namespace std;
// int main()
// {
// unsigned char i = 0;
// for (; i >= 0; i++);
// cout << static_cast<int>(i) <<"\n";
// }


// #include <iostream>
// using namespace std;

// int main() {
//     unsigned char i = 0;
//     do {
//         cout << i<< " ";
//         i++;
//     } while (i != 0);  // stops when overflow wraps back to 0
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i = 0; i <= 5; i = i++)
//         cout << i;
// }



// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i = 0; i <= 5;  i++)
//         cout << i;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
// unsigned int i = 1;
// while (i-- >= 0)
// cout << i;}



// #include <iostream>
// using namespace std;
// int main()
// {
// int i = 0;
// for (i = 0; i < 30; i++)
// {
// switch (i)
// {
// case 0:
// i += 5;
// case 1:
// i += 2;
// case 5:
// i += 5;
// default:
// i += 4;
// break;
// }
// cout << i << " ";
// }
// }



// #include <iostream>
// using namespace std;
// int main()
// {
// unsigned char i = 259;

// cout << static_cast<int>(i) <<"\n";
// }


// #include<iostream>
// using namespace std;
// int main(){
//     char c = 127; // max value
// c = c + 1;    // overflow
// cout <<c; // Output: -128

//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     unsigned short int a=65536;
//     a=a+1;
//     cout<<a;

//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
// unsigned char i = 0;
// for (; i<= 5; i++);
// cout << static_cast<int>(i) <<"\n";
// }


// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     {
// int n = 6, x = 2, i = 0;
// while (i <= n)
// {
// if (i % 2 == 1)
// x = x + pow(2, i) * i;
// i++;
// cout << x << "-";
// }
// return 0;
// }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main() {
// int i = 0, x = 0;
// do
// {
// if (i % 5 == 0)
// {
// cout << x;
// x++;
// }
// ++i;
// } while (i < 10);
// cout << x;
// return 0;
// }


// #include<iostream>
// using namespace std;
// int main() {
// int K = 5;
// int I = -2;
// while (I <= K) {
// I = I + 2; --K;
// cout << (I + K) << endl;
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
// char i = 0;
// for (; i <= 5; i++, cout << int(i)){
//     cout << int(i);
// i++;
// }


// return 0;
// }


// #include<iostream>
// using namespace std;

// int main() {
//     char i = 0;
//     for (; i=0,++i ; cout << int(i)) { 
//         cout << int(i);
//         i++;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int count = 0;
// for (;;) {
// if (count == 10)
// break;
// cout << ++count;
// }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int count;
// for (count = 0; count < 10; ++count) {
// cout << "#";
// if (count > 6)
// continue;
// cout << count;
// }
//     return 0;
// }


#include<iostream>
using namespace std;
int main() {
int loopvar = 5;
while (cout << "Hello " && loopvar--);
return 0;
}