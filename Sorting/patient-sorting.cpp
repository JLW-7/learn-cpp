#include <bits/stdc++.h>

using namespace std;

struct Patient {
    string id;
    int age;
    int order;
};

bool compare(const Patient &a, const Patient &b) {
    if (a.age >= 60 && b.age < 60){
        return true;
    }  
    if (a.age < 60 && b.age >= 60) {
        return false;
    }

    if (a.age >= 60 && b.age >= 60) {
        if (a.age == b.age) {
            return a.order < b.order;
        }
        return a.age > b.age;
    }
    return a.order < b.order;
}

int main() {
    int n;
    cin >> n;
    vector<Patient> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i].id >> p[i].age;
        p[i].order = i;
    }

    sort(p.begin(), p.end(), compare);

    for (const auto& patient : p) {
        cout << patient.id << endl;
    }
}