/*
 Author: Joonwoo Cho
 Date: 2/18/2025
*/

#include <iostream>
#include <queue>

using namespace std;

int menu;
char item;
int main()
{
    queue<char> q;
    int sizes;
    while(true)
    {
        cout << "********* Queue program *********\n";
            cout << "1. Insert item to Queue\n";
            cout << "2. Delete item from Queue\n";
            cout << "3. Print Queue\n";
            cout << "4. Exit\n\n";
            
            cout << "Enter menu : ";
            cin >> menu;
            
            if (menu == 1)
            {
                cout << "# Enter item to insert : ";
                cin >> item;
                q.push(item);
                cout << "\n";
                cout << "# '" << item << "' is inserted.\n";
                cout << "State of Queue : [";
                sizes = q.size();
                for(int i = 0; i < sizes; i++)
                {
                    if(i == sizes-1)
                    {
                        q.push(q.front());
                        cout << "'" << q.front() << "'";
                    }
                    else
                    {
                        q.push(q.front());
                        cout << "'" << q.front() << "'" << ", ";
                    }
                    q.pop();
                }
                cout <<"]\n\n";
            }
            if(menu == 2)
            {
                sizes = q.size();
                if(sizes == 0)
                {
                    cout << "# Nothing to delete in queue\n\n";
                }
                else
                {
                    cout << "First item '" << q.front() << "' was removed.\n";
                    q.pop();
                    cout << "State of Queue : [";
                    sizes = q.size();
                    for(int i = 0; i < sizes; i++)
                    {
                        if(i == sizes-1)
                        {
                            q.push(q.front());
                            cout << "'" << q.front() << "'";
                        }
                        else
                        {
                            q.push(q.front());
                            cout << "'" << q.front() << "'" << ", ";
                        }
                        q.pop();
                    }
                    cout << "]\n\n";
                }
                
            }
            if(menu == 3)
            {
                sizes = q.size();
                if(sizes == 0)
                {
                    cout << "# Nothing in queue.\n\n";
                }
                else
                {
                    cout << "# State of Queue : [";
                    for(int i = 0; i < sizes; i++)
                    {
                        if(i == sizes-1)
                        {
                            q.push(q.front());
                            cout << "'" << q.front() << "'";
                        }
                        else
                        {
                            q.push(q.front());
                            cout << "'" << q.front() << "'" << ", ";
                        }
                        q.pop();
                    }
                    cout << "]\n\n";
                }
            }
            if(menu == 4)
            {
                cout << ">>>";
                return 0;
            }
        
    }
    return 0;
}

