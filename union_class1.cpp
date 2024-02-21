#include<iostream>
using namespace std;
struct student
{ 
	int age;       // 4 bytes 
	float salary;   // 4 bytes
};
 main()
 {
 	struct student s1[2];//arry of object 
 	int i;
 	for(i=0;i<2;i++)
	 {
	 cout<<"Enter the age :\t"<<endl;
 	cin>>s1[i].age;
 	cout<<"Enter the salary :\t"<<endl;
 	cin>>s1[i].salary;
 }
      for(i=0;i<2;i++)
      cout<<s1[i].age<<endl;
      cout<<s1[i].salary<<endl;
 }
