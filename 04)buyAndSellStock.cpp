int maxProfit(vector<int>& arr) {
       int bestBuy=arr[0];
       int maxProfit=0;
       int n=arr.size();
       for(int i=1;i<n;i++) {
            if(arr[i] > bestBuy) {
                maxProfit = max(maxProfit , arr[i]-bestBuy);
            }

            bestBuy = min(bestBuy , arr[i]);

       }
       return maxProfit;
    }
