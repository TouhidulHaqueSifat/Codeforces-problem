

/*bool isSorted(vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}
vector<int>solve(vector<int>&arr, int n)
{
    while(!isSorted(arr))
    {
        int i=0, j=1, s = -1;
        while(j<n)
        {
            if(arr[i] > arr[j])
            {
                s = i;
            }
            i++,j++;
        }
        if(s == -1)
        {
            break;
        }
        arr[n-1] = arr[s] + 1;
        for(int k=s; k<n-1; k++)
        {
            arr[k] = arr[k+1];

        }

    }

    return arr;

}
*/
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<long long >arr(n);
    multiset<long long >s;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        s.insert(arr[i]);
    }

    vector<long long>ans;
    for(auto it:arr)
    {
        int f = (*s.begin());
        if(it == f)
        {
            ans.push_back(it);
        }
        else
        {
            ans.push_back(it+1);
            s.insert(it+1);
        }
        auto ptr = s.find(it);
        s.erase(ptr);
    }
    sort(ans.begin(), ans.end());
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        solve();
    }
}
