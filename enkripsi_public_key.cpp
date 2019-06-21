#include <iostream>
using namespace std;

int main()
{
   int i=0, x;
   char pk[100];

   cout << "Masukkan public key:\t";
   cin >> pk;

   cout << "1 = Encrypt public key.\n";
   cout << "2 = Decrypt public key.\n";
   cout << "\nPilih opsi:\n";
   cin >> x;

   //menggunakan switch case statements
   switch(x)
   {
      //encrypting public key
      case 1:
      kode algoritma di sini
         break;

      //decrypting public key
      case 2:
      kode algoritma di sini
         break;

      default:
         cout << "\nInput tidak valid !!!\n";
   }
   return 0;
}
