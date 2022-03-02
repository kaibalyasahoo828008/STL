

//  Created by KAIBALYA SAHOO on 20/03/2021.
//

#include <iostream>
#include<vector>
using namespace std;




int main()
{
    vector<int>v;
    vector<int>a(5,1);//{1,1,1,1,1,}
    vector<int>last(a);//to copy all elements from vector "a" to vector "last"
    vector<string>a1{"kaibalya"," unmesh","sujay","himanshu"};
    vector<string>b(a1.begin(),a1.end());//to copy all string from a to b
    
    
    
    
    
    
/********************************************************************************************************************************************************/
    v.push_back(1);//insert 1 at the back of v
    cout<<"capacity->"<<v.capacity()<<endl;
    v.push_back(2);//insert 2 at the back of v
    cout<<"capacity->"<<v.capacity()<<endl;
    v.push_back(4);//insert 4 at the back of v
    cout<<"capacity->"<<v.capacity()<<endl;
    
    for(vector<int>::iterator i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<endl;//output->1 2 4
    }
    
    
/********************************************************************************************************************************************************/
    vector<int>::iterator i=v.begin();
    v.insert(i, 2,100);//insertion two times before v.begin;
    
    v.erase(it);   //removes first element from the vector
      
    v.erase(v.begin(), v.end() - 2 );
      /*removes all the elements except last two */
      
    for( vector<int>::iterator it = v.begin(); it != v.end(); it++);
      {
          cout << *it <<" ";   // for printing the vector
      }
    
    
    
/********************************************************************************************************************************************************/
    
    
    
    
    
    
/********************************************************************************************************************************************************/
    cout<<"Element at 2nd index"<<v.at(2)<<endl;
    cout<<"fornt"<<v.front()<<endl;
    cout<<"back"<<v.back()<<endl;
    
/*************************************************************************************************************************************************/
    
    cout<<"before pop"<<endl;
    for(int i:v)
    {
        cout<<i<<""<<endl;
    }
   
    cout<<endl;
    
    v.pop_back();
    cout<<"after pop"<<endl;
   for(int i:v)
   {
       cout<<i<<"";
       
   }
    
    
    
 /* when we use v.clear() it reduces the size but it can not reduces the capacity  of vector*/
    
/********************************************************************************************************************************************************/
    cout<<"before clear size"<<v.size()<<endl;//->2
    v.clear();
    cout<<"after clear size"<<v.size()<<endl;//->0
    
    
    
    
    
}

