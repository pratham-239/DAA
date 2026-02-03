#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // vector<int> arr={900, 910, 920, 1100, 1120};
    // vector<int> dep={940, 1200, 950, 1130, 1140};

    // sort(arr.begin(),arr.end());
    // sort(dep.begin(),dep.end());

    // int i=dep[0];
    // int platform=1;
    // int ans=1;

    // for(int j=1;j<arr.size();j++){
    //     if(arr[j]<=i){
    //         platform++;
    //     }
    //     else{
    //         platform--;
    //         i++;
    //     }
    //     ans=max(ans,platform);
    // }

    // cout<<"Max. no. of platforms: "<<ans;

    vector<int> arr={900, 910, 920, 1100, 1120};
    vector<int> dep={940, 1200, 950, 1130, 1140};

    vector<pair<int,int>> event;
    for(int i=0;i<arr.size();i++){
        event.push_back({arr[i],1});
        event.push_back({dep[i],-1});
    }

    sort(event.begin(),event.end(), [](auto &a,auto &b){
        if(a.first==b.first){
            return a.second>b.second;
        }
        return a.first<b.first;
    });

    int platform=0,ans=0;

    for(auto i:event){
        platform+=i.second;
        ans=max(platform,ans);
    }

    cout<<"Max. no. of platforms: "<<ans;

    return 0;
}