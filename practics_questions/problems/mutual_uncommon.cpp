#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;

    int temp;

    vector<int> m_vector;
    vector<int> n_vector;

    for(int i = 0; i < m; i++){
        cin >> temp;
        m_vector.push_back(temp);
    }

    for(int i = 0; i < n; i++){
        cin >> temp;
        n_vector.push_back(temp);
    }

    set<int> m_set(m_vector.begin(), m_vector.end());
    set<int> n_set(n_vector.begin(), n_vector.end());

    set<int> inserted;

    set_intersection(m_set.begin(), m_set.end(), n_set.begin(), n_set.end(), inserter(inserted, inserted.begin()));

    int p = m_set.size() - inserted.size();
    int q = n_set.size() - inserted.size();

    cout << p*q;
}