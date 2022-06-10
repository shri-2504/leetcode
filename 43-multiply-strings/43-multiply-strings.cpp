class Solution {
public:
    string multiply(string num1, string num2) {
        string s="";
        if(num1=="0" || num2=="0")return "0";
        int m=num1.length(),n=num2.length();
        vector<int> v(m+n,0);
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                v[i+j+1]+=(num2[i]-'0')*(num1[j]-'0');
                v[i+j]+=v[i+j+1]/10;
                v[i+j+1]=v[i+j+1]%10;
            }
        }
       int i=0;
        while(v[i]==0)i++;
        while(i<v.size()){
               s+=to_string(v[i++]);
           }
       
        return s;
    }
};