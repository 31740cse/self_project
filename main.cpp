#include <bits/stdc++.h>
using namespace std;
class user
{
protected:
    string name;
    string mobile;
    string age;
    map<string, string> data;

public:
    void reg();
    void del_user();
    void log_in();
};
class showroom : public user
{
    private:
    map<string, string> v;

public:
    void show();
    void add();
    void remove();
};
class garrage : public user
{
    void service();
};
int main()
{
    cout << "Welcome to xyz automobiles " << endl;
    user customer;
    user admin;
    int choice = 1;
    while (choice)
    {
        cout << "1: Register" << endl;
        cout << "2: login" << endl;
        cout << "0: exit" << endl;
        cin >> choice;
        system("clear");
        if (choice == 1)
            customer.reg();
        else if (choice == 2)
            customer.log_in();
    }
    cout << "Thank You: Visit again" << endl;
    return 0;
}

void user::reg()
{
    string tname, tmobile, tage;
    cout << "please enter your name" << endl;
    cin >> tname;
    cout << "enter your mobile number" << endl;
    cin >> tmobile;
    cout << "enter your age" << endl;
    cin >> tage;
    auto it = data.find(tmobile);
    if (it != data.end())
    {
        cout << "you are already registered with us please tyr to login" << endl;
        return;
    }
    cout << "please enter your password" << endl;
    string temp1, temp2;
    cin >> temp1;
    cout << "please type your password" << endl;
    cin >> temp2;
    if (temp1 != temp2)
        cout << "both passwords are not same please enter same password" << endl;
    else
    {
        data.emplace(mobile, temp1);
        name = tname;
        age = tage;
        mobile = tmobile;
    }
    system("clear");
    return;
}

void user::log_in()
{
    cout << "Enter your mobile number" << endl;
    string username;
    cin >> username;
    auto it = data.find("username");
    if (it == data.end())
    {
        cout << "you are not registered with us!";
        return;
    }
again:
    cout << "Enter your password";
    string pass;
    cin >> pass;
    if (it->second != pass)
    {
        cout << "Invalid credintial" << endl;
        goto again;
        return;
    }
    cout << "Welcome" <<
}