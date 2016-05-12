string multiply(string A, string B){
    int k1=0,k2=0;
    while(A[k1]=='0'){
        k1++;
    }
    while(B[k2]=='0'){
        k2++;
    }
    if(A[k1]=='\0' || B[k2]=='\0'){
        return "0";
    }
    A=string(A.begin()+k1,A.end());
    B=string(B.begin()+k2,B.end());
    int n1=A.size(), n2=B.size();
    int n=n1+n2;
    vector<int> r;
    for(int i=0;i<n;i++){
        r.push_back(0);
    }
    string res=string(n,'0');
    for(int i=0;i<n1;++i){
        for(int j=0;j<n2;++j){
            r[i+j+1]+=(A[i]-'0')*(B[j]-'0');
        }
    }
    for(int i=n-1;i>0;i--){
        if(r[i]>9)
            r[i-1]+=r[i]/10;
        res[i]+=r[i]%10;
    }
    res[0]+=r[0];
    return res[0]=='0'?string(res.begin()+1,res.end()):res;
}

bool compare(string A,string B){
    if(A.length()==B.length())
        return A<B;
    else if(A.length()<B.length())
        return true;
    return false;
}

int Solution::power(string A) {
    int i=0;
    int n=A.length();
    string B="";
    while(i<n && A[i]=='0') i++;
    if(i==n)
        return 0;
    while(i<n){
        B+=A[i];
        i++;
    }
    string temp="2";
    while(compare(temp,B)){
        temp=multiply(temp,"2");
    }
    if(temp.length()==B.length() && temp==B)
        return 1;
    return 0;
}
