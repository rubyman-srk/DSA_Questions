class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector <int> pos;
        vector <int> neg;
        vector <int> res(nums.size());
        int i=0;
        while(i<nums.size()){
            if(nums[i]>=0){
                pos.push_back(nums[i]);
                i++;
            }
            else{
                neg.push_back(nums[i]);
                i++;
            }
        }
        if(neg.size()==0){
            for(int i=0; i<pos.size(); i++){
                pos[i]=pos[i]*pos[i];
            }
            return pos;
        }
        else if(pos.size()==0){
            for(int i=0; i<neg.size(); i++){
                neg[i]=neg[i]*neg[i];
            }
            reverse(neg.begin(),neg.end());
            return neg;
        }
        else{
            int j=0;
            int k=0;
            int id=0;
            for(int i=0; i<neg.size(); i++){
                neg[i]=neg[i]*neg[i];
            }
            reverse(neg.begin(),neg.end());
            for(int i=0; i<pos.size(); i++){
                pos[i]=pos[i]*pos[i];
            }
            while(k<neg.size() && j<pos.size()){
                if(pos[j]>neg[k]){
                    res[id]=neg[k];
                    k++;
                    id++;
                }
                else{
                    res[id]=pos[j];
                    id++;
                    j++;
                }
            }
            while(k<neg.size()){
                res[id]=neg[k];
                id++;
                k++;
            }
            while(j<pos.size()){
                res[id]=pos[j];
                id++;
                j++;
            }
            return res;
        }
    }
};