#include <iostream>

using namespace std;

    bool isSubsequence(string s, string t) {
     int littleWordQue=0;

     for(int i = 0; i<t.size();i++){
         if(t[i]==s[littleWordQue]){
             littleWordQue++;
         }
     }

     if(littleWordQue==s.size()){
         return true;
     }
     else{
         return false;
     }
    }


int main()
{
  string testString1= "yasinbarankaplan";
  string testString2= "asdyasinbarankaplanisdsd";

   cout<< isSubsequence(testString1,testString2);

   string testString3="yas";
   string testString4="asdlysdal";

   cout<<isSubsequence(testString3,testString4);
}
