int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q,size,which,index,val;
    cin>>n>>q;
    vector<vector<int> >nvec;
    for (int i=0; i<n; i++) {
        cin>>size;
        vector<int>ivec;
        for (int j=0; j<size; j++) {
            
            cin>>val;
            ivec.push_back(val);
        }
        nvec.push_back(ivec);
    }
    for (int k=0; k<q; k++) {
    cin>>which>>index;
    cout<<nvec[which][index]<<endl;
    }
    
    
    return 0;
}