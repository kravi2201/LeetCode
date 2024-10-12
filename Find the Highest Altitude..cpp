class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        vector<int> arr;
        arr.push_back(0);
        for(int i=0;i<gain.size();i++)
        {
            arr.push_back(arr[i]+gain[i]);

        }
    int res=*max_element(arr.begin(), arr.end());

        return  res;
    }
};