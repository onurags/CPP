vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> ans;
    int al = 0; int bo = 0;
    for(int i = 0; i<a.size(); i++){
        if(a[i] == b[i]) continue;
        else if(a[i] > b[i]) {
            al += 1;
        }else {
            bo += 1;
        }
    }
    ans.push_back(al);
    ans.push_back(bo);
    return ans;
}
