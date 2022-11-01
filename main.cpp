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


   assert(false);
   cout << endl;
*/


/*
   //Это второй блок.Расскоментируй только его.
   assert(true);
   cout << "Этот текст выведится, потому что в assert true" << endl;
*/

/*
   //Это третий блок. Расскоментируй только его
   int a = -1;
   assert(a >= 0);// -1 < 0 будет false
   cout << "Этот текст не выведится, потому что в assert a = -1" << endl;
*/
/*
   //Это четвертый  блок. Расскоментируй только его
   int a = 4;
   assert(a >= 0);//4 >= 0 значит будет true
   cout << "Этот текст выведится, потому что в assert a = 4" << endl;
*/
/*
   //Это пятый блок. Расскоментируй только его
   //Теперь как по условию в третьем и четвертом блоке (a >= 0) написать try
   int a = 1;//попробуй запустить программу с этим значением и со значением меньше 0(a=-1 напиши)
   try{
      if(a < 0){
         throw "Exception text";
      }
   }
   catch(const char *ex){
      cout << ex << endl;
   }
*/


   return 0;
}
