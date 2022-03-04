//
//  main.cpp
//  sort
//
//  Created by KAIBALYA SAHOO on 20/03/2021.
//

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;










int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(20);
    v.push_back(3);
    v.push_back(12);
    v.push_back(5);
    
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<",";
    }
    
    
/*####################################Sorting:#################################################################*/
    
    // using default comparison (operator <):
     //sort
std::sort (v.begin(), v.begin()+5);           //(12 32 45 71)26 80 53 33
   // std::sort (v.begin(), v.end()); same as upper
     
     std::cout << "myvector contains:";
     for (vector<int>::iterator it=v.begin(); it!=v.end(); ++it)
       std::cout << ' ' << *it;
     std::cout << '\n';
    
    
    //output->myvector contains: 32 71 12 45 26 33 53 80
    
    
 /***********************************************   stable_sort********************************************************************************************************************/
    
    double mydoubles[] = {3.14, 1.41, 2.72, 4.67, 1.73, 1.32, 1.62, 2.58};

    vector<double> myvector;

    myvector.assign(mydoubles,mydoubles+8);

    cout << "using default comparison:";
    stable_sort (myvector.begin(), myvector.end());
    for (vector<double>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    cout << ' ' << *it;
    cout << '\n';

    myvector.assign(mydoubles,mydoubles+8);

    cout << "using 'compare_as_ints' :";
    stable_sort (myvector.begin(), myvector.end());
    for (vector<double>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
      cout << ' ' << *it;
    cout << '\n';
    
    //output->using default comparison: 1.32 1.41 1.62 1.73 2.58 2.72 3.14 4.67
   // using 'compare_as_ints' : 1.41 1.73 1.32 1.62 2.72 2.58 3.14 4.67
    /*******************************partial_sort************************************************************************************************************************************/
    int myints[] = {9,8,7,6,5,4,3,2,1};
     vector<int> my2vector (myints, myints+9);

      // using default comparison (operator <):
  partial_sort (my2vector.begin(), my2vector.begin()+5, my2vector.end());

      // using function as comp
  partial_sort (my2vector.begin(), my2vector.begin()+5, my2vector.end());

      // print out content:
  cout << "myvector contains:";
      for (std::vector<int>::iterator it=my2vector.begin(); it!=my2vector.end(); ++it)
        std::cout << ' ' << *it;
      std::cout << '\n';
    
//output->myvector contains: 1 2 3 4 5 9 8 7 6
    /****************************************************************************************************************************************************************/
    int my1ints[] = {9,8,7,6,5,4,3,2,1};
    std::vector<int> my3vector (5);

    // using default comparison (operator <):
    std::partial_sort_copy (my1ints, myints+9, my3vector.begin(), my3vector.end());


   
    // print out content:
    std::cout << "myvector contains:";
    for (std::vector<int>::iterator it=my3vector.begin(); it!=my3vector.end(); ++it)
      std::cout << ' ' << *it;
    std::cout << '\n';

    
   //output->myvector contains: 1 2 3 4 5
    /****************************************************************************************************************************************************************/
    std::vector<int> my4vector;

      // set some values:
      for (int i=1; i<10; i++) my4vector.push_back(i);   // 1 2 3 4 5 6 7 8 9



      // using default comparison (operator <):
      std::nth_element (my4vector.begin(), my4vector.begin()+5, my4vector.end());

      

      // print out content:
      std::cout << "myvector contains:";
      for (std::vector<int>::iterator it=my4vector.begin(); it!=my4vector.end(); ++it)
        std::cout << ' ' << *it;
      std::cout << '\n';
    
    
    /****************************************************************************************************************************************************************/
    
    /*####################################Binary search#################################################################*/
    
    /*************************lower_bound**************upper_bound*************************************************************************************************************************/
    int my2ints[] = {10,20,30,30,20,10,10,20};
     std::vector<int> v2(my2ints,myints+8);           // 10 20 30 30 20 10 10 20

     std::sort (v2.begin(), v2.end());                // 10 10 10 20 20 20 30 30

     std::vector<int>::iterator low,up;
     low=std::lower_bound (v2.begin(), v2.end(), 20); //          ^
     up= std::upper_bound (v2.begin(), v2.end(), 20); //                   ^

     std::cout << "lower_bound at position " << (low- v2.begin()) << '\n';
     std::cout << "upper_bound at position " << (up - v2.begin()) << '\n';
    //output->lower_bound at position 0
    //upper_bound at position 3
     
    /******************************************************bounds.second**********************************************************************************************************/
    int my3ints[] = {10,20,30,30,20,10,10,20};
    std::vector<int> v3(my3ints,my3ints+8);                         // 10 20 30 30 20 10 10 20
    std::pair<std::vector<int>::iterator,std::vector<int>::iterator> bounds;

    // using default comparison:
    std::sort (v.begin(), v.end());                              // 10 10 10 20 20 20 30 30
    bounds=std::equal_range (v.begin(), v.end(), 20);            //          ^        ^



    std::cout << "bounds at positions " << (bounds.first - v3.begin());
    std::cout << " and " << (bounds.second - v3.begin()) << '\n';
    
    //output->bounds at positions 2 and 5
    
    /**********************************************************binary_search******************************************************************************************************/
    int my4ints[] = {1,2,3,4,5,4,3,2,1};
    std::vector<int> v4(my4ints,my4ints+9);                         // 1 2 3 4 5 4 3 2 1

    // using default comparison:
    std::sort (v4.begin(), v4.end());

    std::cout << "looking for a 3... ";
    if (std::binary_search (v.begin(), v.end(), 3))
      std::cout << "found!\n"; else std::cout << "not found.\n";



    std::cout << "looking for a 6... ";
    if (std::binary_search (v4.begin(), v4.end(), 6))
      std::cout << "found!\n"; else std::cout << "not found.\n";
    
    //output->looking for a 3... found!
   // looking for a 6... not found.
    
    /*####################################Merge #################################################################*/
    /**********************************************************merge******************************************************************************************************/
    int first[] = {5,10,15,20,25};
    int second[] = {50,40,30,20,10};
    std::vector<int> v5(10);

    std::sort (first,first+5);
    std::sort (second,second+5);
    std::merge (first,first+5,second,second+5,v.begin());

    std::cout << "The resulting vector contains:";
    for (std::vector<int>::iterator it=v5.begin(); it!=v5.end(); ++it)
      std::cout << ' ' << *it;
    std::cout << '\n';
//output->The resulting vector contains: 5 10 10 15 20 20 25 30 40 50
    /**********************************************************inplace_merge******************************************************************************************************/
    int first1[] = {5,10,15,20,25};
      int second1[] = {50,40,30,20,10};
      std::vector<int> v6(10);
      std::vector<int>::iterator it;

      std::sort (first1,first1+5);
      std::sort (second1,second1+5);

      it=std::copy (first1, first1+5, v6.begin());
         std::copy (second1,second1+5,it);

      std::inplace_merge (v6.begin(),v6.begin()+5,v6.end());

      std::cout << "The resulting vector contains:";
      for (it=v6.begin(); it!=v6.end(); ++it)
        std::cout << ' ' << *it;
      std::cout << '\n';
    //output->The resulting vector contains: 5 10 10 15 20 20 25 30 40 50
    /**************************************************************************************************************************************************************/
    
    int container[] = {5,10,15,20,25,30,35,40,45,50};
      int continent[] = {40,30,20,10};

      std::sort (container,container+10);
      std::sort (continent,continent+4);

      // using default comparison:
      if ( std::includes(container,container+10,continent,continent+4) )
        std::cout << "container includes continent!\n";
    //if the elements are in continent present in container

  //output->container includes continent!
    
    /****************************************************set_union **********************************************************************************************************/
    
    int first2[] = {5,10,15,20,25};
     int second2[] = {50,40,30,20,10};
     std::vector<int> v7(10);                      // 0  0  0  0  0  0  0  0  0  0
     std::vector<int>::iterator it4;

     std::sort (first2,first2+5);     //  5 10 15 20 25
     std::sort (second2,second2+5);   // 10 20 30 40 50

     it=std::set_union (first2, first2+5, second2, second2+5, v7.begin());
                                                  // 5 10 15 20 25 30 40 50  0  0
     v.resize(it-v7.begin());                      // 5 10 15 20 25 30 40 50

     std::cout << "The union has " << (v7.size()) << " elements:\n";
     for (it4=v7.begin(); it4!=v7.end(); ++it4)
       std::cout << ' ' << *it4;
     std::cout << '\n';
    
    
    
    /****************************************************set_intersection **********************************************************************************************************/
    
    int first3[] = {5,10,15,20,25};
    int second3[] = {50,40,30,20,10};
    std::vector<int> v8(10);                      // 0  0  0  0  0  0  0  0  0  0
    std::vector<int>::iterator it5;

    std::sort (first3,first3+5);     //  5 10 15 20 25
    std::sort (second3,second3+5);   // 10 20 30 40 50

    it=std::set_intersection (first3, first3+5, second3, second3+5, v.begin());
                                                 // 10 20 0  0  0  0  0  0  0  0
    v.resize(it5-v.begin());                      // 10 20

    std::cout << "The intersection has " << (v.size()) << " elements:\n";
    for (it5=v.begin(); it5!=v.end(); ++it)
      std::cout << ' ' << *it;
    std::cout << '\n';
   // output->The intersection has 2 elements:
    //10 20
    

    /****************************************************set_intersection **********************************************************************************************************/
    int first4[] = {5,10,15,20,25};
    int second4[] = {50,40,30,20,10};
    std::vector<int> v9(10);                      // 0  0  0  0  0  0  0  0  0  0
    std::vector<int>::iterator it6;

    std::sort (first4,first4+5);     //  5 10 15 20 25
    std::sort (second4,second4+5);   // 10 20 30 40 50

    it=std::set_difference (first4, first4+5, second4, second4+5, v9.begin());
                                                 //  5 15 25  0  0  0  0  0  0  0
    v.resize(it6-v9.begin());                      //  5 15 25

    std::cout << "The difference has " << (v9.size()) << " elements:\n";
    for (it6=v9.begin(); it6!=v9.end(); ++it6)
      std::cout << ' ' << *it;
    std::cout << '\n';
    //output->The difference has 3 elements:
   // 5 15 25
    /**********************************************set_symmetric_difference **********************************************************************************************************/
    int first5[] = {5,10,15,20,25};
    int second5[] = {50,40,30,20,10};
    std::vector<int> v10(10);                      // 0  0  0  0  0  0  0  0  0  0
    std::vector<int>::iterator it7;

    std::sort (first5,first5+5);     //  5 10 15 20 25
    std::sort (second5,second5+5);   // 10 20 30 40 50

    it=std::set_symmetric_difference (first5, first5+5, second5, second5+5, v10.begin());
                                                 //  5 15 25 30 40 50  0  0  0  0
    v10.resize(it-v10.begin());                      //  5 15 25 30 40 50

    std::cout << "The symmetric difference has " << (v10.size()) << " elements:\n";
    for (it7=v10.begin(); it7!=v10.end(); ++it7)
      std::cout << ' ' << *it7;
    std::cout << '\n';
//output->The symmetric difference has 6 elements:
   // 5 15 25 30 40 50
    /****************************************************s **********************************************************************************************************/
    
    
    
    
    
}
