#include<iostream>
#include<vector>
using namespace std;

int main(){
    // int n=6;
    // vector<int> start={1,3,0,5,8,5};
    // vector<int> finish={2,4,6,7,9,9};

    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=0;j<n-i-1;j++)
    //     {
    //         if(finish[j]>finish[j+1])
    //         {
    //             swap(finish[j],finish[j+1]);
    //             swap(start[j],start[j+1]);
    //         }
    //     }
    // }

    // int count=1;

    // cout<<'('<<start[0]<<','<<finish[0]<<')';
    // int end=finish[0];
    // for(int k=1;k<n;k++)
    // {
    //     if(end<=start[k])
    //     {
    //         count++;
    //         cout<<'('<<start[k]<<','<<finish[k]<<')';
    //         end=finish[k];
    //     }
    // }
    // cout<<endl;
    // cout<<count;

    int n=6;
    vector<int> start={1,3,0,5,8,5};
    vector<int> finish={2,4,6,7,9,9};

    vector<pair<int,int>> act;
    
    for(int i=0;i<finish.size();i++){
        act.push_back({finish[i],start[i]});
    }

    sort(act.begin(),act.end());

    int cnt=1;
    int end=act[0].first;

    for(int j=1;j<act.size();j++){
        if(end<=act[j].second){
            cnt++;
            end=act[j].first;
        }
    }

    cout<<cnt;

    return 0;

}
