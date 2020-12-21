#include <iostream>
using namespace std;
/* Video link : https://www.youtube.com/watch?v=EEb6JP3NXBI */
void multiply(long long F[2][2], long long M[2][2]) {
   long long a = F[0][0] * M[0][0] + F[0][1] * M[1][0];
   long long b= F[0][0] * M[0][1] + F[0][1] * M[1][1];
   long long c = F[1][0] * M[0][0] + F[1][1] * M[1][0];
   long long d = F[1][0] * M[0][1] + F[1][1] * M[1][1];
   F[0][0] = a;
   F[0][1] = b;
   F[1][0] = c;
   F[1][1] = d;
}
void power(long long F[2][2], int n) {
   if (n == 0 || n == 1)
      return;
   long long M[2][2] = {{1,1},{1,0}};
   power(F, n / 2);
   multiply(F, F);
   if (n % 2 != 0)
      multiply(F, M);
}
int fibonacci_matrix(int n) {
   long long F[2][2] = {{1,1},{1,0}};
   if (n == 0)
      return 0;
   power(F, n - 1);
   return F[0][0];
}
int main() {
   int n;
   while (1) {
      cout<<"Enter the integer n to find nth fibonacci no. (enter 0 to exit):";
      cin>>n;
      if (n == 0)
         break;
      cout<<fibonacci_matrix(n)<<endl;
   }
   return 0;
}