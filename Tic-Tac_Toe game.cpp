#include <iostream>
using namespace std;
void print(char x[3][3])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(j==2)
            {
                cout<<" | "<<x[i][j]<<" |";
            }
            else
            {
                cout<<" | "<<x[i][j];
            }
        }
        cout<<endl;
        if(i!=2)
        {
            cout<<"_______________"<<endl;
        }
    }
}

int check(char at[3][3])
{
    if((((at[0][0]==at[0][1]) && (at[0][1]==at[0][2])) || ((at[0][0]==at[1][0]) && (at[1][0]==at[2][0]))) && at[0][0]!='-')
    {
        if(at[0][0]=='X')
        {
            cout<<"User 1 won the match";
        }
        else
        {
            cout<<"User 2 won the match";
        }
        return 1;
    }
    else if((((at[1][0]==at[1][1]) && (at[1][1]==at[1][2])) || ((at[0][1]==at[1][1]) && (at[1][1]==at[2][1]))) && at[1][1]!='-')
    {
        if(at[1][1]=='X')
        {
            cout<<"User 1 won the match";
        }
        else
        {
            cout<<"User 2 won the match";
        }
        return 1;
    }
    else if((((at[2][0]==at[2][1]) && (at[2][1]==at[2][2])) || ((at[0][2]==at[1][2]) && (at[1][2]==at[2][2]))) && at[2][2]!='-')
    {
        if(at[2][2]=='X')
        {
            cout<<"User 1 won the match";
        }
        else
        {
            cout<<"User 2 won the match";
        }
        return 1;
    }
    else if(((at[0][0]==at[1][1] && at[1][1]==at[2][2]) || (at[0][2]==at[1][1] && at[1][1]==at[2][0])) && at[1][1]!='-')
    {
        if(at[1][1]=='X')
        {
            cout<<"User 1 won the match";
        }
        else
        {
            cout<<"User 2 won the match";
        }
        return 1;
    }
    else
    {
        return 0;
    }
}
int main() {
    char t[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            t[i][j]='-';
        }
    }
    print(t);
    int n=0, x, y;
    while(n==0)
    {
        cout<<"Enter the row of 'X': ";
        cin>>x;
        cout<<"Enter the column of 'X': ";
        cin>>y;
        t[x-1][y-1]='X';
        print(t);
        n=check(t);
        if(n==1)
        {
            break;
        }
        cout<<"Enter the row of 'O': ";
        cin>>x;
        cout<<"Enter the column of 'O': ";
        cin>>y;
        t[x-1][y-1]='0';
        print(t);
        n=check(t);
    }
    return 0;
}
