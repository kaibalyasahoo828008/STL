

//  Created by KAIBALYA SAHOO on 20/03/2021.
//

#include <iostream>
#include<deque>
#include <vector>
#include <array>
#include <list>
using namespace std;




int main()
{
    // constructors used in the same order as described above:
     list<int> first;                                // empty list of ints
     list<int> second (4,100);                       // four ints with value 100
     list<int> third (second.begin(),second.end());  // iterating through second
     list<int> fourth (third);                       // a copy of 
     // the iterator constructor can also be used to construct from arrays:
     int myints[] = {16,2,77,29};
     list<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

     std::cout << "The contents of fifth are: ";
     for (list<int>::iterator it = fifth.begin(); it != fifth.end(); it++)
       cout << *it << ' ';

     cout << '\n';

/* *********************************************************************************************/
 /* modifier*/
    
    

      first.assign (7,100);                      // 7 ints with value 100

      second.assign (first.begin(),first.end()); // a copy of first

      int myints1[]={1776,7,4};
      first.assign (myints1,myints1+3);            // assigning from array

      std::cout << "Size of first: " << int (first.size()) << '\n';
      std::cout << "Size of second: " << int (second.size()) << '\n';
   
    /********************************************************************************************************************************************************************/
        
    list< pair<int,char> > mylist;

      mylist.emplace_front(10,'a');
      mylist.emplace_front(20,'b');
      mylist.emplace_front(30,'c');

      cout << "mylist contains:";
      for (auto& x: mylist)
        cout << " (" << x.first << "," << x.second << ")";

      cout << std::endl;
    
    //output->mylist contains: (30,c) (20,b) (10,a)
/********************************************************************************************************************************************************************/
    
    list<int> mylist2 (2,100);         // two ints with a value of 100
     mylist2.push_front (200);
     mylist2.push_front (300);

     cout << "mylist2 contains:";
     for (list<int>::iterator it=mylist2.begin(); it!=mylist2.end(); ++it)
       std::cout << ' ' << *it;

     std::cout << '\n';
    
    //output->mylist contains: 300 200 100 100
    
/********************************************************************************************************************************************************************/
        
    std::list<int> mylist3;
      mylist3.push_back (100);
      mylist3.push_back (200);
      mylist3.push_back (300);

      std::cout << "Popping out the elements in mylist:";
      while (!mylist3.empty())
      {
        std::cout << ' ' << mylist3.front();
        mylist.pop_front();
      }

      std::cout << "\nFinal size of mylist is " << mylist.size() << '\n';
//output->Popping out the elements in mylist3: 100 200 300
   // Final size of mylist is 0
     
    
/********************************************************************************************************************************************************************/
   list< std::pair<int,char> > mylist4;

     mylist4.emplace_back(10,'a');
     mylist4.emplace_back(20,'b');
     mylist4.emplace_back(30,'c');

     cout << "mylist contains:";
     for (auto& x: mylist4)
       std::cout << " (" << x.first << "," << x.second << ")";

     std::cout << endl;
     return 0;
    //output->mylist contains: (10,a) (20,b) (30,c)
    /********************************************************************************************************************************************************************/
    list< pair<int,char> > mylist5;

    mylist5.emplace_back(10,'a');
    mylist5.emplace_back(20,'b');
    mylist5.emplace_back(30,'c');

   cout << "mylist contains:";
    for (auto& x: mylist5)
      std::cout << " (" << x.first << "," << x.second << ")";

    std::cout << endl;
    
    //output->mylist contains: (10,a) (20,b) (30,c)
    /***************************************************************************************************************************************************************/
    list<int> mylist6;
    list<int>::iterator it;

      // set some initial values:
      for (int i=1; i<=5; ++i) mylist6.push_back(i); // 1 2 3 4 5

      it = mylist6.begin();
      ++it;       // it points now to number 2           ^

      mylist6.insert (it,10);                        // 1 10 2 3 4 5

      // "it" still points to number 2                      ^
      mylist6.insert(it,2,20);                      // 1 10 20 20 2 3 4 5

      --it;       // it points now to the second 20            ^

      std::vector<int> myvector (2,30);
      mylist6.insert (it,myvector.begin(),myvector.end());
                                                    // 1 10 20 30 30 20 2 3 4 5
                                                    //               ^
      std::cout << "mylist contains:";
      for (it=mylist6.begin(); it!=mylist6.end(); ++it)
        std::cout << ' ' << *it;
      std::cout << '\n';

      return 0;
    //output->mylist contains: 1 10 20 30 30 20 2 3 4 5
    /***************************************************************************************************************************************************************/
    
    std::list<int> mylist7;
     std::list<int>::iterator it1,it2;

     // set some values:
     for (int i=1; i<10; ++i) mylist7.push_back(i*10);

                                 // 10 20 30 40 50 60 70 80 90
     it1 = it2 = mylist7.begin(); // ^^
     advance (it2,6);            // ^                 ^
     ++it1;                      //    ^              ^

     it1 = mylist7.erase (it1);   // 10 30 40 50 60 70 80 90
                                 //    ^           ^

     it2 = mylist7.erase (it2);   // 10 30 40 50 60 80 90
                                 //    ^           ^

     ++it1;                      //       ^        ^
     --it2;                      //       ^     ^

     mylist7.erase (it1,it2);     // 10 30 60 80 90
                                 //        ^

     std::cout << "mylist contains:";
     for (it1=mylist7.begin(); it1!=mylist7.end(); ++it1)
       std::cout << ' ' << *it1;
     std::cout << '\n';
    
    
    //output->mylist contains: 10 30 60 80 90
    /***************************************************************************************************************************************************************/
    
    std::list<int> first1 (3,100);   // three ints with a value of 100
      std::list<int> second1 (5,200);  // five ints with a value of 200

      first1.swap(second1);

      std::cout << "first contains:";
      for (std::list<int>::iterator it=first1.begin(); it!=first1.end(); it++)
        std::cout << ' ' << *it;
      std::cout << '\n';

      std::cout << "second contains:";
      for (std::list<int>::iterator it=second1.begin(); it!=second1.end(); it++)
        std::cout << ' ' << *it;
      std::cout << '\n';
    
    //output->first contains: 200 200 200 200 200
   // second contains: 100 100 100
    /***************************************************************************************************************************************************************/
    std::list<int> mylist8;

      // set some initial content:
      for (int i=1; i<10; ++i) mylist8.push_back(i);

      mylist8.resize(5);
      mylist8.resize(8,100);
      mylist8.resize(12);

      std::cout << "mylist contains:";
      for (std::list<int>::iterator it=mylist8.begin(); it!=mylist8.end(); ++it)
        std::cout << ' ' << *it;

      std::cout << '\n';
    //output->mylist contains: 1 2 3 4 5 100 100 100 0 0 0 0
    /***************************************************************************************************************************************************************/
    std::list<int> mylist9;

     // set some initial content:
     for (int i=1; i<10; ++i) mylist9.push_back(i);

     mylist9.resize(5);//mylist contains: 1 2 3 4 5
     mylist9.resize(8,100);//mylist contains: 1 2 3 4 5 100 100 100
     mylist9.resize(12);//output->mylist contains: 1 2 3 4 5 100 100 100 0 0 0 0

     std::cout << "mylist contains:";
     for (std::list<int>::iterator it=mylist9.begin(); it!=mylist9.end(); ++it)
       std::cout << ' ' << *it;

     std::cout << '\n';
    //output->mylist contains: 1 2 3 4 5 100 100 100 0 0 0 0
    /***************************************************************************************************************************************************************/
    std::list<int> mylist10;
      std::list<int>::iterator it5;

      mylist10.push_back (100);
      mylist10.push_back (200);
      mylist10.push_back (300);

      std::cout << "mylist contains:";
      for (it5=mylist10.begin(); it5!=mylist10.end(); ++it5)
        std::cout << ' ' << *it;
      std::cout << '\n';

      mylist10.clear();
      mylist10.push_back (1101);
      mylist10.push_back (2202);

      std::cout << "mylist contains:";
      for (it=mylist10.begin(); it!=mylist10.end(); ++it)
        std::cout << ' ' << *it;
      std::cout << '\n';
    //mylist contains: 100 200 300
   // mylist contains: 1101 2202
    /***************************************************************************************************************************************************************/
    std::list< std::pair<int,char> > mylist11;

      mylist11.emplace ( mylist11.begin(), 100, 'x' );
      mylist11.emplace ( mylist11.begin(), 200, 'y' );

      std::cout << "mylist contains:";
      for (auto& x: mylist11)
        std::cout << " (" << x.first << "," << x.second << ")";

      std::cout << '\n';
    
    //output->mylist contains: (200,y) (100,x)
    /***************************************************************************************************************************************************************/
    
    
    
/* ###############################ALGORITHIM############################################################*/
    list<int> mylist12, mylist13;
    list<int>::iterator itk;
    // set some initial values:
    for(int i=1; i<=4; i++)
       mylist12.push_back(i);      // mylist1: 1 2 3 4

    for (int i=1; i<=3; ++i)
       mylist13.push_back(i*10);   // mylist2: 10 20 30

    it = mylist12.begin();
    ++it2;                         // points to 2

    mylist12.splice (it2, mylist2); // mylist1: 1 10 20 30 2 3 4
                                  // mylist2 (empty)
                                  // "it" still points to 2 (the 5th element)
                                            
    mylist12.splice (mylist12.begin(),mylist12, it);
                                  // mylist1: 1 10 20 30 3 4
                                  // mylist2: 2
                                  // "it" is now invalid.
    it = mylist12.begin();
    std::advance(it,3);           // "it" points now to 30

    mylist12.splice ( mylist12.begin(), mylist12, it, mylist12.end());
                                  // mylist1: 30 3 4 1 10 20

    std::cout << "mylist1 contains:";
    for (itk=mylist12.begin(); itk!=mylist12.end(); ++itk)
      std::cout << ' ' << *it;
    std::cout << '\n';

    std::cout << "mylist2 contains:";
    for (itk=mylist2.begin(); itk!=mylist2.end(); ++itk)
      std::cout << ' ' << *it;
    std::cout << '\n';
    
    
    //OUTPUT->mylist1 contains: 30 3 4 1 10 20
    //mylist2 contains: 2
     
    /***************************************************************************************************************************************************************/
    
    
    
    
    
    
}

