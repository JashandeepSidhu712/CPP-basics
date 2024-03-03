#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.precision(20);
    cout.setf(ios::fixed);
    int tc;
    cin >> tc;
    while(tc--){
    }
}


ANAGRAM

#include<iostream>
#include <string>
#include<algorithm>
using namespace std;

class Solution
{
    
    public:
    
    Solution()
    {
        
    }
    
    void anagram(string s, string t)
    {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        if(s==t)
        {
            cout<<"Both the string are anagram";
        }
        else
        {
            cout<<"No they are not anagrams";
        }
    }
    
    ~Solution() 
    {
    }
};
int main()
{
    
    Solution obj;
    
    string s, t;
    cout<<"Enter both the strings:";
    cin>>s>>t;
    
    obj.anagram(s, t);
    
}



FIBONACCI

#include<iostream>
using namespace std;

class Solution
{
public:
    Solution() { }
    
    int fibonacci(int n)
    {
        if(n <= 1)
            return n;
        
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
    
    ~Solution() { }
};

int main()
{
    Solution obj;
    
    int n;
    cout << "Enter number to get Fibonacci term: ";
    cin >> n;
    
    cout << "Fibonacci term at position " << n << ": " << obj.fibonacci(n) << endl;
    
    return 0;
}


NTH FACTROIAL

#include<iostream>
using namespace std;

class Solution
{
    
    public:
    
    Solution()
    {
        
    }
    
    int factorial(int n)
    {
        if(n<=1)
        return n;
        
        return n*factorial(n-1);
    }
    
    ~Solution() 
    {
    }
};
int main()
{
    Solution obj;
    
    int n;
    cout<<"Enter number to get factorial";
    cin>>n;
    
    cout<<obj.factorial(n);
    
}


PRINT ALL FIBONACCI

#include<iostream>
using namespace std;

class Solution
{
    int n;

public:
    Solution(int num)
    {
        n = num;
        // No need to prompt for input here, as you're already passing 'n' as a parameter
    }

    void fibonacci()
    {
        int a = 1;
        int b = 1;

        cout << a << " " << b << " ";

        for (int i = 2; i < n; i++) // Changed 'i<=n' to 'i<n'
        {
            int c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
    }

    ~Solution()
    {
    }
};

int main()
{
    int n;
    cout << "Enter number to get fibonacci till: ";
    cin >> n;

    Solution obj(n);

    obj.fibonacci();

    return 0;
}


COPY CONSTRUCTOR

#include<iostream>
using namespace std;

class Solution
{
    int num, num2;
    
    public:
    
    Solution(int var)
    {
        num = var;
    }
    
    Solution(Solution &obj2)
    {
        num2 = obj2.num;
    }
    
    void getData()
    {
        cout<<num<<endl;
    }
    
    void getData2()
    {
        cout<<num2<<endl;
    }
    
    ~Solution()
    {
        
    }
};
int main()
{
    int var;
    cout<<"Enter var";
    cin>>var;
    
    Solution obj(var);
    
    obj.getData();
    
    Solution obj2 = obj;
    
    obj2.getData2();
    
}


#include<iostream>
using namespace std;

class Parent //parent class named Parent
{
    public:
    
    void display() //function 
    {
        cout<<"Parent class function called"<<endl;
    }
};
class Child : public Parent // child class named Child inherited from Parent class
{
    public:
    
    void display()
    {
        cout<<"Child class function called"<<endl;
    }
};
int main() // main function
{
    Child obj;
    obj.display(); //Child class function called
    
    Parent* ptr; //pointer of Parent class
    ptr->display(); //Parent class function called
    
    ptr = &obj;
    ptr->display(); //Parent class function called
}

OPERATOR OVERLOADING

#include<iostream>
#include<string>
using namespace std;

class Solution
{
    string s, t;
    public:
    
    Solution(string s, string t)
    {
        this->s = s;
        this->t = t;
    }
    
    string operator+()
    {
        return s+t;
    }
};
int main()
{
    string s, t;
    cout<<"Enter";
    cin>>s>>t;
    
    Solution obj(s,t);
    
    string concatenated = +obj;
    
    cout<<concatenated<<endl;
}


VIRTUAL FUNCTION

#include<iostream>
using namespace std;

class Parent //parent class named Parent
{
    public:
    
