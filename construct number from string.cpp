string originalDigits(string s) {
    vector<int> freq(26,0);
    for(auto i:s){
        freq[i-'a']++;
    }
    vector<int> digit(10,0);
    digit[0] = freq['z'-'a'];
    digit[2] = freq['w'-'a'];
    digit[4] = freq['u'-'a'];
    digit[6] = freq['x'-'a'];
    digit[8] = freq['g'-'a'];        
    digit[3] = freq['h'-'a']-digit[8];
    digit[5] = freq['f'-'a']-digit[4];
    digit[7] = freq['s'-'a']-digit[6];
    digit[9] = freq['i'-'a']-digit[5]-digit[6]-digit[8];
    digit[1] = freq['n'-'a']-digit[7]-2*digit[9];

    string st = "";
    for(int i=0;i<10;i++){
        while(digit[i]--){
            st.push_back(i+'0');
        }
    }
    return st; 
}
