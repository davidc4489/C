void arrays_digits_addition(int* array_1, int* array_2, int size_1,int size_2){
    int i = 0;
    int j = 0;
    int toAdd = 0;
    for(i = size_1-1, j = size_2-1; i >= 0 && j >= 0; i--, j--){
        if(array_1[i] + array_2[j] > 9){
            array_1[i] = array_1[i] + array_2[j] + toAdd - 10;
            toAdd = 1;
        }
        else{
            array_1[i] = array_1[i] + array_2[j] + toAdd;
            toAdd = 0;
        }
    }
}