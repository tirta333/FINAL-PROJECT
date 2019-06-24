
#include <iostream>
using namespace std;

int main()
{
   int i=0, x;
   char t[100];

   cout << "Masukkan text:\t";
   cin >> t;

   cout << "1 = Encrypt text.\n";
   cout << "2 = Decrypt text.\n";
   cout << "\nPilih opsi:\n";
   cin >> x;

   //menggunakan switch case statements
   switch(x)
   {
      //encrypting text
      case 1:
         for(i; (i < 100 && t[i] != '\0'); i++)
            t[i] = t[i] + 2; //kunci untuk enkripsi adalah 3 yang ditambahkan ke nilai ASCII

         cout << "\nEncrypted text: " << t << endl;
         break;

      //decrypting text
      case 2:
         for(i; (i < 100 && t[i] != '\0'); i++)
         t[i] = t[i] - 2; //kunci untuk enkripsi adalah 3 yang dikurangi dengan nilai ASCII

      cout << "\nDecrypted text: " << t << endl;
      break;

      default:
         cout << "\nInput tidak valid !!!\n";
   }
   return 0;
}
