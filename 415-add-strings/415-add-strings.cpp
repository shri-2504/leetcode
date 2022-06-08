class Solution {
public:
    string addStrings(string num1, string num2) {
        string result="";
        int n=num1.length(),m=num2.length(),carry=0;
        int i=num1.length()-1,j=num2.length()-1;
        int x,y,z;
        while(i>=0 || j>=0||carry){
            int temp1=j<0?0:num2[j]-'0';
            int temp2=i<0?0:num1[i]-'0';
            i--,j--;
            int ans=temp1+temp2+carry;
            carry=ans/10;
            int add=ans%10;
            result+=add+'0';
          
        }
       
        reverse(result.begin(),result.end());
        return result;
    }
};