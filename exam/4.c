calculate(int A[], int n){
    int sum;
    for (int i=0; i<n; i++){
        sum += A[i];
    }
    int perfectM = sum/2;
    int dp[n+1][perfectM+1];
    for (int i=0; i<n+1; i++){
        dp[0][i]=0;
    }
    for (int i=0; i<n+1; i++){
        dp[i][0]=0;
    }
    for (int i=1; i<n+1; i++){
        for (int j=1; j<perfectM+1; j++){
            if (dp[i-1][j] + A[i-1] > j){
                dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][0] + dp[i-1][j];
            }
        }
    }
    return dp[n][perfectM];
}