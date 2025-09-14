//Hackerrank
vector<int> gradingStudents(vector<int> grades) {
    vector<int> ans;
    for(int i = 0; i<grades.size(); i++){
        if(grades[i] >=38){
            int old = grades[i];
            while(grades[i] % 5 != 0){
                grades[i] += 1;
            }
            if(grades[i] - old < 3){
                ans.push_back(grades[i]);
            }else {
                ans.push_back(old);
            }
            
        }
        
        else {
            ans.push_back(grades[i]);
        }
        
    }
    return ans;
}