    virtual void display() //function 
    {
        cout<<"Parent class function called"<<endl;
    }
};
class Child : public Parent // child class named Child inherited from Parent class
{
    public:
    
    void display()
    {
        cout<<"Child class function called"<<endl;
    }
};
int main() // main function
{
    Parent* ptr; //pointer of Parent class
    
    Child obj;
    ptr = &obj;
    ptr->display(); //Child class function called
}


AMBIGUITY MULTIPLE INHERITENCE

#include<iostream>
using namespace std;

class mParent //parent class named Parent
{
    public:
    
    void display() //function 
    {
        cout<<"male Parent class function called"<<endl;
    }
};
class fParent
{
    public:
    
    void display()
    {
        cout<<"Female Parent class function called"<<endl;
    }
};
class Child : public mParent, public fParent // child class named Child inherited from Parent class
{
    public:
};
int main() // main function
{
    Child obj;
    
    obj.fParent::display();
    
}


ENCAPSULATION

#include<iostream>
using namespace std;

class Solution
{
    int a, b;
    
    public:
    
    void setData(int a, int b) //setter method with arguments
    {
        this->a = a;
        this->b = b;
    }
    
    int getData() //getter method with return
    {
        return (a+b);
    }
};
int main()
{
    Solution obj;
    
    obj.setData(2, 3);
    
    cout<<obj.getData();
}


VIRTUAL FUNCTION

#include<iostream>
using namespace std;

class Parent
{
    public:
    
    virtual void display() //overridden
    {
        cout<<"Parent"<<endl;
    }
};
class Child : public Parent
{
    public:
    
    void display() //overriding
    {
        cout<<"Child"<<endl;
    }
};
int main()
{
    Parent* ptr;
    Child obj;
    
    ptr = &obj;
    
    ptr->display();
}


PURE VIRTUAL FUNCTION

#include<iostream>
using namespace std;

class Parent
{
    public:
    
    virtual void display() = 0;
};
class Child : public Parent
{
    public:
    
    void display()
    {
        cout<<"Child"<<endl;
    }
};
int main()
{
    Child obj;
    obj.display();
}

ABSTRACTION

#include<iostream>
using namespace std;

class Parent
{
    public:
    
    virtual void display() = 0;
};
class Child : public Parent
{
    public:
    
    void display()
    {
        cout<<"Child"<<endl;
    }
};
class Child2 : public Parent
{
    public:
    
    void display()
    {
        cout<<"Child2"<<endl;
    }
};
int main()
{
    Parent* ptr;
    Parent* ptr2;
    
    Child obj;
    Child2 obj2;
    
    ptr = &obj;
    ptr->display();
    
    ptr2 = &obj2;
    ptr2->display();
}
[4:00 pm, 26/02/2024] Jashan: #include<iostream>
#include<stack>
using namespace std;

class bracketBalancing
{
public:

    void bracketbalancing()
    {
        stack<char> Stak;

        char exp[100];
        cout<<"Enter expression="<<endl;
        cin>>exp;

        for(int i=0;exp[i]!='\0';i++)
        {
            char element = exp[i];

            if(element=='{' || element=='[' || element=='(')
            {
                Stak.push(element);
                cout<<"Element pushed = "<<element<<endl;
            }
            else
                if(element=='}' || element==']' || element==')')
                {
                    if(Stak.empty())
                    {
                        cout<<"Expression Not balanced"<<endl;
                        return;
                    }

                    char popped=Stak.pop();
                    cout<<"Element popped to match = "<<popped<<endl;

                    if(element=='{' && popped=='}' || element=='[' && popped==']' || element=='(' && popped==')')
                        continue;
                    else
                    {
                        cout<<"Expression Not balanced"<<endl;
                        return;
                    }

                }
        }
        if(Stak.empty())
            cout<<"Expression balanced"<<endl;
        else
            cout<<"Expression Not balanced"<<endl;
    }
};
int main()
{
    bracketBalancing obj;

    obj.bracketbalancing();
}



#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin>>tc;
}

git init
git add .
git commit -m "any msg u want to type"
git push

https://drive.google.com/drive/folders/1fW3GD4nwnwVQtQ5PoRjzGXC5oFreFHJ4

Npm init -y
Npm install express
Npm install path
Npm install node-datetime
