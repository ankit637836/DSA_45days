// ques link: https://www.hackerrank.com/challenges/sam-and-substrings/problem
int M = 1e9 +7;
int substrings(string s) {
    long long sum = s[0]-'0';
    long long value = s[0]-'0';
    
    for(int i=1;i<s.length();i++){
        value = value*10 + (s[i]-'0')*(i+1);    
        value = value%M;
        
        sum = (sum+value)%M;
    }
    return sum;
}
