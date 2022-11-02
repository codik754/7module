//Про assert и try
#include <iostream>
#include <assert.h>

using namespace std;

//Это пример контейнера
class IntegerArray
{
private:
    int m_length{};
    int* m_data{};

};
int main(){


  /* assert(false);
   cout << "1" endl;*/




  /* assert(true);
   cout << "2" << endl;*/



  /* int a = -1;
   assert(a >= 0);// -1 < 0 будет false
   cout << "3" << endl;*/



  /* int a = 4;
   assert(a >= 0);
   cout << "4" << endl;*/

   //Теперь как по условию в третьем и четвертом блоке (a >= 0) написать try
   int a = -1;//попробуй запустить программу с этим значением и со значением меньше 0(a=-1 напиши)
   try{
      if(a < 0){
         throw "Exception text";
      }
   }
   catch(const char *ex){
      cout << ex << endl;
   }



   return 0;
}
