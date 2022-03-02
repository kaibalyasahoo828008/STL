

//  Created by KAIBALYA SAHOO on 20/03/2021.
//

#include <iostream>
#include<deque>
#include <vector>
#include <array>
using namespace std;




int main()
{
    deque<int>v;
    deque<int>a(5,1);//{1,1,1,1,1,}
    deque<int>last(a);//to copy all elements from vector "a" to vector "last"
    deque<string>a1{"kaibalya"," unmesh","sujay","himanshu"};
    deque<string>b(a1.begin(),a1.end());//to copy all string from a deque
    
    
    
    
/********************************************************************************************************************************************************/
    v.push_back(1);//insert 1 at the back of v
    cout<<"capacity->"<<v.size()<<endl;
    v.push_back(2);//insersizehe back of v
    cout<<"capacity->"<<v.size()<<endl;
    v.push_back(4);//insersizehe back of v
    cout<<"capacity->"<<v.size()<<endl;
    for(deque<int>::iterator i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<endl;//output->1 2 4
    }
    
    v.push_front(5);
    
/********************************************************************************************************************************************************/
    deque<int>::iterator it=v.begin();
    v.insert(it, 2,100);//insertion two times before v.begin;
    
    v.erase(it);   //removes first element from the vector
      
    v.erase(v.begin(), v.end() - 2 );
      /*removes all the elements except last two */
      
    for( deque<int>::iterator it = v.begin(); it != v.end(); it++);
      {
          cout << *it <<" ";   // for printing the vector
      }
    
    
    
/********************************************************************************************************************************************************/
 /* important
  insert() method has three variations :

  insert(iterator i, element e) : Inserts element e at the position pointed by iterator i in the deque.
  insert(iterator i, int count, element e) : Inserts element e, count number of times from the position pointed by iterator i.
  insert(iterator i, iterator first, iterator last) : Inserts the element in the range [first,last] at the position pointed by iterator i in deque./*/
    
    


    int a5[] = { 1,5,8,9,3 };
    deque<int> dq(a5, a5+4);
    /* creates s deque with elements 1,5,8,9,3  */
    
    
    dq.push_back(10);
    /* now dq is : 1,5,8,9,3,10 */
    
    dq.push_front(20);
    /* now dq is : 20,1,5,8,9,3,10  */
    
    deque<int>::iterator i;
    
    i=dq.begin()+2;
    /* i points to 3rd element in dq */
    
    dq.insert(i,15);
    /* now dq 20,1,15,5,8,9,3,10  */
    
    int a2[]={7,7,7,7};
    
    dq.insert(dq.begin() , a2 , a2+4 );
    /* now dq is 7,7,7,7,20,1,15,5,8,9,3,10  */

    
    
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

