//hackerrank
void plusMinus(vector<int> arr) {
    int n = arr.size();
    int pos = 0, neg = 0, zero = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == 0) zero++;
        else if (arr[i]>0) pos++;
        else neg++;        
    }
    cout<<fixed<<setprecision(6)<<(double)pos/n<<endl;
    cout<<fixed<<setprecision(6)<<(double)neg/n<<endl;
    cout<<fixed<<setprecision(6)<<(double)zero/n<<endl;
    
}
