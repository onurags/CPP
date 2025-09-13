//hackerrank
string timeConversion(string s) {
    string period = s.substr(8, 2);
    int hour = stoi(s.substr(0, 2));
    
    if(period == "AM"){
        if(hour == 12) hour = 0;
    }else {
        if(hour != 12) hour += 12;
    }
    
    string hh = (hour<10 ? "0":"") + to_string(hour);
    return hh + s.substr(2, 6);
}
