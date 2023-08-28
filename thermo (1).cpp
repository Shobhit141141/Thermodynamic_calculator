 #include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0
void find_work()
{
  float u, q, w;
  cout<<endl;cout<<endl;
  cout<<"internal Energy : ";
  cin>>u;
  cout<<endl;cout<<endl;
  cout<<"if Heat is absorbed Enter +"<<endl<<"if Heat is dissipated Enter -"<<endl;
  cout<<endl;cout<<endl;
  cout<<"Heat : ";
  cin>>q;
  cout<<endl;cout<<endl;
  w=u-q;
  cout<<"-----------------------------"<<endl;
  cout<<endl;cout<<endl;
  if(w>=0)
  {
    cout<<"internal Energy : "<<u<<" J/kg"<<endl;
    cout<<"Heat : "<<q<<" J/kg"<<endl;
    cout<<"Work done on the system : "<<w<<" J/kg"<<endl;
  }
  else{
    cout<<"internal Energy : "<<u<<" J/kg"<<endl;
    cout<<"Heat : "<<q<<" J/kg"<<endl;
    cout<<"Work done by the system : "<<w<<" J/kg"<<endl;
  }
  cout<<endl;cout<<endl;
  cout<<"-----------------------------"<<endl;  
}


void find_heat()
{
  float u, q, w;
  cout<<endl;cout<<endl;
  cout<<"internal Energy : ";
  cin>>u;
  cout<<endl;cout<<endl;
  cout<<"if Work is done on the system Enter +"<<endl<<"if Work is done by the system Enter -"<<endl;
  cout<<endl;cout<<endl;
  cout<<"Work : ";
  cin>>w;
  cout<<endl;cout<<endl;
  q=u-w;
  cout<<"-----------------------------"<<endl;
  cout<<endl;cout<<endl;
  if(q>=0)
  {
    cout<<"internal Energy : "<<u<<" J/kg"<<endl;
    cout<<"Work : "<<w<<" J/kg"<<endl;
    cout<<"Heat absorbed : "<<q<<" J/kg"<<endl;
  }
  else{
    cout<<"internal Energy : "<<u<<" J/kg"<<endl;
    cout<<"Work : "<<q<<" J/kg"<<endl;
    cout<<"Heat dissipated : "<<w<<" J/kg"<<endl;
  }
  cout<<endl;cout<<endl;
  cout<<"-----------------------------"<<endl;  
}


void find_energy()
{
  float u, q, w;
  cout<<endl;cout<<endl;
  
  cout<<"if Work is done on the system Enter +"<<endl<<"if Work is done by the system Enter -"<<endl;
  cout<<endl;cout<<endl;
  cout<<"Work : ";
  cin>>w;
  cout<<endl;cout<<endl;
  
  cout<<"if Heat is absorbed Enter +"<<endl<<"if Heat is dissipated Enter -"<<endl;
  cout<<endl;cout<<endl;
  cout<<"Heat : ";
  cin>>q;
  cout<<endl;cout<<endl;
  
  
  u=q+w;
  cout<<"-----------------------------"<<endl;
  cout<<endl;cout<<endl;
    
    cout<<"Heat : "<<q<<" J/kg"<<endl;
    cout<<"Work done : "<<w<<" J/kg"<<endl;
    cout<<"internal Energy : "<<u<<" J/kg"<<endl;
    cout<<endl;cout<<endl;
  cout<<"-----------------------------"<<endl;  
}


int main()
{
    cout<<"Welcome!"<<endl;
    cout<<"This program is helpful in finding unknown terms in first law of Thermodynamics"<<endl;
    cout<<"Note : The answer is given as per the observation on system!"<<endl;
    cout<<endl;cout<<endl;
    float flag=1;
    while(flag){
      char s;
      
      cout<<"Enter accordingly "<<endl;
      cout<<"W : Work"<<endl<<"U : floaternal Energy"<<endl<<"Q : Heat"<<endl;
      cout<<endl;
      cout<<"What do you want to find? : ";
      cin>>s;
      
      
      
      if(s=='W' or s=='w'){
        find_work();
      }
      else if(s=='Q' or s=='q')
      {
        find_heat();
      }
      else if(s=='U' or s=='u')
      {
        find_energy();
      }
      else{
        cout<<"Invalid Input : "<<endl;
        cout<<"What do you want to find? * Enter valid Input * : ";
        
        main();
      }
        
     
      
      
       
      cout<<endl;cout<<endl;
      float n;
      cout<<"Continue? enter 1"<<endl<<"Stop? Enter 0"<<endl;
      cin>>n;
      if(n==0)
        flag=0;
      else if(n==1)
        flag=1;
      else {
        cout<<"enter valid input"<<endl;
        cout<<"Continue? enter 1"<<endl<<"Stop? Enter 0"<<endl;
        cin>>n;}
      cout<<endl;cout<<endl;
    }
    return 0;
}