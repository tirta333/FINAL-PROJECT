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
       for(i; (i < 100 && pk[i] != '\0'); i++)
            pk[i] = pk[i] + 2; //kunci untuk enkripsi adalah 3 yang ditambahkan ke nilai ASCII

         cout << "\nEncrypted public key: " << pk << endl;
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
