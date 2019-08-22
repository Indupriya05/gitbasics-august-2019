#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? b;
   ?? c;
   ?? a;

   raptor_prompt_variable_zzyz ="Enter the value:";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> a;
   raptor_prompt_variable_zzyz ="Enter the value:";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> b;
   c ="true";
   if (a>0 && b<0 || a<0 && b>0 && c==true)
   {
      cout << "pos_neg("+a+","+b+","+c+")===>true" << endl;   }
   else
   {
      cout << false << endl;   }

   return 0;
}
