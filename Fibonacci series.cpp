# include<iostream>
using namespace std;
 
  int main()
  {
      int n1=0,n2=1,n3,n,i;
      cout << "enter number of steps: " << endl;
      cin >> n;
      cout<<n1<<n2;
      
      for(i=2;i<=n;i++)
       {
          
          n3=n1+n2;
          n1=n2;
          n2=n3;
          cout << n3;
       }
      
      return 0;
  }
   