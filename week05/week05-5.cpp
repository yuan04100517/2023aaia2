int maxDistance(int* colors, int colorsSize) {
    int ans = 0;
    for(int i=0; i<colorsSize; i++){
        for(int j=0; j<colorsSize; j++){
            if(colors[i] != colors[j] && j-i>ans){
                ans = j-i;
            }
        }
    }
    return ans;
}