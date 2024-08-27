#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

struct User {
    int userID;
    int balance;
};

bool compareUsers(const User &a, const User &b) {
    return a.balance < b.balance;
}

int main() {
    int N;
    cin >> N;

    map<int, int> userBalances;

    for (int i = 0; i < N; ++i) {
        int userID, balance;
        cin >> userID >> balance;
        userBalances[userID] = balance;
    }

    int T;
    cin >> T;

    vector<string> results;

    for (int i = 0; i < T; ++i) {
        int from_userID, to_userID, amount;
        cin >> from_userID >> to_userID >> amount;

        if (userBalances[from_userID] >= amount) {
            userBalances[from_userID] -= amount;
            userBalances[to_userID] += amount;
            results.push_back("Success");
        } else {
            results.push_back("Failure");
        }
    }

    for (const string &result : results) {
        cout << result << endl;
    }
    cout<<"\n";

    vector<User> users;
    for (const auto &entry : userBalances) {
        users.push_back(User{entry.first, entry.second});
    }

    sort(users.begin(), users.end(), compareUsers);

    for (const User &user : users) {
        cout << user.userID << " " << user.balance << endl;
    }

return 0;
}
