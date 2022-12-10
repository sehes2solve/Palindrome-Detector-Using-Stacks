#include <iostream>
#include <stack>

using namespace std;

bool isPalindrome(string word);


int main()
{
    cout << " Welcome To Your Palindrome Detector " << endl;
    while (true)
    {
        cout<<endl;
        cout  <<" What Would You Like To Do ? " <<endl
              << "1-Run Test Cases" <<endl
              << "2-Enter Your Word" <<endl
              << "3-End The Program" <<endl;
        string choice;
        cin>>choice;
        if(choice=="1")
        {
            cout<<"Test Trials.."<<endl;

            cout<<"Trying level"<<endl;
            cout << ((isPalindrome( "level"))? "true" : "false");
            cout<<endl;

            cout<<"Trying rain"<<endl;
            cout << ((isPalindrome( "rain"))? "true" : "false");
            cout<<endl;

            cout<<"Trying mom"<<endl;
            cout << ((isPalindrome( "mom"))? "true" : "false");
            cout<<endl;

            cout<<"Trying upside"<<endl;
            cout << ((isPalindrome( "upside"))? "true" : "false");
            cout<<endl;

            cout<<"Trying noon"<<endl;
            cout << ((isPalindrome( "noon"))? "true" : "false");
            cout<<endl;

            cout<<"Trying memories"<<endl;
            cout << ((isPalindrome( "memories"))? "true" : "false");
            cout<<endl;
        }
        else if(choice=="2")
        {
            string word1;
            cout<<"Enter Your Word"<<endl;
            cin>>word1;
            cout << (isPalindrome(word1)? "true" : "false");
            cout<<endl;
        }
        else if(choice=="3")
        {
            cout<<"Thank You For Using Palindrome Detector"<<endl;
            break;

        }
        else
        {
            cout<<"Invalid Choice!,Try Again"<<endl;

        }


    }
}

bool isPalindrome(string word)
{
    stack <char> MyStack;
    int i = 0;
    for(;i < (word.size()-1)/2 ;i++)
        MyStack.push(word[i]);
    if(~word.size() & 1)///Word size is Even
        MyStack.push(word[i]);
    i++;
    for(;i < word.size() ;i++)
    {
      if(MyStack.top() == word[i])
                MyStack.pop();
    }
    return MyStack.empty() ;
}


